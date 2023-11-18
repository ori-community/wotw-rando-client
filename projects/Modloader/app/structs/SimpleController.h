#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleController_DEFINED)
#include <Modloader/app/structs/SimpleController__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleController__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleController_DEFINED
struct SimpleController__Class;
struct SimpleController {
    struct SimpleController__Class* klass;
    MonitorData* monitor;
    struct SimpleController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleController_FWDDECL)
#define IL2CPP_STRUCT_SimpleController_FWDDECL
#include <Modloader/app/structs/SimpleController__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleController_DEFINED) && !defined(IL2CPP_STRUCT_SimpleController_FWDDECL)
#include <Modloader/app/structs/SimpleController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
