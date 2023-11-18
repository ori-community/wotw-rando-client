#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Application_ControllerStateChanged_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Application_ControllerStateChanged_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_ControllerStateChanged_DEFINED)
#include <Modloader/app/structs/Application_ControllerStateChanged__Fields.h>
#if defined(IL2CPP_STRUCT_Application_ControllerStateChanged__Fields_DEFINED)
#define IL2CPP_STRUCT_Application_ControllerStateChanged_DEFINED
struct Application_ControllerStateChanged__Class;
struct Application_ControllerStateChanged {
    struct Application_ControllerStateChanged__Class* klass;
    MonitorData* monitor;
    struct Application_ControllerStateChanged__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Application_ControllerStateChanged_FWDDECL)
#define IL2CPP_STRUCT_Application_ControllerStateChanged_FWDDECL
#include <Modloader/app/structs/Application_ControllerStateChanged__Class.h>
#endif
#undef IL2CPP_STRUCT_Application_ControllerStateChanged_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_ControllerStateChanged_DEFINED) && !defined(IL2CPP_STRUCT_Application_ControllerStateChanged_FWDDECL)
#include <Modloader/app/structs/Application_ControllerStateChanged.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Application_ControllerStateChanged.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
