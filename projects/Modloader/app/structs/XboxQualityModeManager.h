#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxQualityModeManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxQualityModeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxQualityModeManager_DEFINED)
#define IL2CPP_STRUCT_XboxQualityModeManager_DEFINED
struct XboxQualityModeManager__Class;
struct XboxQualityModeManager {
    struct XboxQualityModeManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxQualityModeManager_FWDDECL)
#define IL2CPP_STRUCT_XboxQualityModeManager_FWDDECL
#include <Modloader/app/structs/XboxQualityModeManager__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxQualityModeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxQualityModeManager_DEFINED) && !defined(IL2CPP_STRUCT_XboxQualityModeManager_FWDDECL)
#include <Modloader/app/structs/XboxQualityModeManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxQualityModeManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
