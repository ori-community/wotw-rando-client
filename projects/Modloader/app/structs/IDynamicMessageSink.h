#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDynamicMessageSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDynamicMessageSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDynamicMessageSink_DEFINED)
#define IL2CPP_STRUCT_IDynamicMessageSink_DEFINED
struct IDynamicMessageSink__Class;
struct IDynamicMessageSink {
    struct IDynamicMessageSink__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDynamicMessageSink_FWDDECL)
#define IL2CPP_STRUCT_IDynamicMessageSink_FWDDECL
#include <Modloader/app/structs/IDynamicMessageSink__Class.h>
#endif
#undef IL2CPP_STRUCT_IDynamicMessageSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDynamicMessageSink_DEFINED) && !defined(IL2CPP_STRUCT_IDynamicMessageSink_FWDDECL)
#include <Modloader/app/structs/IDynamicMessageSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDynamicMessageSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
