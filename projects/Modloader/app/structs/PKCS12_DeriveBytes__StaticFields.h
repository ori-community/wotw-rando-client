#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS12_DeriveBytes__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS12_DeriveBytes__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS12_DeriveBytes__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PKCS12_DeriveBytes__StaticFields_DEFINED
struct Byte__Array;
struct PKCS12_DeriveBytes__StaticFields {
    struct Byte__Array* keyDiversifier;
    struct Byte__Array* ivDiversifier;
    struct Byte__Array* macDiversifier;
};
#endif
#if !defined(IL2CPP_STRUCT_PKCS12_DeriveBytes__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PKCS12_DeriveBytes__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_PKCS12_DeriveBytes__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS12_DeriveBytes__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PKCS12_DeriveBytes__StaticFields_FWDDECL)
#include <Modloader/app/structs/PKCS12_DeriveBytes__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS12_DeriveBytes__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
