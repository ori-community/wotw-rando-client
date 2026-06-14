#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateModifierTargetVirtualAnimator_Context_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateModifierTargetVirtualAnimator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateModifierTargetVirtualAnimator_Context_DEFINED)
#define IL2CPP_STRUCT_UberStateModifierTargetVirtualAnimator_Context_DEFINED
struct SetupStateModifier;
struct NewSetupStateController;
struct UberStateModifierTargetVirtualAnimator_Context {
    struct SetupStateModifier* Modifier;
    struct NewSetupStateController* StateController;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateModifierTargetVirtualAnimator_Context_FWDDECL)
#define IL2CPP_STRUCT_UberStateModifierTargetVirtualAnimator_Context_FWDDECL
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#endif
#undef IL2CPP_STRUCT_UberStateModifierTargetVirtualAnimator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateModifierTargetVirtualAnimator_Context_DEFINED) && !defined(IL2CPP_STRUCT_UberStateModifierTargetVirtualAnimator_Context_FWDDECL)
#include <Modloader/app/structs/UberStateModifierTargetVirtualAnimator_Context.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateModifierTargetVirtualAnimator_Context.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
