#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritSlash__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritSlash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritSlash__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinSpiritSlash_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinSpiritSlash_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritSlash__Fields_DEFINED
struct AnimationCurve;
struct List_1_LightAttackData_;
struct ISpiritSlashAttackable;
struct Transform;
struct LightAttackData;
struct GameObject;
struct SeinSpiritSlash__Fields {
    struct CharacterState__Fields _;
    float AirJumpSpeed;
    float AttackGravity;
    float HorizontalSpeed;
    struct AnimationCurve* HorizontalSpeedCurve;
    struct List_1_LightAttackData_* AirLightAttackData;
    struct List_1_LightAttackData_* GroundLightAttackData;
    float StingerAdjustSpeed;
    float StingerDamageForce;
    float StingerDistanceFromTarget;
    float StingerMinimumDistance;
    float StingerRange;
    float StingerSpeed;
    float AttackRange;
    float SlashAngleAdjustSpeed;
    struct ISpiritSlashAttackable* m_closestAttackable;
    int32_t m_comboIndex;
    float m_cooldownDuration;
    bool m_currentIsStinger;
    SeinSpiritSlash_State__Enum m_currentState;

    float m_currentStateTime;
    struct Transform* m_currentTargetTransform;
    bool m_hasTarget;
    bool m_hasDealtDamage;
    bool m_hasSpawnedSlashEffect;
    bool m_spriteMirrorLock;
    struct Vector3 m_stingerTargetPosition;
    bool m_triggeredCombo;
    float AttackAirDeceleration;
    float AttackGroundDeceleration;
    float SlashAngle;
    struct LightAttackData* m_currentAttackData;
    struct GameObject* m_slashEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritSlash__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritSlash__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ISpiritSlashAttackable.h>
#include <Modloader/app/structs/LightAttackData.h>
#include <Modloader/app/structs/List_1_LightAttackData_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritSlash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritSlash__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritSlash__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSpiritSlash__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritSlash__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
