FLAGS = -Wall -Werror -Wextra

OPTION_BASE_DIR = lib/option
OPTION_LIB_DIR = ${OPTION_BASE_DIR}
OPTION_INC_DIR = ${OPTION_BASE_DIR}/include

my_prog: main.o 
	cc -o build/my_prog obj/main.o -L ${OPTION_LIB_DIR} -loption

main.o : src/main.c
	cc ${FLAGS} -c src/main.c -o obj/main.o -I ${OPTION_INC_DIR}

clean:
	rm -rf build obj
