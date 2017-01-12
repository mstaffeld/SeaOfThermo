CC := gcc
CFLAGS := -std=c99 -Wall -Werror -g
OBJECTS := $(patsubst src/%.c,src/%.o,$(wildcard src/*.c))
OUTPUT := bin
TESTOBJECTS := $(patsubst test/%.c, test/%.o,$(wildcard test/*.c))
EXECUTABLE := $(OUTPUT)/thermo

compile: $(OBJECTS) $(TESTOBJECTS)
	@mkdir -p $(OUTPUT)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJECTS) $(TESTOBJECTS) `pkg-config --cflags --libs check`
	$(EXECUTABLE)

clean:
	git clean -dxf

print-%: ; @echo $*=$($*)

