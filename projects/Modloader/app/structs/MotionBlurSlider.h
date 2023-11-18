#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MotionBlurSlider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MotionBlurSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlurSlider_DEFINED)
#include <Modloader/app/structs/MotionBlurSlider__Fields.h>
#if defined(IL2CPP_STRUCT_MotionBlurSlider__Fields_DEFINED)
#define IL2CPP_STRUCT_MotionBlurSlider_DEFINED
struct MotionBlurSlider__Class;
struct MotionBlurSlider {
    struct MotionBlurSlider__Class* klass;
    MonitorData* monitor;
    struct MotionBlurSlider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MotionBlurSlider_FWDDECL)
#define IL2CPP_STRUCT_MotionBlurSlider_FWDDECL
#include <Modloader/app/structs/MotionBlurSlider__Class.h>
#endif
#undef IL2CPP_STRUCT_MotionBlurSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlurSlider_DEFINED) && !defined(IL2CPP_STRUCT_MotionBlurSlider_FWDDECL)
#include <Modloader/app/structs/MotionBlurSlider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MotionBlurSlider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
