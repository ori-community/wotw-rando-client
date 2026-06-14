#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxEnemy2_FoxEnemyJumpAttackSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxEnemy2_FoxEnemyJumpAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxEnemy2_FoxEnemyJumpAttackSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxEnemy2_FoxEnemyJumpAttackSettings__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) FoxEnemy2_FoxEnemyJumpAttackSettings__Fields {
    struct AnimationCurve* PrepareSpeedMultiplier;
    float MinDistanceToBegin;
    float MaxDistanceToBegin;
    float MinDistanceToJump;
    float MaxDistanceToJump;
    float MinJumpSpeedX;
};
#endif
#if !defined(IL2CPP_STRUCT_FoxEnemy2_FoxEnemyJumpAttackSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_FoxEnemy2_FoxEnemyJumpAttackSettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_FoxEnemy2_FoxEnemyJumpAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxEnemy2_FoxEnemyJumpAttackSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FoxEnemy2_FoxEnemyJumpAttackSettings__Fields_FWDDECL)
#include <Modloader/app/structs/FoxEnemy2_FoxEnemyJumpAttackSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxEnemy2_FoxEnemyJumpAttackSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
