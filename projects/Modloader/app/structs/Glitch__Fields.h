#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Glitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Glitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Glitch__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Glitch_GlitchingMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Glitch_GlitchingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Glitch__Fields_DEFINED
struct Glitch_InterferenceSettings;
struct Glitch_TearingSettings;
struct Glitch__Fields {
    struct BaseEffect__Fields _;
    bool RandomActivation;
    struct Vector2 RandomEvery;
    struct Vector2 RandomDuration;
    Glitch_GlitchingMode__Enum Mode;

    struct Glitch_InterferenceSettings* SettingsInterferences;
    struct Glitch_TearingSettings* SettingsTearing;
    bool m_Activated;
    float m_EveryTimer;
    float m_EveryTimerEnd;
    float m_DurationTimer;
    float m_DurationTimerEnd;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Glitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_Glitch__Fields_FWDDECL
#include <Modloader/app/structs/Glitch_InterferenceSettings.h>
#include <Modloader/app/structs/Glitch_TearingSettings.h>
#endif
#undef IL2CPP_STRUCT_Glitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Glitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Glitch__Fields_FWDDECL)
#include <Modloader/app/structs/Glitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Glitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
