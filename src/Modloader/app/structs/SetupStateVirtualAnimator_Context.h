#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupStateVirtualAnimator_Context_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupStateVirtualAnimator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateVirtualAnimator_Context_DEFINED)
#define IL2CPP_STRUCT_SetupStateVirtualAnimator_Context_DEFINED
struct NewSetupStateController;
struct SetupState;
struct IGenericUberState;
struct SetupStateVirtualAnimator_Context {
    struct NewSetupStateController* StateController;
    struct SetupState* State;
    struct IGenericUberState* UberState;
    float DesiredValue;
};
#endif
#if !defined(IL2CPP_STRUCT_SetupStateVirtualAnimator_Context_FWDDECL)
#define IL2CPP_STRUCT_SetupStateVirtualAnimator_Context_FWDDECL
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/SetupState.h>
#endif
#undef IL2CPP_STRUCT_SetupStateVirtualAnimator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateVirtualAnimator_Context_DEFINED) && !defined(IL2CPP_STRUCT_SetupStateVirtualAnimator_Context_FWDDECL)
#include <Modloader/app/structs/SetupStateVirtualAnimator_Context.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupStateVirtualAnimator_Context.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
