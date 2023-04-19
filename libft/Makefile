NAME = libft.a

SRCS = ft_atoi.c\
        ft_strdup.c\
		ft_strlen.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memmove.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_calloc.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_split.c
           
INCLUDE = libft.h

OBJ = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall    \
         -Wextra  \
         -Werror  \

GREEN = 	\033[0;32m
YELLOW = 	\033[0;33m
RED = 		\033[0;31m
RESET = 	\033[0m

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		@echo "$(YELLOW)[Compiling Libft...] $(RESET)"
		@ar -rcs $(NAME) $(OBJ)
		@ar -rcs $(NAME)
		@echo "$(GREEN)[Libft Compiled!] $(RESET)"

mandatory: $(OBJ) $(INCLUDE)
			@echo "$(YELLOW)[Compiling_Mandatory Libft...] $(RESET)"
			@ar -rcs $(NAME) $(OBJ)
			@echo "$(GREEN)[Libft_Mandatory Compiled!] $(RESET)"

%.o: %.c $(INCLUDE)
		@$(CC) $(CFLAGS) -c $< -o $@

clean: 
		@rm -rf $(OBJ)
		@echo "$(GREEN)[Libft Cleaned] $(RESET)"

fclean:	
		@rm -rf $(OBJ) $(NAME)
		@echo "$(GREEN)[Libft Full Cleaned] $(RESET)"

re: fclean all

remandatory: fclean mandatory

.PHONY: all mandatory clean fclean re remandatory 