#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimationPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimationPlayer_DEFINED)
#include <Modloader/app/structs/MoonAnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimationPlayer_DEFINED
struct MoonAnimationPlayer__Class;
struct MoonAnimationPlayer {
    struct MoonAnimationPlayer__Class* klass;
    MonitorData* monitor;
    struct MoonAnimationPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimationPlayer_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimationPlayer_FWDDECL
#include <Modloader/app/structs/MoonAnimationPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimationPlayer_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimationPlayer_FWDDECL)
#include <Modloader/app/structs/MoonAnimationPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimationPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
