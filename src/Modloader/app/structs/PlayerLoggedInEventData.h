#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLoggedInEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLoggedInEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoggedInEventData_DEFINED)
#include <Modloader/app/structs/PlayerLoggedInEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerLoggedInEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLoggedInEventData_DEFINED
struct PlayerLoggedInEventData__Class;
struct PlayerLoggedInEventData {
    struct PlayerLoggedInEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerLoggedInEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLoggedInEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerLoggedInEventData_FWDDECL
#include <Modloader/app/structs/PlayerLoggedInEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLoggedInEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLoggedInEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLoggedInEventData_FWDDECL)
#include <Modloader/app/structs/PlayerLoggedInEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLoggedInEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
