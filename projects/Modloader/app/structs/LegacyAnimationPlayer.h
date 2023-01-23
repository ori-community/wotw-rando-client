#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyAnimationPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimationPlayer_DEFINED)
#include <Modloader/app/structs/LegacyAnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyAnimationPlayer_DEFINED
struct LegacyAnimationPlayer__Class;
struct LegacyAnimationPlayer {
    struct LegacyAnimationPlayer__Class* klass;
    MonitorData* monitor;
    struct LegacyAnimationPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyAnimationPlayer_FWDDECL)
#define IL2CPP_STRUCT_LegacyAnimationPlayer_FWDDECL
#include <Modloader/app/structs/LegacyAnimationPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimationPlayer_DEFINED) && !defined(IL2CPP_STRUCT_LegacyAnimationPlayer_FWDDECL)
#include <Modloader/app/structs/LegacyAnimationPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyAnimationPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
