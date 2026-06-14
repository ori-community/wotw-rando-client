#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAParameters_DEFINED)
#define IL2CPP_STRUCT_RSAParameters_DEFINED
struct Byte__Array;
struct RSAParameters {
    struct Byte__Array* Exponent;
    struct Byte__Array* Modulus;
    struct Byte__Array* P;
    struct Byte__Array* Q;
    struct Byte__Array* DP;
    struct Byte__Array* DQ;
    struct Byte__Array* InverseQ;
    struct Byte__Array* D;
};
#endif
#if !defined(IL2CPP_STRUCT_RSAParameters_FWDDECL)
#define IL2CPP_STRUCT_RSAParameters_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_RSAParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAParameters_DEFINED) && !defined(IL2CPP_STRUCT_RSAParameters_FWDDECL)
#include <Modloader/app/structs/RSAParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
