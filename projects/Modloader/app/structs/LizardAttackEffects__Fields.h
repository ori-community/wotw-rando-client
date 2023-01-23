#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardAttackEffects__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardAttackEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardAttackEffects__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardAttackEffects__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) LizardAttackEffects__Fields {
    struct GameObject* ClawReceived;
    struct GameObject* ClawBlocked;
    struct GameObject* ClawLizard;
    struct GameObject* BiteReceived;
    struct GameObject* BiteBlocked;
    struct GameObject* BiteLizard;
    struct GameObject* PounceReceived;
    struct GameObject* PounceBlocked;
    struct GameObject* PounceLizard;
};
#endif
#if !defined(IL2CPP_STRUCT_LizardAttackEffects__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardAttackEffects__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_LizardAttackEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardAttackEffects__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardAttackEffects__Fields_FWDDECL)
#include <Modloader/app/structs/LizardAttackEffects__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardAttackEffects__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
