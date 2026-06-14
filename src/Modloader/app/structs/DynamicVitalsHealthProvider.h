#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicVitalsHealthProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicVitalsHealthProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicVitalsHealthProvider_DEFINED)
#include <Modloader/app/structs/DynamicVitalsHealthProvider__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicVitalsHealthProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicVitalsHealthProvider_DEFINED
struct DynamicVitalsHealthProvider__Class;
struct DynamicVitalsHealthProvider {
    struct DynamicVitalsHealthProvider__Class* klass;
    MonitorData* monitor;
    struct DynamicVitalsHealthProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicVitalsHealthProvider_FWDDECL)
#define IL2CPP_STRUCT_DynamicVitalsHealthProvider_FWDDECL
#include <Modloader/app/structs/DynamicVitalsHealthProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicVitalsHealthProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicVitalsHealthProvider_DEFINED) && !defined(IL2CPP_STRUCT_DynamicVitalsHealthProvider_FWDDECL)
#include <Modloader/app/structs/DynamicVitalsHealthProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicVitalsHealthProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
