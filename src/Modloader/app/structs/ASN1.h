#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ASN1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ASN1_INITIALIZING
#if !defined(IL2CPP_STRUCT_ASN1_DEFINED)
#include <Modloader/app/structs/ASN1__Fields.h>
#if defined(IL2CPP_STRUCT_ASN1__Fields_DEFINED)
#define IL2CPP_STRUCT_ASN1_DEFINED
struct ASN1__Class;
struct ASN1 {
    struct ASN1__Class* klass;
    MonitorData* monitor;
    struct ASN1__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ASN1_FWDDECL)
#define IL2CPP_STRUCT_ASN1_FWDDECL
#include <Modloader/app/structs/ASN1__Class.h>
#endif
#undef IL2CPP_STRUCT_ASN1_INITIALIZING
#if !defined(IL2CPP_STRUCT_ASN1_DEFINED) && !defined(IL2CPP_STRUCT_ASN1_FWDDECL)
#include <Modloader/app/structs/ASN1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ASN1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
