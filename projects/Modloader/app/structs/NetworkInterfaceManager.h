#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetworkInterfaceManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetworkInterfaceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkInterfaceManager_DEFINED)
#define IL2CPP_STRUCT_NetworkInterfaceManager_DEFINED
struct NetworkInterfaceManager__Class;
struct NetworkInterfaceManager {
    struct NetworkInterfaceManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NetworkInterfaceManager_FWDDECL)
#define IL2CPP_STRUCT_NetworkInterfaceManager_FWDDECL
#include <Modloader/app/structs/NetworkInterfaceManager__Class.h>
#endif
#undef IL2CPP_STRUCT_NetworkInterfaceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkInterfaceManager_DEFINED) && !defined(IL2CPP_STRUCT_NetworkInterfaceManager_FWDDECL)
#include <Modloader/app/structs/NetworkInterfaceManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetworkInterfaceManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
