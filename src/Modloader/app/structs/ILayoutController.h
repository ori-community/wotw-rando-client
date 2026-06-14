#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILayoutController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILayoutController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutController_DEFINED)
#define IL2CPP_STRUCT_ILayoutController_DEFINED
struct ILayoutController__Class;
struct ILayoutController {
    struct ILayoutController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILayoutController_FWDDECL)
#define IL2CPP_STRUCT_ILayoutController_FWDDECL
#include <Modloader/app/structs/ILayoutController__Class.h>
#endif
#undef IL2CPP_STRUCT_ILayoutController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutController_DEFINED) && !defined(IL2CPP_STRUCT_ILayoutController_FWDDECL)
#include <Modloader/app/structs/ILayoutController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILayoutController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
