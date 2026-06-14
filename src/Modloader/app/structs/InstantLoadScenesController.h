#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantLoadScenesController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantLoadScenesController_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantLoadScenesController_DEFINED)
#include <Modloader/app/structs/InstantLoadScenesController__Fields.h>
#if defined(IL2CPP_STRUCT_InstantLoadScenesController__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantLoadScenesController_DEFINED
struct InstantLoadScenesController__Class;
struct InstantLoadScenesController {
    struct InstantLoadScenesController__Class* klass;
    MonitorData* monitor;
    struct InstantLoadScenesController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantLoadScenesController_FWDDECL)
#define IL2CPP_STRUCT_InstantLoadScenesController_FWDDECL
#include <Modloader/app/structs/InstantLoadScenesController__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantLoadScenesController_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantLoadScenesController_DEFINED) && !defined(IL2CPP_STRUCT_InstantLoadScenesController_FWDDECL)
#include <Modloader/app/structs/InstantLoadScenesController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantLoadScenesController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
