#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationState_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationState_DEFINED)
#include <Modloader/app/structs/AnimationState__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationState__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationState_DEFINED
struct AnimationState__Class;
struct AnimationState {
    struct AnimationState__Class* klass;
    MonitorData* monitor;
    struct AnimationState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationState_FWDDECL)
#define IL2CPP_STRUCT_AnimationState_FWDDECL
#include <Modloader/app/structs/AnimationState__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationState_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationState_DEFINED) && !defined(IL2CPP_STRUCT_AnimationState_FWDDECL)
#include <Modloader/app/structs/AnimationState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
