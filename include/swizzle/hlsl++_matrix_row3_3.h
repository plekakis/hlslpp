// -------------------------------
// _mNM
// -------------------------------

struct { swizzle1<2> _m32; };

struct { swizzle2<0, 2> _m30_m32; };
struct { swizzle2<1, 2> _m31_m32; };
struct { swizzle2<2, 0> _m32_m30; };
struct { swizzle2<2, 1> _m32_m31; };
struct { swizzle2<2, 2> _m32_m32; };

struct { swizzle3<0, 0, 2> _m30_m30_m32; };
struct { swizzle3<0, 1, 2> _m30_m31_m32; };
struct { swizzle3<0, 2, 0> _m30_m32_m30; };
struct { swizzle3<0, 2, 1> _m30_m32_m31; };
struct { swizzle3<0, 2, 2> _m30_m32_m32; };

struct { swizzle3<1, 0, 2> _m31_m30_m32; };
struct { swizzle3<1, 1, 2> _m31_m31_m32; };
struct { swizzle3<1, 2, 0> _m31_m32_m30; };
struct { swizzle3<1, 2, 1> _m31_m32_m31; };
struct { swizzle3<1, 2, 2> _m31_m32_m32; };

struct { swizzle3<2, 0, 0> _m32_m30_m30; };
struct { swizzle3<2, 0, 1> _m32_m30_m31; };
struct { swizzle3<2, 0, 2> _m32_m30_m32; };
struct { swizzle3<2, 1, 0> _m32_m31_m30; };
struct { swizzle3<2, 1, 1> _m32_m31_m31; };
struct { swizzle3<2, 1, 2> _m32_m31_m32; };

struct { swizzle3<2, 2, 0> _m32_m32_m30; };
struct { swizzle3<2, 2, 1> _m32_m32_m31; };
struct { swizzle3<2, 2, 2> _m32_m32_m32; };

struct { swizzle4<0, 0, 0, 2> _m30_m30_m30_m32; };
struct { swizzle4<0, 0, 1, 2> _m30_m30_m31_m32; };

struct { swizzle4<0, 0, 2, 0> _m30_m30_m32_m30; };
struct { swizzle4<0, 0, 2, 1> _m30_m30_m32_m31; };
struct { swizzle4<0, 0, 2, 2> _m30_m30_m32_m32; };

struct { swizzle4<0, 1, 0, 2> _m30_m31_m30_m32; };
struct { swizzle4<0, 1, 1, 2> _m30_m31_m31_m32; };

struct { swizzle4<0, 1, 2, 0> _m30_m31_m32_m30; };
struct { swizzle4<0, 1, 2, 1> _m30_m31_m32_m31; };
struct { swizzle4<0, 1, 2, 2> _m30_m31_m32_m32; };

struct { swizzle4<0, 2, 0, 0> _m30_m32_m30_m30; };
struct { swizzle4<0, 2, 0, 1> _m30_m32_m30_m31; };
struct { swizzle4<0, 2, 0, 2> _m30_m32_m30_m32; };

struct { swizzle4<0, 2, 1, 0> _m30_m32_m31_m30; };
struct { swizzle4<0, 2, 1, 1> _m30_m32_m31_m31; };
struct { swizzle4<0, 2, 1, 2> _m30_m32_m31_m32; };

struct { swizzle4<0, 2, 2, 0> _m30_m32_m32_m30; };
struct { swizzle4<0, 2, 2, 1> _m30_m32_m32_m31; };
struct { swizzle4<0, 2, 2, 2> _m30_m32_m32_m32; };

struct { swizzle4<1, 0, 0, 2> _m31_m30_m30_m32; };
struct { swizzle4<1, 0, 1, 2> _m31_m30_m31_m32; };
struct { swizzle4<1, 0, 2, 0> _m31_m30_m32_m30; };
struct { swizzle4<1, 0, 2, 1> _m31_m30_m32_m31; };
struct { swizzle4<1, 0, 2, 2> _m31_m30_m32_m32; };

struct { swizzle4<1, 1, 0, 2> _m31_m31_m30_m32; };
struct { swizzle4<1, 1, 1, 2> _m31_m31_m31_m32; };

struct { swizzle4<1, 1, 2, 0> _m31_m31_m32_m30; };
struct { swizzle4<1, 1, 2, 1> _m31_m31_m32_m31; };
struct { swizzle4<1, 1, 2, 2> _m31_m31_m32_m32; };

struct { swizzle4<1, 2, 0, 0> _m31_m32_m30_m30; };
struct { swizzle4<1, 2, 0, 1> _m31_m32_m30_m31; };
struct { swizzle4<1, 2, 0, 2> _m31_m32_m30_m32; };

