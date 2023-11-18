#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_DEFINED
struct Byte__Array;
struct X509ExtensionCollection_1;
struct __declspec(align(8)) X509Crl_X509CrlEntry__Fields {
    struct Byte__Array* sn;
    struct DateTime revocationDate;
    struct X509ExtensionCollection_1* extensions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/X509ExtensionCollection_1.h>
#endif
#undef IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509Crl_X509CrlEntry__Fields_FWDDECL)
#include <Modloader/app/structs/X509Crl_X509CrlEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Crl_X509CrlEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
