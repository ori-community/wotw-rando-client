#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostStateMachineData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostStateMachineData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostStateMachineData_DEFINED)
#include <Modloader/app/structs/GhostStateMachineData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostStateMachineData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostStateMachineData_DEFINED
struct GhostStateMachineData__Class;
struct GhostStateMachineData {
    struct GhostStateMachineData__Class* klass;
    MonitorData* monitor;
    struct GhostStateMachineData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostStateMachineData_FWDDECL)
#define IL2CPP_STRUCT_GhostStateMachineData_FWDDECL
#include <Modloader/app/structs/GhostStateMachineData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostStateMachineData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostStateMachineData_DEFINED) && !defined(IL2CPP_STRUCT_GhostStateMachineData_FWDDECL)
#include <Modloader/app/structs/GhostStateMachineData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostStateMachineData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
