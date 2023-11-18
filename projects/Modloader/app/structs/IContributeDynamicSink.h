#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContributeDynamicSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContributeDynamicSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeDynamicSink_DEFINED)
#define IL2CPP_STRUCT_IContributeDynamicSink_DEFINED
struct IContributeDynamicSink__Class;
struct IContributeDynamicSink {
    struct IContributeDynamicSink__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContributeDynamicSink_FWDDECL)
#define IL2CPP_STRUCT_IContributeDynamicSink_FWDDECL
#include <Modloader/app/structs/IContributeDynamicSink__Class.h>
#endif
#undef IL2CPP_STRUCT_IContributeDynamicSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeDynamicSink_DEFINED) && !defined(IL2CPP_STRUCT_IContributeDynamicSink_FWDDECL)
#include <Modloader/app/structs/IContributeDynamicSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContributeDynamicSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
