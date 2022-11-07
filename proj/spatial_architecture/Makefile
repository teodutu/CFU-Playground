CC = riscv64-unknown-elf-gcc
CFLAGS = -I../../third_party/SaxonSoc -I../../common/src # TODO: use ../proj.mk
OBJDUMP = riscv64-unknown-elf-objdump

BINARY = custom_instruction

all: $(BINARY)

objdump:
	$(OBJDUMP) -d $(BINARY)

clean:
	rm -f *.o $(BINARY)
