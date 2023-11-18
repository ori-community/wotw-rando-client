#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizerSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerSettings_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizerSettings_DEFINED
struct ArtOptimizerSettings__Class;
struct ArtOptimizerSettings {
    struct ArtOptimizerSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizerSettings_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizerSettings_FWDDECL
#include <Modloader/app/structs/ArtOptimizerSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerSettings_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizerSettings_FWDDECL)
#include <Modloader/app/structs/ArtOptimizerSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizerSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
