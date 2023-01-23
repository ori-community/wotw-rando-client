#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS1_1__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS1_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS1_1__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PKCS1_1__StaticFields_DEFINED
struct Byte__Array;
struct PKCS1_1__StaticFields {
    struct Byte__Array* emptySHA1;
    struct Byte__Array* emptySHA256;
    struct Byte__Array* emptySHA384;
    struct Byte__Array* emptySHA512;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS1_1__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PKCS1_1__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_PKCS1_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS1_1__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PKCS1_1__StaticFields_FWDDECL)
#include <Modloader/app/structs/PKCS1_1__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS1_1__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
