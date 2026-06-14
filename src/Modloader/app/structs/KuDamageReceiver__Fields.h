#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuDamageReceiver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuDamageReceiver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDamageReceiver__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_KuDamageReceiver__Fields_DEFINED
struct MoonAnimation;
struct Event_1;
struct Ku;
struct KuDamageReceiver__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonAnimation* HurtAnimation;
    float RootMotionMultiplier;
    struct Vector2 HurtSpeed;
    struct ActiveAnimationHandle m_activeAnim;
    struct Vector2 m_damageForce;
    struct Event_1* DamageWwiseEvent;
    struct Ku* m_ku;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuDamageReceiver__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuDamageReceiver__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_KuDamageReceiver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDamageReceiver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuDamageReceiver__Fields_FWDDECL)
#include <Modloader/app/structs/KuDamageReceiver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuDamageReceiver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
