#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsnEncodedData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsnEncodedData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsnEncodedData__Fields_DEFINED)
#define IL2CPP_STRUCT_AsnEncodedData__Fields_DEFINED
struct Oid;
struct Byte__Array;
struct __declspec(align(8)) AsnEncodedData__Fields {
    struct Oid* _oid;
    struct Byte__Array* _raw;
};
#endif
#if !defined(IL2CPP_STRUCT_AsnEncodedData__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsnEncodedData__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Oid.h>
#endif
#undef IL2CPP_STRUCT_AsnEncodedData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsnEncodedData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsnEncodedData__Fields_FWDDECL)
#include <Modloader/app/structs/AsnEncodedData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsnEncodedData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
