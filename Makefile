SRC =$(wildcard src/*.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))

TSTSRC = $(wildcard tst/*.cpp)
TSTOBJ = $(patsubst %.cpp, %.o, $(TSTSRC))
TSTOBJ += $(filter-out src/main.o, $(OBJ))

all: myProgram test

IXXFLAGS += -I./include -I./googletest-master/googlemock/gtest/include -I./googletest-master/googlemock/include
CXXFLAGS = -std=c++11 -Wall -Werror $(IXXFLAGS) 

myProgram: $(OBJ)
	$(CXX) $(OBJ) -o $@
	
test: tst/testRunner
	./tst/testRunner
	
tst/testRunner: $(TSTOBJ)
	$(CXX) -pthread ./googletest-master/googlemock/make/gmock_main.a $(TSTOBJ) -o $@
	
clean:
	rm -rf $(OBJ) myProgram $(DEP) $(TSTOBJ) tst/testRunner 

.PHONY: all test clean
