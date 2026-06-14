#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSAParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSAParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSAParameters_DEFINED)
#define IL2CPP_STRUCT_DSAParameters_DEFINED
struct Byte__Array;
struct DSAParameters {
    struct Byte__Array* P;
    struct Byte__Array* Q;
    struct Byte__Array* G;
    struct Byte__Array* Y;
    struct Byte__Array* J;
    struct Byte__Array* X;
    struct Byte__Array* Seed;
    int32_t Counter;
};
#endif
#if !defined(IL2CPP_STRUCT_DSAParameters_FWDDECL)
#define IL2CPP_STRUCT_DSAParameters_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_DSAParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSAParameters_DEFINED) && !defined(IL2CPP_STRUCT_DSAParameters_FWDDECL)
#include <Modloader/app/structs/DSAParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSAParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
