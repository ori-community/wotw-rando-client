#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainElementCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainElementCollection_DEFINED)
#include <Modloader/app/structs/X509ChainElementCollection__Fields.h>
#if defined(IL2CPP_STRUCT_X509ChainElementCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_X509ChainElementCollection_DEFINED
struct X509ChainElementCollection__Class;
struct X509ChainElementCollection {
    struct X509ChainElementCollection__Class* klass;
    MonitorData* monitor;
    struct X509ChainElementCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainElementCollection_FWDDECL)
#define IL2CPP_STRUCT_X509ChainElementCollection_FWDDECL
#include <Modloader/app/structs/X509ChainElementCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_X509ChainElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainElementCollection_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainElementCollection_FWDDECL)
#include <Modloader/app/structs/X509ChainElementCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainElementCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
