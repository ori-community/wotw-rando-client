#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_TemporalSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_TemporalSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_TemporalSettings_DEFINED)
#define IL2CPP_STRUCT_SMAA_TemporalSettings_DEFINED
struct SMAA_TemporalSettings {
    bool enabled;
    float fuzzSize;
};
#endif
#if !defined(IL2CPP_STRUCT_SMAA_TemporalSettings_FWDDECL)
#define IL2CPP_STRUCT_SMAA_TemporalSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_SMAA_TemporalSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_TemporalSettings_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_TemporalSettings_FWDDECL)
#include <Modloader/app/structs/SMAA_TemporalSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_TemporalSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
