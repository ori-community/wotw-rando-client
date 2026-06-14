#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITrimController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITrimController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrimController_DEFINED)
#define IL2CPP_STRUCT_ITrimController_DEFINED
struct ITrimController__Class;
struct ITrimController {
    struct ITrimController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITrimController_FWDDECL)
#define IL2CPP_STRUCT_ITrimController_FWDDECL
#include <Modloader/app/structs/ITrimController__Class.h>
#endif
#undef IL2CPP_STRUCT_ITrimController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrimController_DEFINED) && !defined(IL2CPP_STRUCT_ITrimController_FWDDECL)
#include <Modloader/app/structs/ITrimController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITrimController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
