#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServicePointManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServicePointManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManager_DEFINED)
#define IL2CPP_STRUCT_ServicePointManager_DEFINED
struct ServicePointManager__Class;
struct ServicePointManager {
    struct ServicePointManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ServicePointManager_FWDDECL)
#define IL2CPP_STRUCT_ServicePointManager_FWDDECL
#include <Modloader/app/structs/ServicePointManager__Class.h>
#endif
#undef IL2CPP_STRUCT_ServicePointManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManager_DEFINED) && !defined(IL2CPP_STRUCT_ServicePointManager_FWDDECL)
#include <Modloader/app/structs/ServicePointManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServicePointManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
