
NAME=libftprintf.a

SRCS= src/color_redactor.c \
		src/digit_redactor.c \
		src/flag_analazer.c \
	    src/flags.c \
		src/ft_printf.c \
		src/specificator.c \
		src/str_redactor.c \

OBJECTS=*.o

INCLUDES=src/

all: $(NAME)

$(NAME):
	@make -C libft/ re
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar -rc $(NAME) $(OBJECTS) libft/*.o
	ranlib $(NAME)

clean:
	@make -C libft/ clean
	/bin/rm -f $(OBJECTS)

fclean: clean
	@make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all
