// -------------------------------
// _mNM
// -------------------------------

struct { swizzle1<2> _m12; };

struct { swizzle2<0, 2> _m10_m12; };
struct { swizzle2<1, 2> _m11_m12; };
struct { swizzle2<2, 0> _m12_m10; };
struct { swizzle2<2, 1> _m12_m11; };
struct { swizzle2<2, 2> _m12_m12; };

struct { swizzle3<0, 0, 2> _m10_m10_m12; };
struct { swizzle3<0, 1, 2> _m10_m11_m12; };
struct { swizzle3<0, 2, 0> _m10_m12_m10; };
struct { swizzle3<0, 2, 1> _m10_m12_m11; };
struct { swizzle3<0, 2, 2> _m10_m12_m12; };

struct { swizzle3<1, 0, 2> _m11_m10_m12; };
struct { swizzle3<1, 1, 2> _m11_m11_m12; };
struct { swizzle3<1, 2, 0> _m11_m12_m10; };
struct { swizzle3<1, 2, 1> _m11_m12_m11; };
struct { swizzle3<1, 2, 2> _m11_m12_m12; };

struct { swizzle3<2, 0, 0> _m12_m10_m10; };
struct { swizzle3<2, 0, 1> _m12_m10_m11; };
struct { swizzle3<2, 0, 2> _m12_m10_m12; };
struct { swizzle3<2, 1, 0> _m12_m11_m10; };
struct { swizzle3<2, 1, 1> _m12_m11_m11; };
struct { swizzle3<2, 1, 2> _m12_m11_m12; };

struct { swizzle3<2, 2, 0> _m12_m12_m10; };
struct { swizzle3<2, 2, 1> _m12_m12_m11; };
struct { swizzle3<2, 2, 2> _m12_m12_m12; };

struct { swizzle4<0, 0, 0, 2> _m10_m10_m10_m12; };
struct { swizzle4<0, 0, 1, 2> _m10_m10_m11_m12; };

struct { swizzle4<0, 0, 2, 0> _m10_m10_m12_m10; };
struct { swizzle4<0, 0, 2, 1> _m10_m10_m12_m11; };
struct { swizzle4<0, 0, 2, 2> _m10_m10_m12_m12; };

struct { swizzle4<0, 1, 0, 2> _m10_m11_m10_m12; };
struct { swizzle4<0, 1, 1, 2> _m10_m11_m11_m12; };

struct { swizzle4<0, 1, 2, 0> _m10_m11_m12_m10; };
struct { swizzle4<0, 1, 2, 1> _m10_m11_m12_m11; };
struct { swizzle4<0, 1, 2, 2> _m10_m11_m12_m12; };

struct { swizzle4<0, 2, 0, 0> _m10_m12_m10_m10; };
struct { swizzle4<0, 2, 0, 1> _m10_m12_m10_m11; };
struct { swizzle4<0, 2, 0, 2> _m10_m12_m10_m12; };

struct { swizzle4<0, 2, 1, 0> _m10_m12_m11_m10; };
struct { swizzle4<0, 2, 1, 1> _m10_m12_m11_m11; };
struct { swizzle4<0, 2, 1, 2> _m10_m12_m11_m12; };

struct { swizzle4<0, 2, 2, 0> _m10_m12_m12_m10; };
struct { swizzle4<0, 2, 2, 1> _m10_m12_m12_m11; };
struct { swizzle4<0, 2, 2, 2> _m10_m12_m12_m12; };

struct { swizzle4<1, 0, 0, 2> _m11_m10_m10_m12; };
struct { swizzle4<1, 0, 1, 2> _m11_m10_m11_m12; };
struct { swizzle4<1, 0, 2, 0> _m11_m10_m12_m10; };
struct { swizzle4<1, 0, 2, 1> _m11_m10_m12_m11; };
struct { swizzle4<1, 0, 2, 2> _m11_m10_m12_m12; };

struct { swizzle4<1, 1, 0, 2> _m11_m11_m10_m12; };
struct { swizzle4<1, 1, 1, 2> _m11_m11_m11_m12; };

struct { swizzle4<1, 1, 2, 0> _m11_m11_m12_m10; };
struct { swizzle4<1, 1, 2, 1> _m11_m11_m12_m11; };
struct { swizzle4<1, 1, 2, 2> _m11_m11_m12_m12; };

struct { swizzle4<1, 2, 0, 0> _m11_m12_m10_m10; };
struct { swizzle4<1, 2, 0, 1> _m11_m12_m10_m11; };
struct { swizzle4<1, 2, 0, 2> _m11_m12_m10_m12; };

