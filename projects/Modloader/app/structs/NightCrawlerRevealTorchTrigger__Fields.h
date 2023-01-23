#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightCrawlerRevealTorchTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightCrawlerRevealTorchTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerRevealTorchTrigger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_NightCrawlerRevealTorchTrigger__Fields_DEFINED
struct Transform;
struct Collider__Array;
struct GameObject__Array;
struct LegacyDamageReciever;
struct ActionMethod;
struct NightCrawlerRevealTorchTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Joint;
    bool IsNearTorch;
    struct Collider__Array* CollidersToDisable;
    struct GameObject__Array* ObjectsToDisablePermanently;
    struct LegacyDamageReciever* DamageReceiver;
    struct ActionMethod* OnHitAction;
    float nearTorchTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightCrawlerRevealTorchTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_NightCrawlerRevealTorchTrigger__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/LegacyDamageReciever.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_NightCrawlerRevealTorchTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerRevealTorchTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NightCrawlerRevealTorchTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/NightCrawlerRevealTorchTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightCrawlerRevealTorchTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
