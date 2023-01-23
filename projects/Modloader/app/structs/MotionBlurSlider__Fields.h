#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MotionBlurSlider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MotionBlurSlider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlurSlider__Fields_DEFINED)
#include <Modloader/app/structs/CleverValueSlider__Fields.h>
#if defined(IL2CPP_STRUCT_CleverValueSlider__Fields_DEFINED)
#define IL2CPP_STRUCT_MotionBlurSlider__Fields_DEFINED
struct MessageProvider;
struct MotionBlurSlider__Fields {
    struct CleverValueSlider__Fields _;
    struct MessageProvider* OffMessageProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MotionBlurSlider__Fields_FWDDECL)
#define IL2CPP_STRUCT_MotionBlurSlider__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_MotionBlurSlider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlurSlider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MotionBlurSlider__Fields_FWDDECL)
#include <Modloader/app/structs/MotionBlurSlider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MotionBlurSlider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
