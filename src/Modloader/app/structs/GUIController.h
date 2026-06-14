#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIController_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIController_DEFINED)
#include <Modloader/app/structs/GUIController__Fields.h>
#if defined(IL2CPP_STRUCT_GUIController__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIController_DEFINED
struct GUIController__Class;
struct GUIController {
    struct GUIController__Class* klass;
    MonitorData* monitor;
    struct GUIController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIController_FWDDECL)
#define IL2CPP_STRUCT_GUIController_FWDDECL
#include <Modloader/app/structs/GUIController__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIController_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIController_DEFINED) && !defined(IL2CPP_STRUCT_GUIController_FWDDECL)
#include <Modloader/app/structs/GUIController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
