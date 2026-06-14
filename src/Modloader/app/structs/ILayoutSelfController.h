#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILayoutSelfController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILayoutSelfController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutSelfController_DEFINED)
#define IL2CPP_STRUCT_ILayoutSelfController_DEFINED
struct ILayoutSelfController__Class;
struct ILayoutSelfController {
    struct ILayoutSelfController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILayoutSelfController_FWDDECL)
#define IL2CPP_STRUCT_ILayoutSelfController_FWDDECL
#include <Modloader/app/structs/ILayoutSelfController__Class.h>
#endif
#undef IL2CPP_STRUCT_ILayoutSelfController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutSelfController_DEFINED) && !defined(IL2CPP_STRUCT_ILayoutSelfController_FWDDECL)
#include <Modloader/app/structs/ILayoutSelfController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILayoutSelfController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
