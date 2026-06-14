#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEdgeClamber__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEdgeClamber__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEdgeClamber__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEdgeClamber__Fields_DEFINED
struct SoundProvider;
struct MaterialBasedSeinEffectsMap;
struct SeinEdgeClamber__Fields {
    struct CharacterState__Fields _;
    struct SoundProvider* EdgeClamberSound;
    struct MaterialBasedSeinEffectsMap* EffectsMap;
    float HorizontalSpeedFraction;
    float VerticalSpeed;
    bool m_isEdgeClambering;
    float JumpSustainSpeedToLose;
    float LandOnTrigger_Duration;
    float LandOnTrigger_MaxSpeed;
    float LandOnTrigger_Acceleration;
    float LandOnTrigger_Decceleration;
    float LandOnTrigger_GravityStrength;
    bool m_landOnTriggerStarted;
    float m_landOnTriggerUntilTime;
    float m_landOnTriggerDir;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEdgeClamber__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinEdgeClamber__Fields_FWDDECL
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinEdgeClamber__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEdgeClamber__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinEdgeClamber__Fields_FWDDECL)
#include <Modloader/app/structs/SeinEdgeClamber__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEdgeClamber__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
