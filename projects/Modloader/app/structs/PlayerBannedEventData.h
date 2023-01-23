#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerBannedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerBannedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerBannedEventData_DEFINED)
#include <Modloader/app/structs/PlayerBannedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerBannedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerBannedEventData_DEFINED
struct PlayerBannedEventData__Class;
struct PlayerBannedEventData {
    struct PlayerBannedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerBannedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerBannedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerBannedEventData_FWDDECL
#include <Modloader/app/structs/PlayerBannedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerBannedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerBannedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerBannedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerBannedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerBannedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
