#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScalableAnimationPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScalableAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalableAnimationPlayer_DEFINED)
#include <Modloader/app/structs/ScalableAnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_ScalableAnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_ScalableAnimationPlayer_DEFINED
struct ScalableAnimationPlayer__Class;
struct ScalableAnimationPlayer {
    struct ScalableAnimationPlayer__Class* klass;
    MonitorData* monitor;
    struct ScalableAnimationPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScalableAnimationPlayer_FWDDECL)
#define IL2CPP_STRUCT_ScalableAnimationPlayer_FWDDECL
#include <Modloader/app/structs/ScalableAnimationPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_ScalableAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalableAnimationPlayer_DEFINED) && !defined(IL2CPP_STRUCT_ScalableAnimationPlayer_FWDDECL)
#include <Modloader/app/structs/ScalableAnimationPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScalableAnimationPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
