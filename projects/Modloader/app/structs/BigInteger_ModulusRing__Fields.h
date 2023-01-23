#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BigInteger_ModulusRing__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BigInteger_ModulusRing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_ModulusRing__Fields_DEFINED)
#define IL2CPP_STRUCT_BigInteger_ModulusRing__Fields_DEFINED
struct BigInteger;
struct __declspec(align(8)) BigInteger_ModulusRing__Fields {
    struct BigInteger* mod;
    struct BigInteger* constant;
};
#endif
#if !defined(IL2CPP_STRUCT_BigInteger_ModulusRing__Fields_FWDDECL)
#define IL2CPP_STRUCT_BigInteger_ModulusRing__Fields_FWDDECL
#include <Modloader/app/structs/BigInteger.h>
#endif
#undef IL2CPP_STRUCT_BigInteger_ModulusRing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_ModulusRing__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BigInteger_ModulusRing__Fields_FWDDECL)
#include <Modloader/app/structs/BigInteger_ModulusRing__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BigInteger_ModulusRing__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
