# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelabro <gdelabro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/15 15:37:25 by gdelabro          #+#    #+#              #
#    Updated: 2018/12/03 17:33:52 by gdelabro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG_NAME1 = Colleen
SRC_PROG1 = C/Colleen.c

PROG_NAME2 = Grace
SRC_PROG2 = C/Grace.c

PROG_NAME3 = Sully
SRC_PROG3 = C/Sully.c


all: $(PROG_NAME1) $(PROG_NAME2) $(PROG_NAME3)

$(PROG_NAME1): $(SRC_PROG1)
	@gcc -Wall -Wextra -Werror $(SRC_PROG1) -o $(PROG_NAME1)
	@echo "\033[0;1mCompilation of \033[36;1m$(PROG_NAME1)\033[0;1m: [\033[1;5;32mOK\033[0;1m]"

$(PROG_NAME2): $(SRC_PROG2)
	@gcc -Wall -Wextra -Werror $(SRC_PROG2) -o $(PROG_NAME2)
	@echo "\033[0;1mCompilation of \033[34;1m$(PROG_NAME2)\033[0;1m: [\033[1;5;32mOK\033[0;1m]"

$(PROG_NAME3): $(SRC_PROG3)
	@gcc -Wall -Wextra -Werror $(SRC_PROG3) -o $(PROG_NAME3)
	@echo "\033[0;1mCompilation of \033[35;1m$(PROG_NAME3)\033[0;1m: [\033[1;5;32mOK\033[0;1m]"

clean:
	@rm -rf Sully_4.c Sully_4 Sully_3.c Sully_3 Sully_2.c Sully_2 Sully_1.c SUlly_1 Sully_0.c Sully_0 Grace_kid.c
	@echo "\033[34;1m$(PROG_NAME2)\033[0;1m \033[35;1m$(PROG_NAME3)\033[0;1m: kids deleted"

fclean: clean
	@rm -rf $(PROG_NAME1) $(PROG_NAME2) $(PROG_NAME3)
	@echo "\033[36;1m$(PROG_NAME1)\033[0;1m \033[34;1m$(PROG_NAME2)\033[0;1m \033[35;1m$(PROG_NAME3)\033[0;1m: deleted"

re: fclean all

.PHONY: all clean fclean re
