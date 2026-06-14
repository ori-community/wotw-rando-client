#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_DEFINED)
#define IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_DEFINED
enum class SkeetoDiveAttackBehaviour_DiveAttackState__Enum : int32_t {
    Unset = 0x00000000,
    ScheduledJobs = 0x00000001,
    FlipTowardsTarget = 0x00000002,
    AttackAnticipation = 0x00000003,
    AttackLoop = 0x00000004,
    AttackResolve = 0x00000005,
    HitWallHit = 0x00000006,
    HitWallStunnedLoop = 0x00000007,
    HitWallResolve = 0x00000008,
    HitWallBackward = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_FWDDECL)
#define IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_FWDDECL)
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour_DiveAttackState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour_DiveAttackState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
