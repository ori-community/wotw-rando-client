#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameSettings__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSettings__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GameSettings__StaticFields_DEFINED
struct GameSettings;
struct GameSettings__StaticFields {
    struct GameSettings* Instance;
    float PaperwhiteCoefficient;
    float HDRUIBrightnessCoefficient;
    float HDRRichnessCoefficient;
    float HDRShadowDetailCoefficient;
};
#endif
#if !defined(IL2CPP_STRUCT_GameSettings__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GameSettings__StaticFields_FWDDECL
#include <Modloader/app/structs/GameSettings.h>
#endif
#undef IL2CPP_STRUCT_GameSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSettings__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GameSettings__StaticFields_FWDDECL)
#include <Modloader/app/structs/GameSettings__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameSettings__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
