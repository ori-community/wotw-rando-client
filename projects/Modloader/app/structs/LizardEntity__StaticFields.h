#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardEntity__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardEntity__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntity__StaticFields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_LizardEntity__StaticFields_DEFINED
struct Action_1_LizardEntity_;
struct LizardEntity__StaticFields {
    bool s_groupBehaviourCounterAttackMode;
    float s_groupBehaviourBaseAttackCooldown;
    float s_groupBehaviourBaseAttackCooldownStep;
    struct Vector2 s_groupBehaviourBaseAttackCooldownRange;
    struct Action_1_LizardEntity_* AnyLizardHit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardEntity__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LizardEntity__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_LizardEntity_.h>
#endif
#undef IL2CPP_STRUCT_LizardEntity__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntity__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LizardEntity__StaticFields_FWDDECL)
#include <Modloader/app/structs/LizardEntity__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardEntity__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
