#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Histogram_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Histogram_INITIALIZING
#if !defined(IL2CPP_STRUCT_Histogram_DEFINED)
#include <Modloader/app/structs/Histogram__Fields.h>
#if defined(IL2CPP_STRUCT_Histogram__Fields_DEFINED)
#define IL2CPP_STRUCT_Histogram_DEFINED
struct Histogram__Class;
struct Histogram {
    struct Histogram__Class* klass;
    MonitorData* monitor;
    struct Histogram__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Histogram_FWDDECL)
#define IL2CPP_STRUCT_Histogram_FWDDECL
#include <Modloader/app/structs/Histogram__Class.h>
#endif
#undef IL2CPP_STRUCT_Histogram_INITIALIZING
#if !defined(IL2CPP_STRUCT_Histogram_DEFINED) && !defined(IL2CPP_STRUCT_Histogram_FWDDECL)
#include <Modloader/app/structs/Histogram.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Histogram.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
