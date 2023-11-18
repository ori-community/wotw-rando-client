#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsVersionManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsVersionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsVersionManager_DEFINED)
#define IL2CPP_STRUCT_fsVersionManager_DEFINED
struct fsVersionManager__Class;
struct fsVersionManager {
    struct fsVersionManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsVersionManager_FWDDECL)
#define IL2CPP_STRUCT_fsVersionManager_FWDDECL
#include <Modloader/app/structs/fsVersionManager__Class.h>
#endif
#undef IL2CPP_STRUCT_fsVersionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsVersionManager_DEFINED) && !defined(IL2CPP_STRUCT_fsVersionManager_FWDDECL)
#include <Modloader/app/structs/fsVersionManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsVersionManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
