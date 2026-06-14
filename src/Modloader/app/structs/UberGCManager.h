#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGCManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGCManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCManager_DEFINED)
#define IL2CPP_STRUCT_UberGCManager_DEFINED
struct UberGCManager__Class;
struct UberGCManager {
    struct UberGCManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberGCManager_FWDDECL)
#define IL2CPP_STRUCT_UberGCManager_FWDDECL
#include <Modloader/app/structs/UberGCManager__Class.h>
#endif
#undef IL2CPP_STRUCT_UberGCManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCManager_DEFINED) && !defined(IL2CPP_STRUCT_UberGCManager_FWDDECL)
#include <Modloader/app/structs/UberGCManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGCManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
