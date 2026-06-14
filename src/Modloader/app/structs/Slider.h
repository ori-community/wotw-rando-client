#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Slider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Slider_INITIALIZING
#if !defined(IL2CPP_STRUCT_Slider_DEFINED)
#include <Modloader/app/structs/Slider__Fields.h>
#if defined(IL2CPP_STRUCT_Slider__Fields_DEFINED)
#define IL2CPP_STRUCT_Slider_DEFINED
struct Slider__Class;
struct Slider {
    struct Slider__Class* klass;
    MonitorData* monitor;
    struct Slider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Slider_FWDDECL)
#define IL2CPP_STRUCT_Slider_FWDDECL
#include <Modloader/app/structs/Slider__Class.h>
#endif
#undef IL2CPP_STRUCT_Slider_INITIALIZING
#if !defined(IL2CPP_STRUCT_Slider_DEFINED) && !defined(IL2CPP_STRUCT_Slider_FWDDECL)
#include <Modloader/app/structs/Slider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Slider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