struct { swizzle4<1, 2, 1, 0> _m31_m32_m31_m30; };
struct { swizzle4<1, 2, 1, 1> _m31_m32_m31_m31; };
struct { swizzle4<1, 2, 1, 2> _m31_m32_m31_m32; };

struct { swizzle4<1, 2, 2, 0> _m31_m32_m32_m30; };
struct { swizzle4<1, 2, 2, 1> _m31_m32_m32_m31; };
struct { swizzle4<1, 2, 2, 2> _m31_m32_m32_m32; };

struct { swizzle4<2, 0, 0, 0> _m32_m30_m30_m30; };
struct { swizzle4<2, 0, 0, 1> _m32_m30_m30_m31; };
struct { swizzle4<2, 0, 0, 2> _m32_m30_m30_m32; };

struct { swizzle4<2, 0, 1, 0> _m32_m30_m31_m30; };
struct { swizzle4<2, 0, 1, 1> _m32_m30_m31_m31; };
struct { swizzle4<2, 0, 1, 2> _m32_m30_m31_m32; };

struct { swizzle4<2, 0, 2, 0> _m32_m30_m32_m30; };
struct { swizzle4<2, 0, 2, 1> _m32_m30_m32_m31; };
struct { swizzle4<2, 0, 2, 2> _m32_m30_m32_m32; };

struct { swizzle4<2, 1, 0, 0> _m32_m31_m30_m30; };
struct { swizzle4<2, 1, 0, 1> _m32_m31_m30_m31; };
struct { swizzle4<2, 1, 0, 2> _m32_m31_m30_m32; };

struct { swizzle4<2, 1, 1, 0> _m32_m31_m31_m30; };
struct { swizzle4<2, 1, 1, 1> _m32_m31_m31_m31; };
struct { swizzle4<2, 1, 1, 2> _m32_m31_m31_m32; };

struct { swizzle4<2, 1, 2, 0> _m32_m31_m32_m30; };
struct { swizzle4<2, 1, 2, 1> _m32_m31_m32_m31; };
struct { swizzle4<2, 1, 2, 2> _m32_m31_m32_m32; };

struct { swizzle4<2, 2, 0, 0> _m32_m32_m30_m30; };
struct { swizzle4<2, 2, 0, 1> _m32_m32_m30_m31; };
struct { swizzle4<2, 2, 0, 2> _m32_m32_m30_m32; };

struct { swizzle4<2, 2, 1, 0> _m32_m32_m31_m30; };
struct { swizzle4<2, 2, 1, 1> _m32_m32_m31_m31; };
struct { swizzle4<2, 2, 1, 2> _m32_m32_m31_m32; };

struct { swizzle4<2, 2, 2, 0> _m32_m32_m32_m30; };
struct { swizzle4<2, 2, 2, 1> _m32_m32_m32_m31; };
struct { swizzle4<2, 2, 2, 2> _m32_m32_m32_m32; };

// -------------------------------
// _NM
// -------------------------------

struct { swizzle1<2> _43; };

struct { swizzle2<0, 2> _41_43; };
struct { swizzle2<1, 2> _42_43; };
struct { swizzle2<2, 0> _43_41; };
struct { swizzle2<2, 1> _43_42; };
struct { swizzle2<2, 2> _43_43; };

struct { swizzle3<0, 0, 2> _41_41_43; };
struct { swizzle3<0, 1, 2> _41_42_43; };
struct { swizzle3<0, 2, 0> _41_43_41; };
struct { swizzle3<0, 2, 1> _41_43_42; };
struct { swizzle3<0, 2, 2> _41_43_43; };

struct { swizzle3<1, 0, 2> _42_41_43; };
struct { swizzle3<1, 1, 2> _42_42_43; };
struct { swizzle3<1, 2, 0> _42_43_41; };
struct { swizzle3<1, 2, 1> _42_43_42; };
struct { swizzle3<1, 2, 2> _42_43_43; };

struct { swizzle3<2, 0, 0> _43_41_41; };
struct { swizzle3<2, 0, 1> _43_41_42; };
struct { swizzle3<2, 0, 2> _43_41_43; };
struct { swizzle3<2, 1, 0> _43_42_41; };
struct { swizzle3<2, 1, 1> _43_42_42; };
struct { swizzle3<2, 1, 2> _43_42_43; };

struct { swizzle3<2, 2, 0> _43_43_41; };
struct { swizzle3<2, 2, 1> _43_43_42; };
struct { swizzle3<2, 2, 2> _43_43_43; };

struct { swizzle4<0, 0, 0, 2> _41_41_41_43; };
struct { swizzle4<0, 0, 1, 2> _41_41_42_43; };

struct { swizzle4<0, 0, 2, 0> _41_41_43_41; };
struct { swizzle4<0, 0, 2, 1> _41_41_43_42; };
struct { swizzle4<0, 0, 2, 2> _41_41_43_43; };

