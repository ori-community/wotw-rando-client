#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneController_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneController_DEFINED)
#include <Modloader/app/structs/XboxOneController__Fields.h>
#if defined(IL2CPP_STRUCT_XboxOneController__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneController_DEFINED
struct XboxOneController__Class;
struct XboxOneController {
    struct XboxOneController__Class* klass;
    MonitorData* monitor;
    struct XboxOneController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneController_FWDDECL)
#define IL2CPP_STRUCT_XboxOneController_FWDDECL
#include <Modloader/app/structs/XboxOneController__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneController_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneController_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneController_FWDDECL)
#include <Modloader/app/structs/XboxOneController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
