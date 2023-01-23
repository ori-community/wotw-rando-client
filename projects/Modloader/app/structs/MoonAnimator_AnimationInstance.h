#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_AnimationInstance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_AnimationInstance_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance_DEFINED)
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_AnimationInstance_DEFINED
struct MoonAnimator_AnimationInstance__Class;
struct MoonAnimator_AnimationInstance {
    struct MoonAnimator_AnimationInstance__Class* klass;
    MonitorData* monitor;
    struct MoonAnimator_AnimationInstance__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_AnimationInstance_FWDDECL
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_AnimationInstance_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
