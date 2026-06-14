#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContributeClientContextSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContributeClientContextSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeClientContextSink_DEFINED)
#define IL2CPP_STRUCT_IContributeClientContextSink_DEFINED
struct IContributeClientContextSink__Class;
struct IContributeClientContextSink {
    struct IContributeClientContextSink__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContributeClientContextSink_FWDDECL)
#define IL2CPP_STRUCT_IContributeClientContextSink_FWDDECL
#include <Modloader/app/structs/IContributeClientContextSink__Class.h>
#endif
#undef IL2CPP_STRUCT_IContributeClientContextSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeClientContextSink_DEFINED) && !defined(IL2CPP_STRUCT_IContributeClientContextSink_FWDDECL)
#include <Modloader/app/structs/IContributeClientContextSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContributeClientContextSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
