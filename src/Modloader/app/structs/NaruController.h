#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NaruController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NaruController_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruController_DEFINED)
#include <Modloader/app/structs/NaruController__Fields.h>
#if defined(IL2CPP_STRUCT_NaruController__Fields_DEFINED)
#define IL2CPP_STRUCT_NaruController_DEFINED
struct NaruController__Class;
struct NaruController {
    struct NaruController__Class* klass;
    MonitorData* monitor;
    struct NaruController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NaruController_FWDDECL)
#define IL2CPP_STRUCT_NaruController_FWDDECL
#include <Modloader/app/structs/NaruController__Class.h>
#endif
#undef IL2CPP_STRUCT_NaruController_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruController_DEFINED) && !defined(IL2CPP_STRUCT_NaruController_FWDDECL)
#include <Modloader/app/structs/NaruController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NaruController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
