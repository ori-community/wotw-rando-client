#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvasStateController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvasStateController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvasStateController_DEFINED)
#include <Modloader/app/structs/LightCanvasStateController__Fields.h>
#if defined(IL2CPP_STRUCT_LightCanvasStateController__Fields_DEFINED)
#define IL2CPP_STRUCT_LightCanvasStateController_DEFINED
struct LightCanvasStateController__Class;
struct LightCanvasStateController {
    struct LightCanvasStateController__Class* klass;
    MonitorData* monitor;
    struct LightCanvasStateController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCanvasStateController_FWDDECL)
#define IL2CPP_STRUCT_LightCanvasStateController_FWDDECL
#include <Modloader/app/structs/LightCanvasStateController__Class.h>
#endif
#undef IL2CPP_STRUCT_LightCanvasStateController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvasStateController_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvasStateController_FWDDECL)
#include <Modloader/app/structs/LightCanvasStateController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvasStateController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