struct { swizzle4<1, 2, 1, 0> _m11_m12_m11_m10; };
struct { swizzle4<1, 2, 1, 1> _m11_m12_m11_m11; };
struct { swizzle4<1, 2, 1, 2> _m11_m12_m11_m12; };

struct { swizzle4<1, 2, 2, 0> _m11_m12_m12_m10; };
struct { swizzle4<1, 2, 2, 1> _m11_m12_m12_m11; };
struct { swizzle4<1, 2, 2, 2> _m11_m12_m12_m12; };

struct { swizzle4<2, 0, 0, 0> _m12_m10_m10_m10; };
struct { swizzle4<2, 0, 0, 1> _m12_m10_m10_m11; };
struct { swizzle4<2, 0, 0, 2> _m12_m10_m10_m12; };

struct { swizzle4<2, 0, 1, 0> _m12_m10_m11_m10; };
struct { swizzle4<2, 0, 1, 1> _m12_m10_m11_m11; };
struct { swizzle4<2, 0, 1, 2> _m12_m10_m11_m12; };

struct { swizzle4<2, 0, 2, 0> _m12_m10_m12_m10; };
struct { swizzle4<2, 0, 2, 1> _m12_m10_m12_m11; };
struct { swizzle4<2, 0, 2, 2> _m12_m10_m12_m12; };

struct { swizzle4<2, 1, 0, 0> _m12_m11_m10_m10; };
struct { swizzle4<2, 1, 0, 1> _m12_m11_m10_m11; };
struct { swizzle4<2, 1, 0, 2> _m12_m11_m10_m12; };

struct { swizzle4<2, 1, 1, 0> _m12_m11_m11_m10; };
struct { swizzle4<2, 1, 1, 1> _m12_m11_m11_m11; };
struct { swizzle4<2, 1, 1, 2> _m12_m11_m11_m12; };

struct { swizzle4<2, 1, 2, 0> _m12_m11_m12_m10; };
struct { swizzle4<2, 1, 2, 1> _m12_m11_m12_m11; };
struct { swizzle4<2, 1, 2, 2> _m12_m11_m12_m12; };

struct { swizzle4<2, 2, 0, 0> _m12_m12_m10_m10; };
struct { swizzle4<2, 2, 0, 1> _m12_m12_m10_m11; };
struct { swizzle4<2, 2, 0, 2> _m12_m12_m10_m12; };

struct { swizzle4<2, 2, 1, 0> _m12_m12_m11_m10; };
struct { swizzle4<2, 2, 1, 1> _m12_m12_m11_m11; };
struct { swizzle4<2, 2, 1, 2> _m12_m12_m11_m12; };

struct { swizzle4<2, 2, 2, 0> _m12_m12_m12_m10; };
struct { swizzle4<2, 2, 2, 1> _m12_m12_m12_m11; };
struct { swizzle4<2, 2, 2, 2> _m12_m12_m12_m12; };

// -------------------------------
// _NM
// -------------------------------

struct { swizzle1<2> _23; };

struct { swizzle2<0, 2> _21_23; };
struct { swizzle2<1, 2> _22_23; };
struct { swizzle2<2, 0> _23_21; };
struct { swizzle2<2, 1> _23_22; };
struct { swizzle2<2, 2> _23_23; };

struct { swizzle3<0, 0, 2> _21_21_23; };
struct { swizzle3<0, 1, 2> _21_22_23; };
struct { swizzle3<0, 2, 0> _21_23_21; };
struct { swizzle3<0, 2, 1> _21_23_22; };
struct { swizzle3<0, 2, 2> _21_23_23; };

struct { swizzle3<1, 0, 2> _22_21_23; };
struct { swizzle3<1, 1, 2> _22_22_23; };
struct { swizzle3<1, 2, 0> _22_23_21; };
struct { swizzle3<1, 2, 1> _22_23_22; };
struct { swizzle3<1, 2, 2> _22_23_23; };

struct { swizzle3<2, 0, 0> _23_21_21; };
struct { swizzle3<2, 0, 1> _23_21_22; };
struct { swizzle3<2, 0, 2> _23_21_23; };
struct { swizzle3<2, 1, 0> _23_22_21; };
struct { swizzle3<2, 1, 1> _23_22_22; };
struct { swizzle3<2, 1, 2> _23_22_23; };

struct { swizzle3<2, 2, 0> _23_23_21; };
struct { swizzle3<2, 2, 1> _23_23_22; };
struct { swizzle3<2, 2, 2> _23_23_23; };

struct { swizzle4<0, 0, 0, 2> _21_21_21_23; };
struct { swizzle4<0, 0, 1, 2> _21_21_22_23; };

struct { swizzle4<0, 0, 2, 0> _21_21_23_21; };
struct { swizzle4<0, 0, 2, 1> _21_21_23_22; };
struct { swizzle4<0, 0, 2, 2> _21_21_23_23; };

