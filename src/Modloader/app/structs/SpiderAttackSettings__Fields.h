#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderAttackSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderAttackSettings__Fields_DEFINED)
#include <Modloader/app/structs/SpiderAttackCategory__Enum.h>
#if defined(IL2CPP_STRUCT_SpiderAttackCategory__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderAttackSettings__Fields_DEFINED
struct AnimationCurve;
struct SpiderBossEntity_SpiderFightState__Enum__Array;
struct __declspec(align(8)) SpiderAttackSettings__Fields {
    SpiderAttackCategory__Enum Category;

    struct AnimationCurve* UtilityMultiplierOverTime;
    struct SpiderBossEntity_SpiderFightState__Enum__Array* AllowedPhases;
    bool IsBlocking;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderAttackSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderAttackSettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/SpiderBossEntity_SpiderFightState__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_SpiderAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderAttackSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderAttackSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderAttackSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderAttackSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
