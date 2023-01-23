#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrightnessProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrightnessProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrightnessProvider_DEFINED)
#include <Modloader/app/structs/BrightnessProvider__Fields.h>
#if defined(IL2CPP_STRUCT_BrightnessProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_BrightnessProvider_DEFINED
struct BrightnessProvider__Class;
struct BrightnessProvider {
    struct BrightnessProvider__Class* klass;
    MonitorData* monitor;
    struct BrightnessProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrightnessProvider_FWDDECL)
#define IL2CPP_STRUCT_BrightnessProvider_FWDDECL
#include <Modloader/app/structs/BrightnessProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_BrightnessProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrightnessProvider_DEFINED) && !defined(IL2CPP_STRUCT_BrightnessProvider_FWDDECL)
#include <Modloader/app/structs/BrightnessProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrightnessProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
