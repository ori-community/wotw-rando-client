#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X500DistinguishedName__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X500DistinguishedName__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X500DistinguishedName__Fields_DEFINED)
#include <Modloader/app/structs/AsnEncodedData__Fields.h>
#if defined(IL2CPP_STRUCT_AsnEncodedData__Fields_DEFINED)
#define IL2CPP_STRUCT_X500DistinguishedName__Fields_DEFINED
struct String;
struct Byte__Array;
struct X500DistinguishedName__Fields {
    struct AsnEncodedData__Fields _;
    struct String* name;
    struct Byte__Array* canonEncoding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X500DistinguishedName__Fields_FWDDECL)
#define IL2CPP_STRUCT_X500DistinguishedName__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_X500DistinguishedName__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X500DistinguishedName__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X500DistinguishedName__Fields_FWDDECL)
#include <Modloader/app/structs/X500DistinguishedName__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X500DistinguishedName__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
