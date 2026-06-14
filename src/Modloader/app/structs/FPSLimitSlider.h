#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSLimitSlider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSLimitSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSLimitSlider_DEFINED)
#include <Modloader/app/structs/FPSLimitSlider__Fields.h>
#if defined(IL2CPP_STRUCT_FPSLimitSlider__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSLimitSlider_DEFINED
struct FPSLimitSlider__Class;
struct FPSLimitSlider {
    struct FPSLimitSlider__Class* klass;
    MonitorData* monitor;
    struct FPSLimitSlider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSLimitSlider_FWDDECL)
#define IL2CPP_STRUCT_FPSLimitSlider_FWDDECL
#include <Modloader/app/structs/FPSLimitSlider__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSLimitSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSLimitSlider_DEFINED) && !defined(IL2CPP_STRUCT_FPSLimitSlider_FWDDECL)
#include <Modloader/app/structs/FPSLimitSlider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSLimitSlider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
