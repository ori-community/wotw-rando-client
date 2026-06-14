#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Stores_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Stores_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Stores_DEFINED)
#include <Modloader/app/structs/X509Stores__Fields.h>
#if defined(IL2CPP_STRUCT_X509Stores__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Stores_DEFINED
struct X509Stores__Class;
struct X509Stores {
    struct X509Stores__Class* klass;
    MonitorData* monitor;
    struct X509Stores__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Stores_FWDDECL)
#define IL2CPP_STRUCT_X509Stores_FWDDECL
#include <Modloader/app/structs/X509Stores__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Stores_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Stores_DEFINED) && !defined(IL2CPP_STRUCT_X509Stores_FWDDECL)
#include <Modloader/app/structs/X509Stores.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Stores.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
