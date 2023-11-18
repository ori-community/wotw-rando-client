#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MistController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MistController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistController_DEFINED)
#include <Modloader/app/structs/MistController__Fields.h>
#if defined(IL2CPP_STRUCT_MistController__Fields_DEFINED)
#define IL2CPP_STRUCT_MistController_DEFINED
struct MistController__Class;
struct MistController {
    struct MistController__Class* klass;
    MonitorData* monitor;
    struct MistController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MistController_FWDDECL)
#define IL2CPP_STRUCT_MistController_FWDDECL
#include <Modloader/app/structs/MistController__Class.h>
#endif
#undef IL2CPP_STRUCT_MistController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistController_DEFINED) && !defined(IL2CPP_STRUCT_MistController_FWDDECL)
#include <Modloader/app/structs/MistController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MistController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
