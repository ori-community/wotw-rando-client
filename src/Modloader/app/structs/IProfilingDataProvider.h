#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IProfilingDataProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IProfilingDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IProfilingDataProvider_DEFINED)
#define IL2CPP_STRUCT_IProfilingDataProvider_DEFINED
struct IProfilingDataProvider__Class;
struct IProfilingDataProvider {
    struct IProfilingDataProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IProfilingDataProvider_FWDDECL)
#define IL2CPP_STRUCT_IProfilingDataProvider_FWDDECL
#include <Modloader/app/structs/IProfilingDataProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IProfilingDataProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IProfilingDataProvider_DEFINED) && !defined(IL2CPP_STRUCT_IProfilingDataProvider_FWDDECL)
#include <Modloader/app/structs/IProfilingDataProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IProfilingDataProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
