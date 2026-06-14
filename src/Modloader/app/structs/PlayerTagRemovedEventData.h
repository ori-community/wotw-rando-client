#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerTagRemovedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerTagRemovedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerTagRemovedEventData_DEFINED)
#include <Modloader/app/structs/PlayerTagRemovedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerTagRemovedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerTagRemovedEventData_DEFINED
struct PlayerTagRemovedEventData__Class;
struct PlayerTagRemovedEventData {
    struct PlayerTagRemovedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerTagRemovedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerTagRemovedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerTagRemovedEventData_FWDDECL
#include <Modloader/app/structs/PlayerTagRemovedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerTagRemovedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerTagRemovedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerTagRemovedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerTagRemovedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerTagRemovedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
