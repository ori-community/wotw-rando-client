#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NanoProfilerDataProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NanoProfilerDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_NanoProfilerDataProvider_DEFINED)
#define IL2CPP_STRUCT_NanoProfilerDataProvider_DEFINED
struct NanoProfilerDataProvider__Class;
struct NanoProfilerDataProvider {
    struct NanoProfilerDataProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NanoProfilerDataProvider_FWDDECL)
#define IL2CPP_STRUCT_NanoProfilerDataProvider_FWDDECL
#include <Modloader/app/structs/NanoProfilerDataProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_NanoProfilerDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_NanoProfilerDataProvider_DEFINED) && !defined(IL2CPP_STRUCT_NanoProfilerDataProvider_FWDDECL)
#include <Modloader/app/structs/NanoProfilerDataProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NanoProfilerDataProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
