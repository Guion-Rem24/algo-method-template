# TODO: 
CC = g++

PROJ_DIR = /root/src

BUILD_DIR = /root/src/scripts/run_cpp_test/build

TARGET = run_test

SRCS += $(PROJ_DIR)/scripts/run_cpp_test/run_test.cpp $(PROJ_DIR)/scripts/questions/${No}/tests.cpp

OBJS = $(SRCS:.cpp=.o)

INCS = $(PROJ_DIR)/scripts/run_cpp_test

INCDIR = -I/root/src/scripts

LIBDIR = 

LIBS = 

# $(OBJS): $(SRCS)
# 	$(CC) $(CFLAGS) $(INCDIR) -I$(INCS) -c $(SRCS) 

# $(TARGET): $(OBJS)
# 	$(CC) $(OBJS) -o $@
# $(LIBDIR) $(LIBS)

run:
	echo ${CPATH}
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(INCS) -c $(PROJ_DIR)/questions/${No}/tests.cpp
	$(CC) $(CFLAGS) -I$(INCS) -c $(PROJ_DIR)/scripts/run_cpp_test/run_test.cpp
	$(CC) *.o -o $(TARGET)
	./$(TARGET) ${No}

