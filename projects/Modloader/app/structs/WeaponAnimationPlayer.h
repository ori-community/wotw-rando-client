#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponAnimationPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponAnimationPlayer_DEFINED)
#include <Modloader/app/structs/WeaponAnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponAnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponAnimationPlayer_DEFINED
struct WeaponAnimationPlayer__Class;
struct WeaponAnimationPlayer {
    struct WeaponAnimationPlayer__Class* klass;
    MonitorData* monitor;
    struct WeaponAnimationPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponAnimationPlayer_FWDDECL)
#define IL2CPP_STRUCT_WeaponAnimationPlayer_FWDDECL
#include <Modloader/app/structs/WeaponAnimationPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponAnimationPlayer_DEFINED) && !defined(IL2CPP_STRUCT_WeaponAnimationPlayer_FWDDECL)
#include <Modloader/app/structs/WeaponAnimationPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponAnimationPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
