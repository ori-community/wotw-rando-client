#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindShaftController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindShaftController_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindShaftController_DEFINED)
#include <Modloader/app/structs/WindShaftController__Fields.h>
#if defined(IL2CPP_STRUCT_WindShaftController__Fields_DEFINED)
#define IL2CPP_STRUCT_WindShaftController_DEFINED
struct WindShaftController__Class;
struct WindShaftController {
    struct WindShaftController__Class* klass;
    MonitorData* monitor;
    struct WindShaftController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindShaftController_FWDDECL)
#define IL2CPP_STRUCT_WindShaftController_FWDDECL
#include <Modloader/app/structs/WindShaftController__Class.h>
#endif
#undef IL2CPP_STRUCT_WindShaftController_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindShaftController_DEFINED) && !defined(IL2CPP_STRUCT_WindShaftController_FWDDECL)
#include <Modloader/app/structs/WindShaftController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindShaftController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
