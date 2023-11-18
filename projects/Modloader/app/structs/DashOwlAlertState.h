#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlAlertState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlAlertState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlAlertState_DEFINED)
#include <Modloader/app/structs/DashOwlAlertState__Fields.h>
#if defined(IL2CPP_STRUCT_DashOwlAlertState__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlAlertState_DEFINED
struct DashOwlAlertState__Class;
struct DashOwlAlertState {
    struct DashOwlAlertState__Class* klass;
    MonitorData* monitor;
    struct DashOwlAlertState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashOwlAlertState_FWDDECL)
#define IL2CPP_STRUCT_DashOwlAlertState_FWDDECL
#include <Modloader/app/structs/DashOwlAlertState__Class.h>
#endif
#undef IL2CPP_STRUCT_DashOwlAlertState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlAlertState_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlAlertState_FWDDECL)
#include <Modloader/app/structs/DashOwlAlertState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlAlertState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
