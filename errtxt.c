#ifdef __GNUC__
#define	GCC_SPECIFIC(x)	x
#else
#define	GCC_SPECIFIC(x)
#endif	/* __GNUC__ */


static char     rcsid[] GCC_SPECIFIC (__attribute__ ((unused))) = "$Id: errtxt.c,v 1.2 2001/02/17 03:41:28 mike Exp $";

unsigned char   *errtxt[] = {
	" ����������� ��.",     /*  0 */
	" ����� ������",        /*  1 */
	" �����.��.����",       /*  2 */
	" ���� ����",           /*  3 */
	" ���� ������!",        /*  4 */
	" Err 5",               /*  5 */
	" Err 6",               /*  6 */
	" Err 7",               /*  7 */
	" Err 8",               /*  8 */
	" Err 9",               /*  9 */
	" Err 10",              /* 10 */
	" Err 11",              /* 11 */
	" Err 12",              /* 12 */
	" Err 13",              /* 13 */
	" ������� �� ����",     /* 14 */
	" ������������ ��",     /* 15 */
	" ���.� ���.�����",     /* 16 */
	" ���.� ���.�����",     /* 17 */
	" ������.�������",      /* 18 */
	" ����� ����������",    /* 19 */
	" �������� �������",    /* 20 */
	" ������� �� ����.",    /* 21 */
	" ������� �� ���.",     /* 22 */
	" ������� �� ���",      /* 23 */
	" ������� ���",         /* 24 */
	" ����� ��������",      /* 25 */
	" �����.��� ������",    /* 26 */
	" �������� ��� ���",    /* 27 */
	" ����   ������",       /* 28 */
	" ���.�� ��.� ����",    /* 29 */
	" ��� ����� ��.���",    /* 30 */
	" ��.�������>6200",     /* 31 */
	" ��� ������",          /* 32 */
	" �����.� �����.��",    /* 33 */
	" ��.� ���.��.����",    /* 34 */
	" �����.� �����.��",    /* 35 */
	" ������.���������",    /* 36 */
	" ������ �� ���",       /* 37 */
	" ������� �����",       /* 38 */
	" ��� ����� ����!",     /* 39 */
	" �����.����.�� ��",    /* 40 */
	" ����.���.��>4096",    /* 41 */
	" ������ �� ���",       /* 42 */
	" ��� �� � ��.���",     /* 43 */
	" � ��.���.����>32",    /* 44 */
	" ����� ���������.",    /* 45 */
	" ��� ���.� ��.���",    /* 46 */
	" ������.����.� ��",    /* 47 */
	" ������ �� ���",       /* 48 */
	" ��������  ������",    /* 49 */
	" ��� ������ �� ��",    /* 50 */
	" ����",                /* 51 */
	" �R�SIN(�):|�|>1",     /* 52 */
	" ������(�): � <0",     /* 53 */
	" ��������(�):�<0",     /* 54 */
	" ���(�): �>44",        /* 55 */
	" ����� ���>200",       /* 56 */
	" ���.��.� ���.���",    /* 57 */
	" ���� � ��.�����",     /* 58 */
	" ������ �� ���-�.",    /* 59 */
	" �������  �������",    /* 60 */
	" ��� ����� � ����",    /* 61 */
	" �����  �������",      /* 62 */
	" �220 �� ��������",    /* 63 */
	" ����� ����������",    /* 64 */
	" ���,����� �� ���",    /* 65 */
	" �����.>������.",      /* 66 */
	" ������ ��������",     /* 67 */
	" ��� ������ �����",    /* 68 */
	" �� � ���.�����",      /* 69 */
	" �� ������� ����.",    /* 70 */
	" �����.���������",     /* 71 */
	" ����� �����",         /* 72 */
	" ��.�� �� ��",         /* 73 */
	" �� ����.",            /* 74 */
	" �� ���.",             /* 75 */
	" ���",                 /* 76 */
	" ��� ���. ��� ���",    /* 77 */
	" �NQ<=�����.=>D�Q",    /* 78 */
	" Err 79",              /* 79 */
	" Err 80",              /* 80 */
	" ��. �����",           /* 81 */
};

/*
 *      $Log: errtxt.c,v $
 *      Revision 1.2  2001/02/17 03:41:28  mike
 *      Merge with dvv (who sometimes poses as root) and leob.
 *
 *      Revision 1.1.1.1  2001/02/01 03:48:39  root
 *      e50 and -Wall fixes
 *
 *      Revision 1.2  2001/01/31 22:59:46  dvv
 *      fixes for Whetstone FORTRAN test;
 *      fixes to shut -Wall up and (more importantly) make scanf (and printf
 *      	args to match the formats
 *
 *      Revision 1.1  1999/01/22 18:35:24  mike
 *      Initial revision
 *
 */
