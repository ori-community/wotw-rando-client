#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContributeServerContextSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContributeServerContextSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeServerContextSink_DEFINED)
#define IL2CPP_STRUCT_IContributeServerContextSink_DEFINED
struct IContributeServerContextSink__Class;
struct IContributeServerContextSink {
    struct IContributeServerContextSink__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContributeServerContextSink_FWDDECL)
#define IL2CPP_STRUCT_IContributeServerContextSink_FWDDECL
#include <Modloader/app/structs/IContributeServerContextSink__Class.h>
#endif
#undef IL2CPP_STRUCT_IContributeServerContextSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeServerContextSink_DEFINED) && !defined(IL2CPP_STRUCT_IContributeServerContextSink_FWDDECL)
#include <Modloader/app/structs/IContributeServerContextSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContributeServerContextSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
