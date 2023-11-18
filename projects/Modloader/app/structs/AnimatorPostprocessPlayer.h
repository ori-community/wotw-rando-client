#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorPostprocessPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorPostprocessPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorPostprocessPlayer_DEFINED)
#include <Modloader/app/structs/AnimatorPostprocessPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_AnimatorPostprocessPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatorPostprocessPlayer_DEFINED
struct AnimatorPostprocessPlayer__Class;
struct AnimatorPostprocessPlayer {
    struct AnimatorPostprocessPlayer__Class* klass;
    MonitorData* monitor;
    struct AnimatorPostprocessPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorPostprocessPlayer_FWDDECL)
#define IL2CPP_STRUCT_AnimatorPostprocessPlayer_FWDDECL
#include <Modloader/app/structs/AnimatorPostprocessPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatorPostprocessPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorPostprocessPlayer_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorPostprocessPlayer_FWDDECL)
#include <Modloader/app/structs/AnimatorPostprocessPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorPostprocessPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
