#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestWindowsController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestWindowsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindowsController_DEFINED)
#include <Modloader/app/structs/TestWindowsController__Fields.h>
#if defined(IL2CPP_STRUCT_TestWindowsController__Fields_DEFINED)
#define IL2CPP_STRUCT_TestWindowsController_DEFINED
struct TestWindowsController__Class;
struct TestWindowsController {
    struct TestWindowsController__Class* klass;
    MonitorData* monitor;
    struct TestWindowsController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestWindowsController_FWDDECL)
#define IL2CPP_STRUCT_TestWindowsController_FWDDECL
#include <Modloader/app/structs/TestWindowsController__Class.h>
#endif
#undef IL2CPP_STRUCT_TestWindowsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindowsController_DEFINED) && !defined(IL2CPP_STRUCT_TestWindowsController_FWDDECL)
#include <Modloader/app/structs/TestWindowsController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestWindowsController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
