#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResumeGameController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResumeGameController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResumeGameController_DEFINED)
#include <Modloader/app/structs/ResumeGameController__Fields.h>
#if defined(IL2CPP_STRUCT_ResumeGameController__Fields_DEFINED)
#define IL2CPP_STRUCT_ResumeGameController_DEFINED
struct ResumeGameController__Class;
struct ResumeGameController {
    struct ResumeGameController__Class* klass;
    MonitorData* monitor;
    struct ResumeGameController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResumeGameController_FWDDECL)
#define IL2CPP_STRUCT_ResumeGameController_FWDDECL
#include <Modloader/app/structs/ResumeGameController__Class.h>
#endif
#undef IL2CPP_STRUCT_ResumeGameController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResumeGameController_DEFINED) && !defined(IL2CPP_STRUCT_ResumeGameController_FWDDECL)
#include <Modloader/app/structs/ResumeGameController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResumeGameController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
