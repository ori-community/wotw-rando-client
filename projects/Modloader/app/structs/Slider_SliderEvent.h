#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Slider_SliderEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Slider_SliderEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_Slider_SliderEvent_DEFINED)
#include <Modloader/app/structs/Slider_SliderEvent__Fields.h>
#if defined(IL2CPP_STRUCT_Slider_SliderEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_Slider_SliderEvent_DEFINED
struct Slider_SliderEvent__Class;
struct Slider_SliderEvent {
    struct Slider_SliderEvent__Class* klass;
    MonitorData* monitor;
    struct Slider_SliderEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Slider_SliderEvent_FWDDECL)
#define IL2CPP_STRUCT_Slider_SliderEvent_FWDDECL
#include <Modloader/app/structs/Slider_SliderEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_Slider_SliderEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_Slider_SliderEvent_DEFINED) && !defined(IL2CPP_STRUCT_Slider_SliderEvent_FWDDECL)
#include <Modloader/app/structs/Slider_SliderEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Slider_SliderEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
