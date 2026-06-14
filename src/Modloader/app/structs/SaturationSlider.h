#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaturationSlider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaturationSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaturationSlider_DEFINED)
#include <Modloader/app/structs/SaturationSlider__Fields.h>
#if defined(IL2CPP_STRUCT_SaturationSlider__Fields_DEFINED)
#define IL2CPP_STRUCT_SaturationSlider_DEFINED
struct SaturationSlider__Class;
struct SaturationSlider {
    struct SaturationSlider__Class* klass;
    MonitorData* monitor;
    struct SaturationSlider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaturationSlider_FWDDECL)
#define IL2CPP_STRUCT_SaturationSlider_FWDDECL
#include <Modloader/app/structs/SaturationSlider__Class.h>
#endif
#undef IL2CPP_STRUCT_SaturationSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaturationSlider_DEFINED) && !defined(IL2CPP_STRUCT_SaturationSlider_FWDDECL)
#include <Modloader/app/structs/SaturationSlider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaturationSlider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
