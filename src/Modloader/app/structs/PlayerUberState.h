#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberState_DEFINED)
#include <Modloader/app/structs/PlayerUberState__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberState_DEFINED
struct PlayerUberState__Class;
struct PlayerUberState {
    struct PlayerUberState__Class* klass;
    MonitorData* monitor;
    struct PlayerUberState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberState_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberState_FWDDECL
#include <Modloader/app/structs/PlayerUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberState_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberState_FWDDECL)
#include <Modloader/app/structs/PlayerUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
