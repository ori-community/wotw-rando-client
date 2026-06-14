#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbientOcclusion_Settings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbientOcclusion_Settings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_Settings_DEFINED)
#include <Modloader/app/structs/AmbientOcclusion_Settings__Fields.h>
#if defined(IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_DEFINED)
#define IL2CPP_STRUCT_AmbientOcclusion_Settings_DEFINED
struct AmbientOcclusion_Settings__Class;
struct AmbientOcclusion_Settings {
    struct AmbientOcclusion_Settings__Class* klass;
    MonitorData* monitor;
    struct AmbientOcclusion_Settings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_Settings_FWDDECL)
#define IL2CPP_STRUCT_AmbientOcclusion_Settings_FWDDECL
#include <Modloader/app/structs/AmbientOcclusion_Settings__Class.h>
#endif
#undef IL2CPP_STRUCT_AmbientOcclusion_Settings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_Settings_DEFINED) && !defined(IL2CPP_STRUCT_AmbientOcclusion_Settings_FWDDECL)
#include <Modloader/app/structs/AmbientOcclusion_Settings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbientOcclusion_Settings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
