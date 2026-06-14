#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAddedTitleEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAddedTitleEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAddedTitleEventData_DEFINED)
#include <Modloader/app/structs/PlayerAddedTitleEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerAddedTitleEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAddedTitleEventData_DEFINED
struct PlayerAddedTitleEventData__Class;
struct PlayerAddedTitleEventData {
    struct PlayerAddedTitleEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerAddedTitleEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAddedTitleEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerAddedTitleEventData_FWDDECL
#include <Modloader/app/structs/PlayerAddedTitleEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerAddedTitleEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAddedTitleEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAddedTitleEventData_FWDDECL)
#include <Modloader/app/structs/PlayerAddedTitleEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAddedTitleEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
