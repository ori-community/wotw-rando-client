#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingAlertState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingAlertState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingAlertState_DEFINED)
#include <Modloader/app/structs/RammingAlertState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingAlertState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingAlertState_DEFINED
struct RammingAlertState__Class;
struct RammingAlertState {
    struct RammingAlertState__Class* klass;
    MonitorData* monitor;
    struct RammingAlertState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingAlertState_FWDDECL)
#define IL2CPP_STRUCT_RammingAlertState_FWDDECL
#include <Modloader/app/structs/RammingAlertState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingAlertState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingAlertState_DEFINED) && !defined(IL2CPP_STRUCT_RammingAlertState_FWDDECL)
#include <Modloader/app/structs/RammingAlertState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingAlertState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
