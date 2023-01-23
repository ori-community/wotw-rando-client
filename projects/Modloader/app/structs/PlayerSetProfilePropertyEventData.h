#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerSetProfilePropertyEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerSetProfilePropertyEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerSetProfilePropertyEventData_DEFINED)
#include <Modloader/app/structs/PlayerSetProfilePropertyEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerSetProfilePropertyEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerSetProfilePropertyEventData_DEFINED
struct PlayerSetProfilePropertyEventData__Class;
struct PlayerSetProfilePropertyEventData {
    struct PlayerSetProfilePropertyEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerSetProfilePropertyEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerSetProfilePropertyEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerSetProfilePropertyEventData_FWDDECL
#include <Modloader/app/structs/PlayerSetProfilePropertyEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerSetProfilePropertyEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerSetProfilePropertyEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerSetProfilePropertyEventData_FWDDECL)
#include <Modloader/app/structs/PlayerSetProfilePropertyEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerSetProfilePropertyEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
