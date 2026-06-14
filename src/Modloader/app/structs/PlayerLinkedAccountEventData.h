#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLinkedAccountEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLinkedAccountEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLinkedAccountEventData_DEFINED)
#include <Modloader/app/structs/PlayerLinkedAccountEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerLinkedAccountEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLinkedAccountEventData_DEFINED
struct PlayerLinkedAccountEventData__Class;
struct PlayerLinkedAccountEventData {
    struct PlayerLinkedAccountEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerLinkedAccountEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLinkedAccountEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerLinkedAccountEventData_FWDDECL
#include <Modloader/app/structs/PlayerLinkedAccountEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLinkedAccountEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLinkedAccountEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLinkedAccountEventData_FWDDECL)
#include <Modloader/app/structs/PlayerLinkedAccountEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLinkedAccountEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
