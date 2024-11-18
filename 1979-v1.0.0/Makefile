.DEFAULT_GOAL=help
.PHONY: run build clean help
SRC = src
BUILD = build
SRCS := $(shell find $(SRC) -name *.cpp -or -name *.c* -or -name *.cc)
OBJS := $(SRCS:%=$(BUILD)/%.o)
CFLAGS = -I $(SRC)/include
LDFLAGS =
CC = g++
TARGET = $(BUILD)/unintentional_ptr_scaling


run: $(TARGET) ## Run the test case

build: $(TARGET) ## Build the test case

$(TARGET): $(OBJS) ## Build the binary
	$(CC) $(CFLAGS) $^ $(LDFLAGS) -o $@

$(BUILD)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< $(LDFLAGS) -o $@

$(BUILD)/%.cc.o: %.cc
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< $(LDFLAGS) -o $@

$(BUILD)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< $(LDFLAGS) -o $@

clean: ## Clean the test case
	rm -r $(BUILD)

help: ## Show this help
	@grep -E '^[a-zA-Z0-9_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'
