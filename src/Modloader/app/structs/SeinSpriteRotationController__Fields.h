#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpriteRotationController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpriteRotationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpriteRotationController__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SeinSpriteRotationController__Fields_DEFINED
struct Transform;
struct SeinSpriteRotationController__Fields {
    struct CharacterState__Fields _;
    struct Transform* FeetTransform;
    struct Transform* HeadTransform;
    struct Transform* CenterTransform;
    bool CinematicRotation;
    float FeetAngle;
    float HeadAngle;
    float CenterAngle;
    float m_ceilingAngle;
    float m_groundAngle;
    struct Vector2 m_localPosition;
    float m_wallLeftAngle;
    float m_wallRightAngle;
    float m_tiltLeftRightTimer;
    float m_tiltUpDownTimer;
    float m_tiltLeftRightDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpriteRotationController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpriteRotationController__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinSpriteRotationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpriteRotationController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpriteRotationController__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSpriteRotationController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpriteRotationController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
