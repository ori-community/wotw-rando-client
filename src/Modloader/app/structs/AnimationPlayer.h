#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPlayer_DEFINED)
#include <Modloader/app/structs/AnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationPlayer_DEFINED
struct AnimationPlayer__Class;
struct AnimationPlayer {
    struct AnimationPlayer__Class* klass;
    MonitorData* monitor;
    struct AnimationPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationPlayer_FWDDECL)
#define IL2CPP_STRUCT_AnimationPlayer_FWDDECL
#include <Modloader/app/structs/AnimationPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPlayer_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPlayer_FWDDECL)
#include <Modloader/app/structs/AnimationPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
