extern alias A;

// using A;
// using B.C;
using global::E.F;
using a::E.F;
// using G = H.I;
// using static J.K;
// using static J.K<,,,>;
using global = H.I;

[module: A,]

[A]
int?*[,] i = null;