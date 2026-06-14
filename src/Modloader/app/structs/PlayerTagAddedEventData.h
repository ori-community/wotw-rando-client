#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerTagAddedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerTagAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerTagAddedEventData_DEFINED)
#include <Modloader/app/structs/PlayerTagAddedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerTagAddedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerTagAddedEventData_DEFINED
struct PlayerTagAddedEventData__Class;
struct PlayerTagAddedEventData {
    struct PlayerTagAddedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerTagAddedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerTagAddedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerTagAddedEventData_FWDDECL
#include <Modloader/app/structs/PlayerTagAddedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerTagAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerTagAddedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerTagAddedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerTagAddedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerTagAddedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
