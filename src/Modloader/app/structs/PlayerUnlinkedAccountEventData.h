#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUnlinkedAccountEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUnlinkedAccountEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUnlinkedAccountEventData_DEFINED)
#include <Modloader/app/structs/PlayerUnlinkedAccountEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUnlinkedAccountEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUnlinkedAccountEventData_DEFINED
struct PlayerUnlinkedAccountEventData__Class;
struct PlayerUnlinkedAccountEventData {
    struct PlayerUnlinkedAccountEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerUnlinkedAccountEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUnlinkedAccountEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerUnlinkedAccountEventData_FWDDECL
#include <Modloader/app/structs/PlayerUnlinkedAccountEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUnlinkedAccountEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUnlinkedAccountEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUnlinkedAccountEventData_FWDDECL)
#include <Modloader/app/structs/PlayerUnlinkedAccountEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUnlinkedAccountEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
