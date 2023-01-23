#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_PredicationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_PredicationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_PredicationSettings_DEFINED)
#define IL2CPP_STRUCT_SMAA_PredicationSettings_DEFINED
struct SMAA_PredicationSettings {
    bool enabled;
    float threshold;
    float scale;
    float strength;
};
#endif
#if !defined(IL2CPP_STRUCT_SMAA_PredicationSettings_FWDDECL)
#define IL2CPP_STRUCT_SMAA_PredicationSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_SMAA_PredicationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_PredicationSettings_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_PredicationSettings_FWDDECL)
#include <Modloader/app/structs/SMAA_PredicationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_PredicationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
