#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GeneralNames__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GeneralNames__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralNames__Fields_DEFINED)
#define IL2CPP_STRUCT_GeneralNames__Fields_DEFINED
struct ArrayList;
struct __declspec(align(8)) GeneralNames__Fields {
    struct ArrayList* rfc822Name;
    struct ArrayList* dnsName;
    struct ArrayList* directoryNames;
    struct ArrayList* uris;
    struct ArrayList* ipAddr;
};
#endif
#if !defined(IL2CPP_STRUCT_GeneralNames__Fields_FWDDECL)
#define IL2CPP_STRUCT_GeneralNames__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#endif
#undef IL2CPP_STRUCT_GeneralNames__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralNames__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GeneralNames__Fields_FWDDECL)
#include <Modloader/app/structs/GeneralNames__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GeneralNames__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
