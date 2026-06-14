#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConnectionManagementElementCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConnectionManagementElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionManagementElementCollection_DEFINED)
#define IL2CPP_STRUCT_ConnectionManagementElementCollection_DEFINED
struct ConnectionManagementElementCollection__Class;
struct ConnectionManagementElementCollection {
    struct ConnectionManagementElementCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConnectionManagementElementCollection_FWDDECL)
#define IL2CPP_STRUCT_ConnectionManagementElementCollection_FWDDECL
#include <Modloader/app/structs/ConnectionManagementElementCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ConnectionManagementElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectionManagementElementCollection_DEFINED) && !defined(IL2CPP_STRUCT_ConnectionManagementElementCollection_FWDDECL)
#include <Modloader/app/structs/ConnectionManagementElementCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConnectionManagementElementCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
