
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <wchar.h>
# include "../libft/libft.h"
# include <stdio.h>

typedef struct	s_flags
{
	short			width;
	unsigned short	length;
	unsigned short	steps;
	unsigned char	spcf;
	unsigned char	filler;
	unsigned char	hashtag;
	unsigned char	minus;
	unsigned char	spase;
	unsigned char	plus;
	unsigned char	zero;
	unsigned char	l_flag;
	unsigned char	ld_flag;
	unsigned char	h_flag;
	unsigned char	j_flag;
	unsigned char	z_flag;
}				t_flag;

t_flag			flag_analazer(const char *s);
char			*specifier(t_flag *flags, va_list *ap);
char			*redactor(char *arg, t_flag flags, register char spcf);
char			*str_redactor(char *arg, register t_flag flags);
int				color_redactor(const char *str);
int				putstr_for_null_char(char *s);
int				ft_printf(const char *format, ...);
char			*hendler_s_c(t_flag *flags, va_list *ap);
char			*flags_d_i(register t_flag flags, va_list *ap);
char			*hendler_o_f(register t_flag flags, va_list *ap);
char			*hendler_big_u_u(register t_flag flags, va_list *ap);
char			*hendler_big_x_x(t_flag flags, va_list *ap);

#endif
