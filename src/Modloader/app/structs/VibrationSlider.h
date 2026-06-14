#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VibrationSlider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VibrationSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VibrationSlider_DEFINED)
#include <Modloader/app/structs/VibrationSlider__Fields.h>
#if defined(IL2CPP_STRUCT_VibrationSlider__Fields_DEFINED)
#define IL2CPP_STRUCT_VibrationSlider_DEFINED
struct VibrationSlider__Class;
struct VibrationSlider {
    struct VibrationSlider__Class* klass;
    MonitorData* monitor;
    struct VibrationSlider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VibrationSlider_FWDDECL)
#define IL2CPP_STRUCT_VibrationSlider_FWDDECL
#include <Modloader/app/structs/VibrationSlider__Class.h>
#endif
#undef IL2CPP_STRUCT_VibrationSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VibrationSlider_DEFINED) && !defined(IL2CPP_STRUCT_VibrationSlider_FWDDECL)
#include <Modloader/app/structs/VibrationSlider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VibrationSlider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
