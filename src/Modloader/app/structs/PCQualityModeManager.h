#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PCQualityModeManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PCQualityModeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PCQualityModeManager_DEFINED)
#define IL2CPP_STRUCT_PCQualityModeManager_DEFINED
struct PCQualityModeManager__Class;
struct PCQualityModeManager {
    struct PCQualityModeManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PCQualityModeManager_FWDDECL)
#define IL2CPP_STRUCT_PCQualityModeManager_FWDDECL
#include <Modloader/app/structs/PCQualityModeManager__Class.h>
#endif
#undef IL2CPP_STRUCT_PCQualityModeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PCQualityModeManager_DEFINED) && !defined(IL2CPP_STRUCT_PCQualityModeManager_FWDDECL)
#include <Modloader/app/structs/PCQualityModeManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PCQualityModeManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
