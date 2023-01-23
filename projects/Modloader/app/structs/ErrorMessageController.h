#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ErrorMessageController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ErrorMessageController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorMessageController_DEFINED)
#include <Modloader/app/structs/ErrorMessageController__Fields.h>
#if defined(IL2CPP_STRUCT_ErrorMessageController__Fields_DEFINED)
#define IL2CPP_STRUCT_ErrorMessageController_DEFINED
struct ErrorMessageController__Class;
struct ErrorMessageController {
    struct ErrorMessageController__Class* klass;
    MonitorData* monitor;
    struct ErrorMessageController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ErrorMessageController_FWDDECL)
#define IL2CPP_STRUCT_ErrorMessageController_FWDDECL
#include <Modloader/app/structs/ErrorMessageController__Class.h>
#endif
#undef IL2CPP_STRUCT_ErrorMessageController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorMessageController_DEFINED) && !defined(IL2CPP_STRUCT_ErrorMessageController_FWDDECL)
#include <Modloader/app/structs/ErrorMessageController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ErrorMessageController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
