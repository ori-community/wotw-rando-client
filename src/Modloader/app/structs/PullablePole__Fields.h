#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PullablePole__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PullablePole__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PullablePole__Fields_DEFINED)
#include <Modloader/app/structs/GrabbableRope__Fields.h>
#if defined(IL2CPP_STRUCT_GrabbableRope__Fields_DEFINED)
#define IL2CPP_STRUCT_PullablePole__Fields_DEFINED
struct PoleSetupHolder;
struct MoonReference_1_IStateTransitionHolder_;
struct PullablePole__Fields {
    struct GrabbableRope__Fields _;
    struct PoleSetupHolder* SetupStates;
    struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PullablePole__Fields_FWDDECL)
#define IL2CPP_STRUCT_PullablePole__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_IStateTransitionHolder_.h>
#include <Modloader/app/structs/PoleSetupHolder.h>
#endif
#undef IL2CPP_STRUCT_PullablePole__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PullablePole__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PullablePole__Fields_FWDDECL)
#include <Modloader/app/structs/PullablePole__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PullablePole__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
