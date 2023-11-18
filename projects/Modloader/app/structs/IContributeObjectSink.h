#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContributeObjectSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContributeObjectSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeObjectSink_DEFINED)
#define IL2CPP_STRUCT_IContributeObjectSink_DEFINED
struct IContributeObjectSink__Class;
struct IContributeObjectSink {
    struct IContributeObjectSink__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContributeObjectSink_FWDDECL)
#define IL2CPP_STRUCT_IContributeObjectSink_FWDDECL
#include <Modloader/app/structs/IContributeObjectSink__Class.h>
#endif
#undef IL2CPP_STRUCT_IContributeObjectSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeObjectSink_DEFINED) && !defined(IL2CPP_STRUCT_IContributeObjectSink_FWDDECL)
#include <Modloader/app/structs/IContributeObjectSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContributeObjectSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
