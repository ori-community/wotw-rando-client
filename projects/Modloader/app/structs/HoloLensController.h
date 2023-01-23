#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HoloLensController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HoloLensController_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoloLensController_DEFINED)
#include <Modloader/app/structs/HoloLensController__Fields.h>
#if defined(IL2CPP_STRUCT_HoloLensController__Fields_DEFINED)
#define IL2CPP_STRUCT_HoloLensController_DEFINED
struct HoloLensController__Class;
struct HoloLensController {
    struct HoloLensController__Class* klass;
    MonitorData* monitor;
    struct HoloLensController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HoloLensController_FWDDECL)
#define IL2CPP_STRUCT_HoloLensController_FWDDECL
#include <Modloader/app/structs/HoloLensController__Class.h>
#endif
#undef IL2CPP_STRUCT_HoloLensController_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoloLensController_DEFINED) && !defined(IL2CPP_STRUCT_HoloLensController_FWDDECL)
#include <Modloader/app/structs/HoloLensController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HoloLensController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
