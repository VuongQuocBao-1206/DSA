# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -g3

# Source files
SRCS = $(wildcard src/*.cpp)

# Header files
HDRS = $(wildcard src/*.h)

# Output executable
TARGET = output/DSLKDon.exe

# Build target
$(TARGET): $(SRCS) $(HDRS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean target
clean:
    rm -f $(TARGET)