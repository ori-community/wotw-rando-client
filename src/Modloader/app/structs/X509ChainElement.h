#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainElement_DEFINED)
#include <Modloader/app/structs/X509ChainElement__Fields.h>
#if defined(IL2CPP_STRUCT_X509ChainElement__Fields_DEFINED)
#define IL2CPP_STRUCT_X509ChainElement_DEFINED
struct X509ChainElement__Class;
struct X509ChainElement {
    struct X509ChainElement__Class* klass;
    MonitorData* monitor;
    struct X509ChainElement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainElement_FWDDECL)
#define IL2CPP_STRUCT_X509ChainElement_FWDDECL
#include <Modloader/app/structs/X509ChainElement__Class.h>
#endif
#undef IL2CPP_STRUCT_X509ChainElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainElement_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainElement_FWDDECL)
#include <Modloader/app/structs/X509ChainElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
