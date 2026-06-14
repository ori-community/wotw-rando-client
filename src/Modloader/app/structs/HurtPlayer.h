#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HurtPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HurtPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_HurtPlayer_DEFINED)
#include <Modloader/app/structs/HurtPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_HurtPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_HurtPlayer_DEFINED
struct HurtPlayer__Class;
struct HurtPlayer {
    struct HurtPlayer__Class* klass;
    MonitorData* monitor;
    struct HurtPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HurtPlayer_FWDDECL)
#define IL2CPP_STRUCT_HurtPlayer_FWDDECL
#include <Modloader/app/structs/HurtPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_HurtPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_HurtPlayer_DEFINED) && !defined(IL2CPP_STRUCT_HurtPlayer_FWDDECL)
#include <Modloader/app/structs/HurtPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HurtPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
