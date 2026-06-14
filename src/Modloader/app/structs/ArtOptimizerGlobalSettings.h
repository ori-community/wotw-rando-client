#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizerGlobalSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizerGlobalSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerGlobalSettings_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizerGlobalSettings_DEFINED
struct ArtOptimizerGlobalSettings__Class;
struct ArtOptimizerGlobalSettings {
    struct ArtOptimizerGlobalSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizerGlobalSettings_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizerGlobalSettings_FWDDECL
#include <Modloader/app/structs/ArtOptimizerGlobalSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizerGlobalSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerGlobalSettings_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizerGlobalSettings_FWDDECL)
#include <Modloader/app/structs/ArtOptimizerGlobalSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizerGlobalSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
