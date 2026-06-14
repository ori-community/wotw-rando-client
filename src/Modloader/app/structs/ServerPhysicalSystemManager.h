#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerPhysicalSystemManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerPhysicalSystemManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_DEFINED)
#include <Modloader/app/structs/ServerPhysicalSystemManager__Fields.h>
#if defined(IL2CPP_STRUCT_ServerPhysicalSystemManager__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerPhysicalSystemManager_DEFINED
struct ServerPhysicalSystemManager__Class;
struct ServerPhysicalSystemManager {
    struct ServerPhysicalSystemManager__Class* klass;
    MonitorData* monitor;
    struct ServerPhysicalSystemManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_FWDDECL)
#define IL2CPP_STRUCT_ServerPhysicalSystemManager_FWDDECL
#include <Modloader/app/structs/ServerPhysicalSystemManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerPhysicalSystemManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_DEFINED) && !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_FWDDECL)
#include <Modloader/app/structs/ServerPhysicalSystemManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerPhysicalSystemManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
