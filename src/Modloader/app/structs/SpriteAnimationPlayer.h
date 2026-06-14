#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAnimationPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimationPlayer_DEFINED)
#include <Modloader/app/structs/SpriteAnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_SpriteAnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteAnimationPlayer_DEFINED
struct SpriteAnimationPlayer__Class;
struct SpriteAnimationPlayer {
    struct SpriteAnimationPlayer__Class* klass;
    MonitorData* monitor;
    struct SpriteAnimationPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteAnimationPlayer_FWDDECL)
#define IL2CPP_STRUCT_SpriteAnimationPlayer_FWDDECL
#include <Modloader/app/structs/SpriteAnimationPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimationPlayer_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAnimationPlayer_FWDDECL)
#include <Modloader/app/structs/SpriteAnimationPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAnimationPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
