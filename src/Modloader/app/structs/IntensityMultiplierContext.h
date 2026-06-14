#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntensityMultiplierContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntensityMultiplierContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntensityMultiplierContext_DEFINED)
#include <Modloader/app/structs/IntensityMultiplierContext__Fields.h>
#if defined(IL2CPP_STRUCT_IntensityMultiplierContext__Fields_DEFINED)
#define IL2CPP_STRUCT_IntensityMultiplierContext_DEFINED
struct IntensityMultiplierContext__Class;
struct IntensityMultiplierContext {
    struct IntensityMultiplierContext__Class* klass;
    MonitorData* monitor;
    struct IntensityMultiplierContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntensityMultiplierContext_FWDDECL)
#define IL2CPP_STRUCT_IntensityMultiplierContext_FWDDECL
#include <Modloader/app/structs/IntensityMultiplierContext__Class.h>
#endif
#undef IL2CPP_STRUCT_IntensityMultiplierContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntensityMultiplierContext_DEFINED) && !defined(IL2CPP_STRUCT_IntensityMultiplierContext_FWDDECL)
#include <Modloader/app/structs/IntensityMultiplierContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntensityMultiplierContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
