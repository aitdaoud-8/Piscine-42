# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    git_commit.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 17:52:14 by ablaamim          #+#    #+#              #
#    Updated: 2021/09/21 07:24:07 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

git log --format="%H" | head -n 5
