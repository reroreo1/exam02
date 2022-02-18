/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 07:40:14 by mac               #+#    #+#             */
/*   Updated: 2022/02/18 07:41:36 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int checker(char a, char *b)
{
    int i = 0;
    while(b[i])
    {
        if (b[i] == a)
            return 1;
        i++;
    }
    return 0;
}
int main(int ac, char **av)
{
    int i = 0;
    bool b[255] = {false};
    if(ac == 3)
    {
        while(av[1][i])
        {
            if (checker(av[1][i],av[2]))
            {
                if (b[av[1][i]] == 0)
                {    
                    write(1, &av[1][i],1);
                    b[av[1][i]] = 1;
                }
            }
            i++;
        }
    }
    write(1,"\n",1);
}