struct { swizzle4<0, 1, 0, 2> _41_42_41_43; };
struct { swizzle4<0, 1, 1, 2> _41_42_42_43; };

struct { swizzle4<0, 1, 2, 0> _41_42_43_41; };
struct { swizzle4<0, 1, 2, 1> _41_42_43_42; };
struct { swizzle4<0, 1, 2, 2> _41_42_43_43; };

struct { swizzle4<0, 2, 0, 0> _41_43_41_41; };
struct { swizzle4<0, 2, 0, 1> _41_43_41_42; };
struct { swizzle4<0, 2, 0, 2> _41_43_41_43; };

struct { swizzle4<0, 2, 1, 0> _41_43_42_41; };
struct { swizzle4<0, 2, 1, 1> _41_43_42_42; };
struct { swizzle4<0, 2, 1, 2> _41_43_42_43; };

struct { swizzle4<0, 2, 2, 0> _41_43_43_41; };
struct { swizzle4<0, 2, 2, 1> _41_43_43_42; };
struct { swizzle4<0, 2, 2, 2> _41_43_43_43; };

struct { swizzle4<1, 0, 0, 2> _42_41_41_43; };
struct { swizzle4<1, 0, 1, 2> _42_41_42_43; };
struct { swizzle4<1, 0, 2, 0> _42_41_43_41; };
struct { swizzle4<1, 0, 2, 1> _42_41_43_42; };
struct { swizzle4<1, 0, 2, 2> _42_41_43_43; };

struct { swizzle4<1, 1, 0, 2> _42_42_41_43; };
struct { swizzle4<1, 1, 1, 2> _42_42_42_43; };

struct { swizzle4<1, 1, 2, 0> _42_42_43_41; };
struct { swizzle4<1, 1, 2, 1> _42_42_43_42; };
struct { swizzle4<1, 1, 2, 2> _42_42_43_43; };

struct { swizzle4<1, 2, 0, 0> _42_43_41_41; };
struct { swizzle4<1, 2, 0, 1> _42_43_41_42; };
struct { swizzle4<1, 2, 0, 2> _42_43_41_43; };

struct { swizzle4<1, 2, 1, 0> _42_43_42_41; };
struct { swizzle4<1, 2, 1, 1> _42_43_42_42; };
struct { swizzle4<1, 2, 1, 2> _42_43_42_43; };

struct { swizzle4<1, 2, 2, 0> _42_43_43_41; };
struct { swizzle4<1, 2, 2, 1> _42_43_43_42; };
struct { swizzle4<1, 2, 2, 2> _42_43_43_43; };

struct { swizzle4<2, 0, 0, 0> _43_41_41_41; };
struct { swizzle4<2, 0, 0, 1> _43_41_41_42; };
struct { swizzle4<2, 0, 0, 2> _43_41_41_43; };

struct { swizzle4<2, 0, 1, 0> _43_41_42_41; };
struct { swizzle4<2, 0, 1, 1> _43_41_42_42; };
struct { swizzle4<2, 0, 1, 2> _43_41_42_43; };

struct { swizzle4<2, 0, 2, 0> _43_41_43_41; };
struct { swizzle4<2, 0, 2, 1> _43_41_43_42; };
struct { swizzle4<2, 0, 2, 2> _43_41_43_43; };

struct { swizzle4<2, 1, 0, 0> _43_42_41_41; };
struct { swizzle4<2, 1, 0, 1> _43_42_41_42; };
struct { swizzle4<2, 1, 0, 2> _43_42_41_43; };

struct { swizzle4<2, 1, 1, 0> _43_42_42_41; };
struct { swizzle4<2, 1, 1, 1> _43_42_42_42; };
struct { swizzle4<2, 1, 1, 2> _43_42_42_43; };

struct { swizzle4<2, 1, 2, 0> _43_42_43_41; };
struct { swizzle4<2, 1, 2, 1> _43_42_43_42; };
struct { swizzle4<2, 1, 2, 2> _43_42_43_43; };

struct { swizzle4<2, 2, 0, 0> _43_43_41_41; };
struct { swizzle4<2, 2, 0, 1> _43_43_41_42; };
struct { swizzle4<2, 2, 0, 2> _43_43_41_43; };

struct { swizzle4<2, 2, 1, 0> _43_43_42_41; };
struct { swizzle4<2, 2, 1, 1> _43_43_42_42; };
struct { swizzle4<2, 2, 1, 2> _43_43_42_43; };

struct { swizzle4<2, 2, 2, 0> _43_43_43_41; };
struct { swizzle4<2, 2, 2, 1> _43_43_43_42; };
struct { swizzle4<2, 2, 2, 2> _43_43_43_43; };