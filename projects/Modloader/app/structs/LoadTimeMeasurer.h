#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadTimeMeasurer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadTimeMeasurer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadTimeMeasurer_DEFINED)
#include <Modloader/app/structs/LoadTimeMeasurer__Fields.h>
#if defined(IL2CPP_STRUCT_LoadTimeMeasurer__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadTimeMeasurer_DEFINED
struct LoadTimeMeasurer__Class;
struct LoadTimeMeasurer {
    struct LoadTimeMeasurer__Class* klass;
    MonitorData* monitor;
    struct LoadTimeMeasurer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadTimeMeasurer_FWDDECL)
#define IL2CPP_STRUCT_LoadTimeMeasurer_FWDDECL
#include <Modloader/app/structs/LoadTimeMeasurer__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadTimeMeasurer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadTimeMeasurer_DEFINED) && !defined(IL2CPP_STRUCT_LoadTimeMeasurer_FWDDECL)
#include <Modloader/app/structs/LoadTimeMeasurer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadTimeMeasurer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
