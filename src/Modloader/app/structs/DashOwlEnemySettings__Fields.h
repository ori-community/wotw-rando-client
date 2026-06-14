#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlEnemySettings__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) DashOwlEnemySettings__Fields {
    struct AnimationCurve* DashCurve;
    struct AnimationCurve* BounceCurve;
    float DashDistance;
    float DashRange;
    float MaxDistanceFromStartPosition;
    float DashAlertDelay;
    float MoveBackSpeed;
    int32_t BashBounceDamage;
    struct AnimationCurve* FlyBackVertical;
    struct AnimationCurve* FlyBackHorizontal;
    bool Perched;
};
#endif
#if !defined(IL2CPP_STRUCT_DashOwlEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashOwlEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_DashOwlEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/DashOwlEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
