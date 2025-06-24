CC		:= gcc
CFLAGS	+= -O0 -g -fno-stack-protector -Wno-format-security -Wno-implicit-function-declaration
LDFLAGS += -no-pie -z execstack -Wl,-z,norelro

src	:= chal.c
dst := chal

all: $(dst)

$(dst): $(src)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(dst) $(src)

clean:
	rm -f $(dst)

.PHONY: all clean
