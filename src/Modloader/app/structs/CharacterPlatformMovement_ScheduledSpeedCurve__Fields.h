#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterPlatformMovement_ScheduledSpeedCurve__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterPlatformMovement_ScheduledSpeedCurve__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement_ScheduledSpeedCurve__Fields_DEFINED)
#include <Modloader/app/structs/CharacterPlatformMovement_SpeedSpace__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterPlatformMovement_SpeedSpace__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CharacterPlatformMovement_ScheduledSpeedCurve__Fields_DEFINED
struct AnimationCurve;
struct Func_1_Boolean_;
struct __declspec(align(8)) CharacterPlatformMovement_ScheduledSpeedCurve__Fields {
    CharacterPlatformMovement_SpeedSpace__Enum m_space;

    bool m_additive;
    struct AnimationCurve* m_curveX;
    struct AnimationCurve* m_curveY;
    struct AnimationCurve* m_directionCurve;
    float m_curveScaleX;
    float m_curveScaleY;
    float m_directionCurveScale;
    float m_timeScale;
    struct Func_1_Boolean_* m_canContinue;
    struct Vector2 m_direction;
    struct Vector2 m_lastSpeed;
    float m_timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement_ScheduledSpeedCurve__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterPlatformMovement_ScheduledSpeedCurve__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_CharacterPlatformMovement_ScheduledSpeedCurve__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement_ScheduledSpeedCurve__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterPlatformMovement_ScheduledSpeedCurve__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterPlatformMovement_ScheduledSpeedCurve__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterPlatformMovement_ScheduledSpeedCurve__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
