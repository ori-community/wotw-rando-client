#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData_DEFINED)
#include <Modloader/app/structs/PlayerUpdatedContactEmailEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData_DEFINED
struct PlayerUpdatedContactEmailEventData__Class;
struct PlayerUpdatedContactEmailEventData {
    struct PlayerUpdatedContactEmailEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerUpdatedContactEmailEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData_FWDDECL
#include <Modloader/app/structs/PlayerUpdatedContactEmailEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUpdatedContactEmailEventData_FWDDECL)
#include <Modloader/app/structs/PlayerUpdatedContactEmailEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUpdatedContactEmailEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
