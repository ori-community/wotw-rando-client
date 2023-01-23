#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationClip_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationClip_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationClip_DEFINED)
#include <Modloader/app/structs/AnimationClip__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationClip__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationClip_DEFINED
struct AnimationClip__Class;
struct AnimationClip {
    struct AnimationClip__Class* klass;
    MonitorData* monitor;
    struct AnimationClip__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationClip_FWDDECL)
#define IL2CPP_STRUCT_AnimationClip_FWDDECL
#include <Modloader/app/structs/AnimationClip__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationClip_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationClip_DEFINED) && !defined(IL2CPP_STRUCT_AnimationClip_FWDDECL)
#include <Modloader/app/structs/AnimationClip.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationClip.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
