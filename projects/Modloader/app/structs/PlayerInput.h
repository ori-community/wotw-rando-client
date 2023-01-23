#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInput_DEFINED)
#include <Modloader/app/structs/PlayerInput__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerInput__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInput_DEFINED
struct PlayerInput__Class;
struct PlayerInput {
    struct PlayerInput__Class* klass;
    MonitorData* monitor;
    struct PlayerInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInput_FWDDECL)
#define IL2CPP_STRUCT_PlayerInput_FWDDECL
#include <Modloader/app/structs/PlayerInput__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInput_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInput_FWDDECL)
#include <Modloader/app/structs/PlayerInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
