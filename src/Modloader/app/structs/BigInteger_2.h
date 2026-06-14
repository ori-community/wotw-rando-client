#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BigInteger_2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BigInteger_2_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_2_DEFINED)
#define IL2CPP_STRUCT_BigInteger_2_DEFINED
struct UInt32__Array;
struct BigInteger_2 {
    int32_t _sign;
    struct UInt32__Array* _bits;
};
#endif
#if !defined(IL2CPP_STRUCT_BigInteger_2_FWDDECL)
#define IL2CPP_STRUCT_BigInteger_2_FWDDECL
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_BigInteger_2_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_2_DEFINED) && !defined(IL2CPP_STRUCT_BigInteger_2_FWDDECL)
#include <Modloader/app/structs/BigInteger_2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BigInteger_2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
