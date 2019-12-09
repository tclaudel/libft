# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: tclaudel <tclaudel@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/11 16:32:18 by tclaudel     #+#   ##    ##    #+#        #
#    Updated: 2019/12/09 16:57:00 by tclaudel    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #


SRCS_ALLOC		=	$(addprefix alloc/, ft_calloc.c ft_strdup.c ft_strndup.c\
					ft_substr.c)

SRCS_CHAR		=	$(addprefix char/, ft_isalnum.c ft_isalpha.c ft_isascii.c\
					ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c)

SRCS_CONVERT	=	$(addprefix convert/, ft_atoi.c ft_itoa.c ft_itoa_base.c\
					ft_itoa_ll_base.c ft_itoa_u_base.c)

SRCS_DISPLAY	=	$(addprefix display/, ft_putchar.c ft_putchar_fd.c\
					ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c)

SRCS_FREE		=	$(addprefix free/, ft_strdel.c)

SRCS_LIST		=	$(addprefix list/, ft_lstadd_back_bonus.c\
					ft_lstadd_front_bonus.c ft_lstlast_bonus.c\
					ft_lstnew_bonus.c ft_lstsize_bonus.c)

SRCS_MEM		=	$(addprefix mem/, ft_bzero.c ft_memccpy.c ft_memchr.c\
					ft_memcmp.c ft_memcpy.c ft_memfjoin.c ft_memjoin.c\
					ft_memmove.c ft_memset.c)

SRCS_STR		=	$(addprefix str/, ft_split.c ft_strchr.c ft_strcpy.c\
					ft_strfjoin.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
					ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnlen.c\
					ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strtrim.c ft_strtok.c)

SRCS_READ		=	$(addprefix read/, ft_get_next_line.c)

SRCS_PRINTF		=	$(addprefix display/ft_printf/, ft_d_converter.c ft_p_converter.c ft_s_converter.c ft_upx_converter.c ft_c_converter.c\
					ft_u_converter.c ft_x_converter.c ft_pourcent_converter.c ft_printf.c ft_is_flag.c ft_is_option.c ft_is_pourcent.c\
					ft_analyser.c ft_set_flags.c ft_set_width.c ft_apply_flags.c ft_apply_convert.c ft_router.c ft_is_in_flags.c\
					ft_itoa_pf.c ft_char_in_string.c ft_dprintf.c ft_printfduq.c)

SRCS_NAME			=	$(SRCS_ALLOC) $(SRCS_CHAR) $(SRCS_CONVERT) $(SRCS_DISPLAY) $(SRCS_FREE) $(SRCS_LIST) $(SRCS_MEM) $(SRCS_STR) $(SRCS_READ) $(SRCS_PRINTF)

HEADER				=	includes/

SRC_PATH			=	srcs/

SRCS				=	$(addprefix $(SRC_PATH), $(SRCS_NAME))

OBJ_NAME			=	${SRCS_NAME:.c=.o}

OBJ_PATH			=	bin/

OBJ					=	$(addprefix $(OBJ_PATH), $(OBJ_NAME))

NAME				=	libft.a

CC					=	cc

RM					=	rm -rf

FLAG				=	-Wall -Werror -Wextra -g3 #-fsanitize=address

all: $(OBJ_PATH) $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@ar rcs $(NAME) $(OBJ)
	@printf "	\033[2K\r\033[1;38;5;110mlibft:	\033[0;38;5;121mUpdated\n\033[0m"

$(OBJ_PATH):
	@mkdir -p bin/ 2> /dev/null
	@mkdir -p bin/alloc 2> /dev/null
	@mkdir -p bin/char 2> /dev/null
	@mkdir -p bin/convert 2> /dev/null
	@mkdir -p bin/display 2> /dev/null
	@mkdir -p bin/display/ft_printf 2> /dev/null
	@mkdir -p bin/free 2> /dev/null
	@mkdir -p bin/list 2> /dev/null
	@mkdir -p bin/mem 2> /dev/null
	@mkdir -p bin/str 2> /dev/null
	@mkdir -p bin/read 2> /dev/null

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(HEADER) Makefile
	@printf "\033[2K\r\033[0;31;5;110mCompiling...	\033[37m$<\033[36m \033[0m"
	@gcc $(FLAG) -g3 -I ${HEADER} -c $< -o $@

clean:
	@printf "\33[2K\r\033[0;31;5;110mDeleting libft srcs/	\033[37m"
	@sleep 0.1
	@printf "\33[2K\r\033[0;31;5;110mDeleting libft srcs/.	\033[37m"
	@sleep 0.1
	@printf "\33[2K\r\033[0;31;5;110mDeleting libft srcs/..	\033[37m"
	@sleep 0.1
	@printf "\33[2K\r\033[0;31;5;110mDeleting libft srcs/...	\033[37m"
	@sleep 0.1
	@printf "\33[2K\r\033[0;31;5;110mDeleting libft srcs/	\033[37m"
	@sleep 0.1
	@printf "\33[2K\r\033[0;31;5;110mDeleting libft srcs/.	\033[37m"
	@sleep 0.1
	@printf "\33[2K\r\033[0;31;5;110mDeleting libft srcs/..	\033[37m"
	@sleep 0.1
	@printf "\33[2K\r\033[0;31;5;110mDeleting libft srcs/...	\033[37m"
	@sleep 0.1
	@${RM} ${OBJ_PATH}
	@printf "\33[2K\r\033[0;31;5;110mDeleted successfully!\n\033[0m"

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
