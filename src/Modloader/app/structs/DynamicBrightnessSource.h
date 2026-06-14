#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicBrightnessSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicBrightnessSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicBrightnessSource_DEFINED)
#include <Modloader/app/structs/DynamicBrightnessSource__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicBrightnessSource__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicBrightnessSource_DEFINED
struct DynamicBrightnessSource__Class;
struct DynamicBrightnessSource {
    struct DynamicBrightnessSource__Class* klass;
    MonitorData* monitor;
    struct DynamicBrightnessSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicBrightnessSource_FWDDECL)
#define IL2CPP_STRUCT_DynamicBrightnessSource_FWDDECL
#include <Modloader/app/structs/DynamicBrightnessSource__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicBrightnessSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicBrightnessSource_DEFINED) && !defined(IL2CPP_STRUCT_DynamicBrightnessSource_FWDDECL)
#include <Modloader/app/structs/DynamicBrightnessSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicBrightnessSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
