#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestsController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsController_DEFINED)
#include <Modloader/app/structs/QuestsController__Fields.h>
#if defined(IL2CPP_STRUCT_QuestsController__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestsController_DEFINED
struct QuestsController__Class;
struct QuestsController {
    struct QuestsController__Class* klass;
    MonitorData* monitor;
    struct QuestsController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestsController_FWDDECL)
#define IL2CPP_STRUCT_QuestsController_FWDDECL
#include <Modloader/app/structs/QuestsController__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsController_DEFINED) && !defined(IL2CPP_STRUCT_QuestsController_FWDDECL)
#include <Modloader/app/structs/QuestsController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestsController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
