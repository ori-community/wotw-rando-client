#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_DEFINED)
#define IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_DEFINED
struct GameObject;
struct MoonTimeline;
struct UberTransformFollow;
struct LaserShieldDamageReceiver_FollowingEffect {
    struct GameObject* GameObject;
    struct MoonTimeline* Timeline;
    struct UberTransformFollow* Follower;
};
#endif
#if !defined(IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_FWDDECL)
#define IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/UberTransformFollow.h>
#endif
#undef IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_DEFINED) && !defined(IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_FWDDECL)
#include <Modloader/app/structs/LaserShieldDamageReceiver_FollowingEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShieldDamageReceiver_FollowingEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
