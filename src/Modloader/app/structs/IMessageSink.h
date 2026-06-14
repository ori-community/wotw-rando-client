#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMessageSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMessageSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessageSink_DEFINED)
#define IL2CPP_STRUCT_IMessageSink_DEFINED
struct IMessageSink__Class;
struct IMessageSink {
    struct IMessageSink__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMessageSink_FWDDECL)
#define IL2CPP_STRUCT_IMessageSink_FWDDECL
#include <Modloader/app/structs/IMessageSink__Class.h>
#endif
#undef IL2CPP_STRUCT_IMessageSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessageSink_DEFINED) && !defined(IL2CPP_STRUCT_IMessageSink_FWDDECL)
#include <Modloader/app/structs/IMessageSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMessageSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
