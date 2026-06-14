#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInputButtonRebinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInputButtonRebinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputButtonRebinder_DEFINED)
#include <Modloader/app/structs/PlayerInputButtonRebinder__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerInputButtonRebinder__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInputButtonRebinder_DEFINED
struct PlayerInputButtonRebinder__Class;
struct PlayerInputButtonRebinder {
    struct PlayerInputButtonRebinder__Class* klass;
    MonitorData* monitor;
    struct PlayerInputButtonRebinder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInputButtonRebinder_FWDDECL)
#define IL2CPP_STRUCT_PlayerInputButtonRebinder_FWDDECL
#include <Modloader/app/structs/PlayerInputButtonRebinder__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerInputButtonRebinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputButtonRebinder_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInputButtonRebinder_FWDDECL)
#include <Modloader/app/structs/PlayerInputButtonRebinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInputButtonRebinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
