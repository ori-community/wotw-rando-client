#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChakramProjectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChakramProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChakramProjectile__Fields_DEFINED)
#include <Modloader/app/structs/ChakramProjectile_ChakramState__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Projectile__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ChakramProjectile_ChakramState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ChakramProjectile__Fields_DEFINED
struct GameObject;
struct Transform;
struct AnimationCurve;
struct Event_1;
struct Action;
struct Collider;
struct EntityTargetting;
struct SeinChakramSpell;
struct SoundHost;
struct SeinChakramSpell_BalancingData_ChakramDamageSettings;
struct ChakramProjectile__Fields {
    struct Projectile__Fields _;
    struct GameObject* ChakramSpinEffect;
    struct GameObject* ChakramSpinParticles;
    struct Transform* ChakramParent;
    struct Transform* Chakram;
    float BaseSpeed;
    struct LayerMask AutoAimVisionCheckMask;
    bool AutoAimEnabled;
    float MaxAutoaimAngle;
    float AutoAimTurnSpeed;
    float BaseRotationSpeed;
    float SpinHoldRotationSpeed;
    bool CanSpin;
    bool SpinHoldMode;
    float SpinHoldMinTime;
    float TargetFollowSpeed;
    float TargetMaxRange;
    float TravelDistance;
    struct AnimationCurve* VelocityOverDistanceCurve;
    struct AnimationCurve* ForwardRotationCurve;
    float HoldTime;
    struct AnimationCurve* HoldRotationCurve;
    float SpinTime;
    float SpinDeceleration;
    float SpinTargetDeceleration;
    struct Vector3 SpinScale;
    float SpinScaleSpeed;
    bool StayCloseToTarget;
    float StartReturnSpeed;
    float ReturnAcceleration;
    float MaxReturnSpeed;
    float ReturnScaleSpeed;
    float ReturnRotationSpeed;
    struct Event_1* SpinSoundEvent;
    struct Event_1* ReturnSoundEvent;
    struct Action* OnDestroyed;
    struct Action* OnSpinStop;
    ChakramProjectile_ChakramState__Enum m_currentState;

    struct Collider* m_col;
    struct Vector2 m_previousPosition;
    float m_distanceTraveled;
    float m_timer;
    float m_actualHoldTime;
    struct EntityTargetting* m_currentTarget;
    struct Vector3 m_originalScale;
    bool m_spinHoldReleased;
    bool m_wallCollideReturn;
    bool m_spinned;
    struct SeinChakramSpell* m_seinChakramSpell;
    struct SoundHost* m_soundHost;
    struct Vector3 m_directionFromOri;
    struct Vector3 m_directionToOri;
    bool m_isInitialized;
    int32_t m_hitNumber;
    struct SeinChakramSpell_BalancingData_ChakramDamageSettings* m_currentDamageSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChakramProjectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChakramProjectile__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SeinChakramSpell.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramDamageSettings.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ChakramProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChakramProjectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChakramProjectile__Fields_FWDDECL)
#include <Modloader/app/structs/ChakramProjectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChakramProjectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
