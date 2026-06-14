#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MotionBlurController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MotionBlurController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlurController_DEFINED)
#include <Modloader/app/structs/MotionBlurController__Fields.h>
#if defined(IL2CPP_STRUCT_MotionBlurController__Fields_DEFINED)
#define IL2CPP_STRUCT_MotionBlurController_DEFINED
struct MotionBlurController__Class;
struct MotionBlurController {
    struct MotionBlurController__Class* klass;
    MonitorData* monitor;
    struct MotionBlurController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MotionBlurController_FWDDECL)
#define IL2CPP_STRUCT_MotionBlurController_FWDDECL
#include <Modloader/app/structs/MotionBlurController__Class.h>
#endif
#undef IL2CPP_STRUCT_MotionBlurController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlurController_DEFINED) && !defined(IL2CPP_STRUCT_MotionBlurController_FWDDECL)
#include <Modloader/app/structs/MotionBlurController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MotionBlurController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
