#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugController_DEFINED)
#include <Modloader/app/structs/SlugController__Fields.h>
#if defined(IL2CPP_STRUCT_SlugController__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugController_DEFINED
struct SlugController__Class;
struct SlugController {
    struct SlugController__Class* klass;
    MonitorData* monitor;
    struct SlugController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugController_FWDDECL)
#define IL2CPP_STRUCT_SlugController_FWDDECL
#include <Modloader/app/structs/SlugController__Class.h>
#endif
#undef IL2CPP_STRUCT_SlugController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugController_DEFINED) && !defined(IL2CPP_STRUCT_SlugController_FWDDECL)
#include <Modloader/app/structs/SlugController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
