﻿#ifndef _MATHLIB_H
#define _MATHLIB_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define __stdcall

extern "C" void conv(float *xin, float *h, int lx, int lh,float *xout);//线性卷积
extern "C" 
{
int __stdcall abint(double *a,int n,double *b,double eps,double *x);
int __stdcall agmiv(double *a,int m,int n,double *b,double *x,double *aa,double eps,double *u,double *v,int ka);
int __stdcall agmqr(double *a,int m,int n,double *b,double *q);
void __stdcall agrad(double *a,int n,double *b,double eps,double *x);
int __stdcall bginv(double *a,int m,int n,double *aa,double eps,double *u,double *v,int ka);
int __stdcall bmuav(double *a,int m,int n,double *u,double *v,double eps,int ka);
int __stdcall dcsrt(double *ar,double *ai,int n,double *xr,double *xi);
void __stdcall isqt1(double *x,double *y,int n,double *a,double *dt);
void __stdcall isqt2(double *x,double *y,int m,int n,double *a,double *dt,double *v);
void __stdcall isqt3(int n,int k,double *x,double f1,double f2,double eps,double *xx,double *b,double *v,double *s,double *dt,double *ye,double *yr,double *r);
void __stdcall kfour(double *f,int n,double *a,double *b);
void __stdcall kkabg(int n,double *x,double t,double a,double b,double c,double *y);
void __stdcall kkfft(double *pr,double *pi,int n,int k,double *fr,double *fi,int l,int il);
void __stdcall kkfwt(double *p,int n,int k,double *x);
void __stdcall kkspt(int n,double *y,double *yy);
int __stdcall klman(int n,int m,int k,double *f,double *q,double *r,double *h,double *y,double *x,double *p,double *g);
double __stdcall lbsl1(int n,double x);
double __stdcall lbsl2(int n,double x);
double __stdcall lbsl3(int n,double x);
double __stdcall lbsl4(int n,double x);
double __stdcall lcoss(double x);
double __stdcall lelp1(double k,double f);
double __stdcall lelp2(double k,double f);
double __stdcall lexpp(double x);
double __stdcall lgam1(double x);
double __stdcall lgam2(double a,double x);
double __stdcall lsinn(double x);
double __stdcall lbeta(double a,double b,double x);
double __stdcall lchii(double x,int n);
double __stdcall lerrf(double x);
double __stdcall lffff(double f,int n1,int n2);
double __stdcall lgass(double a,double d,double x);
double __stdcall lstdt(double t,int n);
double __stdcall mgrn1(double u,double g,double *r);
void __stdcall mgrns(double u,double g,double *r,int n,double *a);
int __stdcall mrab1(int a,int b,int *r);
void __stdcall mrabs(int a,int b,int *r,int *p,int n);
double __stdcall mrnd1(double *r);
void __stdcall mrnds(double *r,double *p,int n);
double __stdcall nbply(double *a,int m,int n,double x,double y);
void __stdcall ncdiv(double *pr,double *pi,int m,double *qr,double *qi,int n,double *sr,double *si,int k,double *rr,double *ri,int l);
void __stdcall ncmul(double *pr,double *pi,int m,double *qr,double *qi,int n,double *sr,double *si,int k);
void __stdcall ncply(double *ar,double *ai,int n,double x,double y,double *u,double *v);
double __stdcall nfpqv(double *x,double *b,int n,double t);
void __stdcall npdiv(double *p,int m,double *q,int n,double *s,int k,double *r,int l);
void __stdcall nplys(double *a,int n,double *x,int m,double *p);
double __stdcall nplyv(double *a,int n,double x);
void __stdcall npmul(double *p,int m,double *q,int n,double *s,int k);
void __stdcall occos(double x,double y,double *u,double *v);
void __stdcall ocdiv(double a,double b,double c,double d,double *e,double *f);
void __stdcall ocexp(double x,double y,double *u,double *v);
void __stdcall oclog(double x,double y,double *u,double *v);
void __stdcall ocmul(double a,double b,double c,double d,double *e,double *f);
void __stdcall ocsin(double x,double y,double *u,double *v);
void __stdcall ontrt(double x,double y,int n,double *u,double *v);
void __stdcall oplot(int n,double *x,double *y,char xc,char yc,char c,double *xd,double *yd);
void __stdcall opowr(double x,double y,int n,double *u,double *v);

void __stdcall pcbub(char *p,int n);
void __stdcall pchap(char *p,int n);
void __stdcall pcqck(char *p,int n);
void __stdcall pcshl(char *p,int n);
void __stdcall pibub(int *p,int n);
void __stdcall pihap(int *p,int n);
void __stdcall piqck(int *p,int n);
void __stdcall pishl(int *p,int n);
void __stdcall prbub(double *p,int n);
void __stdcall prhap(double *p,int n);
void __stdcall prqck(double *p,int n);
void __stdcall prshl(double *p,int n);
void __stdcall ptopo(int n,int *r,int m,int *p);
int __stdcall qibsh(int *p,int n,int a,int b,int *m);
int __stdcall qrbsh(double *p,int n,double a,double b,int *m);
};

#endif