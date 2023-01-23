#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwingSoundController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwingSoundController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwingSoundController_DEFINED)
#include <Modloader/app/structs/SwingSoundController__Fields.h>
#if defined(IL2CPP_STRUCT_SwingSoundController__Fields_DEFINED)
#define IL2CPP_STRUCT_SwingSoundController_DEFINED
struct SwingSoundController__Class;
struct SwingSoundController {
    struct SwingSoundController__Class* klass;
    MonitorData* monitor;
    struct SwingSoundController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwingSoundController_FWDDECL)
#define IL2CPP_STRUCT_SwingSoundController_FWDDECL
#include <Modloader/app/structs/SwingSoundController__Class.h>
#endif
#undef IL2CPP_STRUCT_SwingSoundController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwingSoundController_DEFINED) && !defined(IL2CPP_STRUCT_SwingSoundController_FWDDECL)
#include <Modloader/app/structs/SwingSoundController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwingSoundController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
