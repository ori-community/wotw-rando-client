#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_DEFINED)
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_DEFINED
struct EventTriggerAnimator;
struct AnimationCurve;
struct GameObject;
struct Transform;
struct SpiderBossLaserAttack__Fields {
    struct SpiderBossBaseBehaviour__Fields _;
    struct EventTriggerAnimator* StartAttackTrigger;
    struct AnimationCurve* AngleCurve;
    struct GameObject* ChargeFXPrefab;
    struct EventTriggerAnimator* ChargeFXInstantiateTrigger;
    struct Transform* ChargeFXReferenceTransform;
    struct GameObject* m_chargeFX;
    float m_currentAttackTime;
    float m_currentAttackAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossLaserAttack__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossLaserAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossLaserAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
