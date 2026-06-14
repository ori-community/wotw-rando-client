#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerStringValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerStringValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerStringValueProvider_DEFINED)
#include <Modloader/app/structs/TimerStringValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_TimerStringValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerStringValueProvider_DEFINED
struct TimerStringValueProvider__Class;
struct TimerStringValueProvider {
    struct TimerStringValueProvider__Class* klass;
    MonitorData* monitor;
    struct TimerStringValueProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerStringValueProvider_FWDDECL)
#define IL2CPP_STRUCT_TimerStringValueProvider_FWDDECL
#include <Modloader/app/structs/TimerStringValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerStringValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerStringValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_TimerStringValueProvider_FWDDECL)
#include <Modloader/app/structs/TimerStringValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerStringValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
