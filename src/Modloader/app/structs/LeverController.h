#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeverController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeverController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverController_DEFINED)
#include <Modloader/app/structs/LeverController__Fields.h>
#if defined(IL2CPP_STRUCT_LeverController__Fields_DEFINED)
#define IL2CPP_STRUCT_LeverController_DEFINED
struct LeverController__Class;
struct LeverController {
    struct LeverController__Class* klass;
    MonitorData* monitor;
    struct LeverController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeverController_FWDDECL)
#define IL2CPP_STRUCT_LeverController_FWDDECL
#include <Modloader/app/structs/LeverController__Class.h>
#endif
#undef IL2CPP_STRUCT_LeverController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverController_DEFINED) && !defined(IL2CPP_STRUCT_LeverController_FWDDECL)
#include <Modloader/app/structs/LeverController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeverController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
