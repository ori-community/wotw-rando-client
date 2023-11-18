#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAdOpenedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAdOpenedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdOpenedEventData_DEFINED)
#include <Modloader/app/structs/PlayerAdOpenedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerAdOpenedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAdOpenedEventData_DEFINED
struct PlayerAdOpenedEventData__Class;
struct PlayerAdOpenedEventData {
    struct PlayerAdOpenedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerAdOpenedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAdOpenedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerAdOpenedEventData_FWDDECL
#include <Modloader/app/structs/PlayerAdOpenedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerAdOpenedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdOpenedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAdOpenedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerAdOpenedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAdOpenedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
