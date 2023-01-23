#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorOverrideController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorOverrideController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorOverrideController__Fields_DEFINED)
#include <Modloader/app/structs/RuntimeAnimatorController__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeAnimatorController__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatorOverrideController__Fields_DEFINED
struct AnimatorOverrideController_OnOverrideControllerDirtyCallback;
struct AnimatorOverrideController__Fields {
    struct RuntimeAnimatorController__Fields _;
    struct AnimatorOverrideController_OnOverrideControllerDirtyCallback* OnOverrideControllerDirty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorOverrideController__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatorOverrideController__Fields_FWDDECL
#include <Modloader/app/structs/AnimatorOverrideController_OnOverrideControllerDirtyCallback.h>
#endif
#undef IL2CPP_STRUCT_AnimatorOverrideController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorOverrideController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorOverrideController__Fields_FWDDECL)
#include <Modloader/app/structs/AnimatorOverrideController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorOverrideController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
