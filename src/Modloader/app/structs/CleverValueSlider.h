#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverValueSlider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverValueSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverValueSlider_DEFINED)
#include <Modloader/app/structs/CleverValueSlider__Fields.h>
#if defined(IL2CPP_STRUCT_CleverValueSlider__Fields_DEFINED)
#define IL2CPP_STRUCT_CleverValueSlider_DEFINED
struct CleverValueSlider__Class;
struct CleverValueSlider {
    struct CleverValueSlider__Class* klass;
    MonitorData* monitor;
    struct CleverValueSlider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverValueSlider_FWDDECL)
#define IL2CPP_STRUCT_CleverValueSlider_FWDDECL
#include <Modloader/app/structs/CleverValueSlider__Class.h>
#endif
#undef IL2CPP_STRUCT_CleverValueSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverValueSlider_DEFINED) && !defined(IL2CPP_STRUCT_CleverValueSlider_FWDDECL)
#include <Modloader/app/structs/CleverValueSlider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverValueSlider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
