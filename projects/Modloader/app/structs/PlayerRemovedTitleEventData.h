#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerRemovedTitleEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerRemovedTitleEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRemovedTitleEventData_DEFINED)
#include <Modloader/app/structs/PlayerRemovedTitleEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerRemovedTitleEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerRemovedTitleEventData_DEFINED
struct PlayerRemovedTitleEventData__Class;
struct PlayerRemovedTitleEventData {
    struct PlayerRemovedTitleEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerRemovedTitleEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerRemovedTitleEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerRemovedTitleEventData_FWDDECL
#include <Modloader/app/structs/PlayerRemovedTitleEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerRemovedTitleEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRemovedTitleEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerRemovedTitleEventData_FWDDECL)
#include <Modloader/app/structs/PlayerRemovedTitleEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerRemovedTitleEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
