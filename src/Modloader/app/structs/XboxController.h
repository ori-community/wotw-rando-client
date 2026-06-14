#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxController_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxController_DEFINED)
#include <Modloader/app/structs/XboxController__Fields.h>
#if defined(IL2CPP_STRUCT_XboxController__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxController_DEFINED
struct XboxController__Class;
struct XboxController {
    struct XboxController__Class* klass;
    MonitorData* monitor;
    struct XboxController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxController_FWDDECL)
#define IL2CPP_STRUCT_XboxController_FWDDECL
#include <Modloader/app/structs/XboxController__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxController_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxController_DEFINED) && !defined(IL2CPP_STRUCT_XboxController_FWDDECL)
#include <Modloader/app/structs/XboxController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
