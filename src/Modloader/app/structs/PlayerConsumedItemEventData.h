#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerConsumedItemEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerConsumedItemEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConsumedItemEventData_DEFINED)
#include <Modloader/app/structs/PlayerConsumedItemEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerConsumedItemEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerConsumedItemEventData_DEFINED
struct PlayerConsumedItemEventData__Class;
struct PlayerConsumedItemEventData {
    struct PlayerConsumedItemEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerConsumedItemEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerConsumedItemEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerConsumedItemEventData_FWDDECL
#include <Modloader/app/structs/PlayerConsumedItemEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerConsumedItemEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConsumedItemEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerConsumedItemEventData_FWDDECL)
#include <Modloader/app/structs/PlayerConsumedItemEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerConsumedItemEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
