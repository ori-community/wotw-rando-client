#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RandomAnimationPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RandomAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomAnimationPlayer_DEFINED)
#include <Modloader/app/structs/RandomAnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_RandomAnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_RandomAnimationPlayer_DEFINED
struct RandomAnimationPlayer__Class;
struct RandomAnimationPlayer {
    struct RandomAnimationPlayer__Class* klass;
    MonitorData* monitor;
    struct RandomAnimationPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RandomAnimationPlayer_FWDDECL)
#define IL2CPP_STRUCT_RandomAnimationPlayer_FWDDECL
#include <Modloader/app/structs/RandomAnimationPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_RandomAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomAnimationPlayer_DEFINED) && !defined(IL2CPP_STRUCT_RandomAnimationPlayer_FWDDECL)
#include <Modloader/app/structs/RandomAnimationPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RandomAnimationPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
