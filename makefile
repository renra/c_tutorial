all:
	gcc main.c extern.c pointers.c struct.c union.c bit_fields.c typedef.c io.c file_io.c macros.c swap.c casting.c error.c recursion.c variable_arguments.c memo.c -o tutorial

clean:
	rm -rf *.o tutorial