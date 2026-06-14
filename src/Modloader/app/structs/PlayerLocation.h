#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLocation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLocation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLocation_DEFINED)
#include <Modloader/app/structs/PlayerLocation__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerLocation__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLocation_DEFINED
struct PlayerLocation__Class;
struct PlayerLocation {
    struct PlayerLocation__Class* klass;
    MonitorData* monitor;
    struct PlayerLocation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLocation_FWDDECL)
#define IL2CPP_STRUCT_PlayerLocation_FWDDECL
#include <Modloader/app/structs/PlayerLocation__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLocation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLocation_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLocation_FWDDECL)
#include <Modloader/app/structs/PlayerLocation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLocation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
