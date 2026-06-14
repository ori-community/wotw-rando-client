#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPostprocessPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPostprocessPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessPlayer_DEFINED)
#include <Modloader/app/structs/AnimationPostprocessPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationPostprocessPlayer_DEFINED
struct AnimationPostprocessPlayer__Class;
struct AnimationPostprocessPlayer {
    struct AnimationPostprocessPlayer__Class* klass;
    MonitorData* monitor;
    struct AnimationPostprocessPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationPostprocessPlayer_FWDDECL)
#define IL2CPP_STRUCT_AnimationPostprocessPlayer_FWDDECL
#include <Modloader/app/structs/AnimationPostprocessPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationPostprocessPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessPlayer_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPostprocessPlayer_FWDDECL)
#include <Modloader/app/structs/AnimationPostprocessPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPostprocessPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
