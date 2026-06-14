#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInputRebinding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInputRebinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputRebinding_DEFINED)
#define IL2CPP_STRUCT_PlayerInputRebinding_DEFINED
struct PlayerInputRebinding__Class;
struct PlayerInputRebinding {
    struct PlayerInputRebinding__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerInputRebinding_FWDDECL)
#define IL2CPP_STRUCT_PlayerInputRebinding_FWDDECL
#include <Modloader/app/structs/PlayerInputRebinding__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerInputRebinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInputRebinding_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInputRebinding_FWDDECL)
#include <Modloader/app/structs/PlayerInputRebinding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInputRebinding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
