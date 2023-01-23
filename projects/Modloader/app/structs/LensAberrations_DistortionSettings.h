#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LensAberrations_DistortionSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LensAberrations_DistortionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_DistortionSettings_DEFINED)
#define IL2CPP_STRUCT_LensAberrations_DistortionSettings_DEFINED
struct LensAberrations_DistortionSettings {
    bool enabled;
    float amount;
    float centerX;
    float centerY;
    float amountX;
    float amountY;
    float scale;
};
#endif
#if !defined(IL2CPP_STRUCT_LensAberrations_DistortionSettings_FWDDECL)
#define IL2CPP_STRUCT_LensAberrations_DistortionSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_LensAberrations_DistortionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_DistortionSettings_DEFINED) && !defined(IL2CPP_STRUCT_LensAberrations_DistortionSettings_FWDDECL)
#include <Modloader/app/structs/LensAberrations_DistortionSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LensAberrations_DistortionSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
