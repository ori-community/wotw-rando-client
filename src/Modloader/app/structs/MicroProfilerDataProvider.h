#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerDataProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerDataProvider_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerDataProvider_DEFINED
struct MicroProfilerDataProvider__Class;
struct MicroProfilerDataProvider {
    struct MicroProfilerDataProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerDataProvider_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerDataProvider_FWDDECL
#include <Modloader/app/structs/MicroProfilerDataProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerDataProvider_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerDataProvider_FWDDECL)
#include <Modloader/app/structs/MicroProfilerDataProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerDataProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
