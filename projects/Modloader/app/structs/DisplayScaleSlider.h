#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisplayScaleSlider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisplayScaleSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplayScaleSlider_DEFINED)
#include <Modloader/app/structs/DisplayScaleSlider__Fields.h>
#if defined(IL2CPP_STRUCT_DisplayScaleSlider__Fields_DEFINED)
#define IL2CPP_STRUCT_DisplayScaleSlider_DEFINED
struct DisplayScaleSlider__Class;
struct DisplayScaleSlider {
    struct DisplayScaleSlider__Class* klass;
    MonitorData* monitor;
    struct DisplayScaleSlider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisplayScaleSlider_FWDDECL)
#define IL2CPP_STRUCT_DisplayScaleSlider_FWDDECL
#include <Modloader/app/structs/DisplayScaleSlider__Class.h>
#endif
#undef IL2CPP_STRUCT_DisplayScaleSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplayScaleSlider_DEFINED) && !defined(IL2CPP_STRUCT_DisplayScaleSlider_FWDDECL)
#include <Modloader/app/structs/DisplayScaleSlider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisplayScaleSlider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