struct { swizzle4<0, 1, 0, 2> _21_22_21_23; };
struct { swizzle4<0, 1, 1, 2> _21_22_22_23; };

struct { swizzle4<0, 1, 2, 0> _21_22_23_21; };
struct { swizzle4<0, 1, 2, 1> _21_22_23_22; };
struct { swizzle4<0, 1, 2, 2> _21_22_23_23; };

struct { swizzle4<0, 2, 0, 0> _21_23_21_21; };
struct { swizzle4<0, 2, 0, 1> _21_23_21_22; };
struct { swizzle4<0, 2, 0, 2> _21_23_21_23; };

struct { swizzle4<0, 2, 1, 0> _21_23_22_21; };
struct { swizzle4<0, 2, 1, 1> _21_23_22_22; };
struct { swizzle4<0, 2, 1, 2> _21_23_22_23; };

struct { swizzle4<0, 2, 2, 0> _21_23_23_21; };
struct { swizzle4<0, 2, 2, 1> _21_23_23_22; };
struct { swizzle4<0, 2, 2, 2> _21_23_23_23; };

struct { swizzle4<1, 0, 0, 2> _22_21_21_23; };
struct { swizzle4<1, 0, 1, 2> _22_21_22_23; };
struct { swizzle4<1, 0, 2, 0> _22_21_23_21; };
struct { swizzle4<1, 0, 2, 1> _22_21_23_22; };
struct { swizzle4<1, 0, 2, 2> _22_21_23_23; };

struct { swizzle4<1, 1, 0, 2> _22_22_21_23; };
struct { swizzle4<1, 1, 1, 2> _22_22_22_23; };

struct { swizzle4<1, 1, 2, 0> _22_22_23_21; };
struct { swizzle4<1, 1, 2, 1> _22_22_23_22; };
struct { swizzle4<1, 1, 2, 2> _22_22_23_23; };

struct { swizzle4<1, 2, 0, 0> _22_23_21_21; };
struct { swizzle4<1, 2, 0, 1> _22_23_21_22; };
struct { swizzle4<1, 2, 0, 2> _22_23_21_23; };

struct { swizzle4<1, 2, 1, 0> _22_23_22_21; };
struct { swizzle4<1, 2, 1, 1> _22_23_22_22; };
struct { swizzle4<1, 2, 1, 2> _22_23_22_23; };

struct { swizzle4<1, 2, 2, 0> _22_23_23_21; };
struct { swizzle4<1, 2, 2, 1> _22_23_23_22; };
struct { swizzle4<1, 2, 2, 2> _22_23_23_23; };

struct { swizzle4<2, 0, 0, 0> _23_21_21_21; };
struct { swizzle4<2, 0, 0, 1> _23_21_21_22; };
struct { swizzle4<2, 0, 0, 2> _23_21_21_23; };

struct { swizzle4<2, 0, 1, 0> _23_21_22_21; };
struct { swizzle4<2, 0, 1, 1> _23_21_22_22; };
struct { swizzle4<2, 0, 1, 2> _23_21_22_23; };

struct { swizzle4<2, 0, 2, 0> _23_21_23_21; };
struct { swizzle4<2, 0, 2, 1> _23_21_23_22; };
struct { swizzle4<2, 0, 2, 2> _23_21_23_23; };

struct { swizzle4<2, 1, 0, 0> _23_22_21_21; };
struct { swizzle4<2, 1, 0, 1> _23_22_21_22; };
struct { swizzle4<2, 1, 0, 2> _23_22_21_23; };

struct { swizzle4<2, 1, 1, 0> _23_22_22_21; };
struct { swizzle4<2, 1, 1, 1> _23_22_22_22; };
struct { swizzle4<2, 1, 1, 2> _23_22_22_23; };

struct { swizzle4<2, 1, 2, 0> _23_22_23_21; };
struct { swizzle4<2, 1, 2, 1> _23_22_23_22; };
struct { swizzle4<2, 1, 2, 2> _23_22_23_23; };

struct { swizzle4<2, 2, 0, 0> _23_23_21_21; };
struct { swizzle4<2, 2, 0, 1> _23_23_21_22; };
struct { swizzle4<2, 2, 0, 2> _23_23_21_23; };

struct { swizzle4<2, 2, 1, 0> _23_23_22_21; };
struct { swizzle4<2, 2, 1, 1> _23_23_22_22; };
struct { swizzle4<2, 2, 1, 2> _23_23_22_23; };

struct { swizzle4<2, 2, 2, 0> _23_23_23_21; };
struct { swizzle4<2, 2, 2, 1> _23_23_23_22; };
struct { swizzle4<2, 2, 2, 2> _23_23_23_23; };