CXX := g++
SRCS := $(wildcard *.cpp)

.PHONY: default
default: main
	./main

main: $(SRCS)
	$(CXX) $^ -o $@

.PHONY: clean
clean:
	rm main
