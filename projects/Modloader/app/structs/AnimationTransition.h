#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTransition_DEFINED)
#include <Modloader/app/structs/AnimationTransition__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationTransition_DEFINED
struct AnimationTransition__Class;
struct AnimationTransition {
    struct AnimationTransition__Class* klass;
    MonitorData* monitor;
    struct AnimationTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationTransition_FWDDECL)
#define IL2CPP_STRUCT_AnimationTransition_FWDDECL
#include <Modloader/app/structs/AnimationTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTransition_DEFINED) && !defined(IL2CPP_STRUCT_AnimationTransition_FWDDECL)
#include <Modloader/app/structs/AnimationTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
