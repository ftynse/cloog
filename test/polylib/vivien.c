/* Generated from ../../../git/cloog/test/vivien.cloog by CLooG 0.14.0-117-g5444fca gmp bits in 0.85s. */
if (28*n >= -27) {
  for (p1=-54*n+4;p1<=4;p1++) {
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
  }
  if (n >= 1) {
    S3(i = 1) ;
  }
  if (n >= 2) {
    S4(i = 1,j = 2) ;
    S1(i = 2) ;
    S6(i = 1,j = 2) ;
  }
  for (p1=max(max(5,-54*n+4),4*n+2);p1<=6;p1++) {
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
  }
  for (p1=7;p1<=min(min(9,floord(4*n+12,3)),2*n+2);p1++) {
    for (p2=ceild(-p1+2,4);p2<=-1;p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
    if (p1%2 == 0) {
      j = (p1-2)/2 ;
      S6(i = 1) ;
    }
    if ((p1+1)%2 == 0) {
      i = (p1-3)/2 ;
      S2(j = 1) ;
    }
  }
  for (p1=2*n+3;p1<=min(9,4*n-2);p1++) {
    for (p2=ceild(-p1+2,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  if (n >= 4) {
    S4(i = 2,j = 3) ;
    S4(i = 1,j = 4) ;
    S5(i = 2,j = 3,k = 1) ;
    S6(i = 2,j = 3) ;
    S1(i = 4) ;
    S6(i = 1,j = 4) ;
  }
  if (n == 3) {
    S4(i = 2,j = 3) ;
    S5(i = 2,j = 3,k = 1) ;
    S6(i = 2,j = 3) ;
    S1(i = 4) ;
  }
  for (p1=11;p1<=min(12,2*n+2);p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    for (p2=ceild(-p1+6,4);p2<=-1;p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    if (p1%2 == 0) {
      j = (p1-4)/2 ;
      S6(i = 2) ;
    }
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
    if (p1%2 == 0) {
      j = (p1-2)/2 ;
      S6(i = 1) ;
    }
    if ((p1+1)%2 == 0) {
      i = (p1-3)/2 ;
      S2(j = 1) ;
    }
    for (p2=2;p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  if (n == 4) {
    S2(i = 4,j = 1) ;
    S2(i = 3,j = 2) ;
  }
  if (n == 5) {
    S3(i = 3) ;
    S2(i = 5,j = 1) ;
    S2(i = 4,j = 2) ;
  }
  if (n >= 6) {
    S3(i = 3) ;
    S2(i = 5,j = 1) ;
    S2(i = 4,j = 2) ;
  }
  if ((n <= 4) && (n >= 4)) {
    p1 = 2*n+4 ;
    for (p2=ceild(-n-1,2);p2<=-2;p2++) {
      j = p2+n+2 ;
      S4(i = -p2) ;
    }
    for (p2=ceild(-n+1,2);p2<=-1;p2++) {
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        j = p2+n+1 ;
        S5(k = p3) ;
      }
    }
    S6(i = 2,j = n) ;
    i = n+1 ;
    S1 ;
  }
  for (p1=14;p1<=2*n+2;p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    p2 = floord(-p1+9,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    for (p3=1;p3<=-p2;p3++) {
      i = -p2+1 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-2)/2 ;
        S5(k = p3) ;
      }
    }
    for (p2=ceild(-p1+10,4);p2<=-1;p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    if (p1%2 == 0) {
      j = (p1-4)/2 ;
      S6(i = 2) ;
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
    if (p1%2 == 0) {
      j = (p1-2)/2 ;
      S6(i = 1) ;
    }
    if ((p1+1)%2 == 0) {
      i = (p1-3)/2 ;
      S2(j = 1) ;
    }
    for (p2=2;p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  if ((n <= 4) && (n >= 4)) {
    S3(i = 3) ;
    for (p2=-n+6;p2<=2;p2++) {
      i = -p2+6 ;
      S2(j = p2) ;
    }
  }
  if (n >= 7) {
    p1 = 2*n+3 ;
    if ((n+1)%2 == 0) {
      i = (n+1)/2 ;
      S3 ;
    }
    S2(i = n,j = 1) ;
    for (p2=2;p2<=floord(n,2);p2++) {
      i = -p2+n+1 ;
      S2(j = p2) ;
    }
  }
  if ((n <= 6) && (n >= 6)) {
    p1 = 2*n+3 ;
    if ((n+1)%2 == 0) {
      i = (n+1)/2 ;
      S3 ;
    }
    S2(i = n,j = 1) ;
    for (p2=2;p2<=floord(n,2);p2++) {
      i = -p2+n+1 ;
      S2(j = p2) ;
    }
  }
  if (n >= 7) {
    p1 = 2*n+4 ;
    for (p2=ceild(-n-1,2);p2<=floord(-2*n+1,4);p2++) {
      j = p2+n+2 ;
      S4(i = -p2) ;
    }
    for (p2=ceild(-n+1,2);p2<=floord(-2*n+5,4);p2++) {
      j = p2+n+2 ;
      S4(i = -p2) ;
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        j = p2+n+1 ;
        S5(k = p3) ;
      }
    }
    for (p2=ceild(-n+3,2);p2<=-2;p2++) {
      j = p2+n+2 ;
      S4(i = -p2) ;
      i = -p2+2 ;
      j = p2+n ;
      S6 ;
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        j = p2+n+1 ;
        S5(k = p3) ;
      }
    }
    j = n-1 ;
    S6(i = 3) ;
    S5(i = 2,j = n,k = 1) ;
    S6(i = 2,j = n) ;
    i = n+1 ;
    S1 ;
  }
  if ((n <= 5) && (n >= 5)) {
    p1 = 2*n+4 ;
    for (p2=ceild(-n-1,2);p2<=floord(-2*n+1,4);p2++) {
      j = p2+n+2 ;
      S4(i = -p2) ;
    }
    for (p2=ceild(-n+1,2);p2<=-2;p2++) {
      j = p2+n+2 ;
      S4(i = -p2) ;
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        j = p2+n+1 ;
        S5(k = p3) ;
      }
    }
    for (p2=-1;p2<=floord(-2*n+5,4);p2++) {
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        j = p2+n+1 ;
        S5(k = p3) ;
      }
    }
    for (p2=ceild(-n+3,2);p2<=-1;p2++) {
      i = -p2+2 ;
      j = p2+n ;
      S6 ;
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        j = p2+n+1 ;
        S5(k = p3) ;
      }
    }
    S6(i = 2,j = n) ;
    i = n+1 ;
    S1 ;
  }
  if ((n <= 6) && (n >= 6)) {
    p1 = 2*n+4 ;
    for (p2=ceild(-n-1,2);p2<=floord(-2*n+1,4);p2++) {
      j = p2+n+2 ;
      S4(i = -p2) ;
    }
    for (p2=ceild(-n+1,2);p2<=-2;p2++) {
      j = p2+n+2 ;
      S4(i = -p2) ;
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        j = p2+n+1 ;
        S5(k = p3) ;
      }
    }
    j = n-1 ;
    S6(i = 3) ;
    S5(i = 2,j = n,k = 1) ;
    S6(i = 2,j = n) ;
    i = n+1 ;
    S1 ;
  }
  for (p1=2*n+5;p1<=min(2*n+58,4*n-10);p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    p2 = floord(-p1+9,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    for (p3=1;p3<=-p2;p3++) {
      i = -p2+1 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-2)/2 ;
        S5(k = p3) ;
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+2,2) ;
    i = -p2+2 ;
    if (p1%2 == 0) {
      j = (p1+2*p2-4)/2 ;
      S6 ;
    }
    for (p3=1;p3<=-p2;p3++) {
      i = -p2+1 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-2)/2 ;
        S5(k = p3) ;
      }
    }
    for (p2=ceild(-p1+2*n+3,2);p2<=min(-1,floord(-p1+2*n+4,2));p2++) {
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  for (p1=max(2*n+5,4*n-9);p1<=min(2*n+58,4*n-8);p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    for (p2=ceild(-p1+6,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+2,2) ;
    i = -p2+2 ;
    if (p1%2 == 0) {
      j = (p1+2*p2-4)/2 ;
      S6 ;
    }
    for (p3=1;p3<=-p2;p3++) {
      i = -p2+1 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-2)/2 ;
        S5(k = p3) ;
      }
    }
    for (p2=ceild(-p1+2*n+3,2);p2<=min(-1,floord(-p1+2*n+4,2));p2++) {
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  for (p1=max(2*n+5,4*n-7);p1<=min(2*n+58,4*n-6);p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    for (p2=ceild(-p1+6,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    for (p2=ceild(-p1+2*n+1,2);p2<=floord(-p1+9,4);p2++) {
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n+2,2);p2++) {
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    for (p2=ceild(-p1+2*n+3,2);p2<=min(-1,floord(-p1+2*n+4,2));p2++) {
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  for (p1=max(max(14,2*n+5),4*n-5);p1<=min(2*n+58,4*n-2);p1++) {
    for (p2=ceild(-p1+2,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
    }
    for (p2=max(ceild(-p1+2*n+1,2),ceild(-p1+6,4));p2<=floord(-p1+2*n+2,2);p2++) {
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    for (p2=max(ceild(-p1+2*n+3,2),ceild(-p1+10,4));p2<=min(-1,floord(-p1+2*n+4,2));p2++) {
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  if ((n >= 2) && (n <= 29)) {
    p1 = 4*n-1 ;
    p2 = n-1 ;
    j = n-1 ;
    S2(i = n) ;
  }
  for (p1=2*n+59;p1<=4*n-10;p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    p2 = floord(-p1+9,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    for (p3=1;p3<=-p2;p3++) {
      i = -p2+1 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-2)/2 ;
        S5(k = p3) ;
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+2,2) ;
    i = -p2+2 ;
    if (p1%2 == 0) {
      j = (p1+2*p2-4)/2 ;
      S6 ;
    }
    for (p3=1;p3<=-p2;p3++) {
      i = -p2+1 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-2)/2 ;
        S5(k = p3) ;
      }
    }
    p2 = floord(-p1+2*n+4,2) ;
    i = -p2+2 ;
    if (p1%2 == 0) {
      j = (p1+2*p2-4)/2 ;
      S6 ;
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  for (p1=max(2*n+59,4*n-9);p1<=4*n-8;p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    for (p2=ceild(-p1+6,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+2,2) ;
    i = -p2+2 ;
    if (p1%2 == 0) {
      j = (p1+2*p2-4)/2 ;
      S6 ;
    }
    for (p3=1;p3<=-p2;p3++) {
      i = -p2+1 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-2)/2 ;
        S5(k = p3) ;
      }
    }
    p2 = floord(-p1+2*n+4,2) ;
    i = -p2+2 ;
    if (p1%2 == 0) {
      j = (p1+2*p2-4)/2 ;
      S6 ;
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  for (p1=max(2*n+59,4*n-7);p1<=4*n-6;p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      j = (p1+2*p2)/2 ;
      S4(i = -p2) ;
    }
    for (p2=ceild(-p1+6,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    for (p2=ceild(-p1+2*n+1,2);p2<=floord(-p1+9,4);p2++) {
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n+2,2);p2++) {
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+4,2) ;
    i = -p2+2 ;
    if (p1%2 == 0) {
      j = (p1+2*p2-4)/2 ;
      S6 ;
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  for (p1=max(2*n+59,4*n-5);p1<=4*n-2;p1++) {
    for (p2=ceild(-p1+2,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        j = (p1+2*p2)/2 ;
        S4(i = -p2) ;
      }
    }
    for (p2=max(ceild(-p1+2*n+1,2),ceild(-p1+6,4));p2<=floord(-p1+2*n+2,2);p2++) {
      for (p3=1;p3<=-p2;p3++) {
        i = -p2+1 ;
        if (p1%2 == 0) {
          j = (p1+2*p2-2)/2 ;
          S5(k = p3) ;
        }
      }
    }
    for (p2=max(ceild(-p1+2*n+3,2),ceild(-p1+10,4));p2<=floord(-p1+2*n+4,2);p2++) {
      i = -p2+2 ;
      if (p1%2 == 0) {
        j = (p1+2*p2-4)/2 ;
        S6 ;
      }
    }
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        i = (p1-2*p2-1)/2 ;
        S2(j = p2) ;
      }
    }
  }
  for (p1=max(7,4*n);p1<=min(2*n+58,4*n+1);p1++) {
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
  }
  if (n >= 30) {
    p1 = 4*n-1 ;
    p2 = n-1 ;
    j = n-1 ;
    S2(i = n) ;
  }
  for (p1=max(max(7,-54*n+4),4*n+2);p1<=2*n+58;p1++) {
    if (p1%2 == 0) {
      i = (p1-2)/2 ;
      S1 ;
    }
  }
  for (p1=max(4*n,2*n+59);p1<=4*n+1;p1++) {
    if ((p1+3)%4 == 0) {
      i = (p1-1)/4 ;
      S3 ;
    }
  }
}
