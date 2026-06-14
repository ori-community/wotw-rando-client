#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDebugRendererSubscriber_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDebugRendererSubscriber_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugRendererSubscriber_DEFINED)
#define IL2CPP_STRUCT_IDebugRendererSubscriber_DEFINED
struct IDebugRendererSubscriber__Class;
struct IDebugRendererSubscriber {
    struct IDebugRendererSubscriber__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDebugRendererSubscriber_FWDDECL)
#define IL2CPP_STRUCT_IDebugRendererSubscriber_FWDDECL
#include <Modloader/app/structs/IDebugRendererSubscriber__Class.h>
#endif
#undef IL2CPP_STRUCT_IDebugRendererSubscriber_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugRendererSubscriber_DEFINED) && !defined(IL2CPP_STRUCT_IDebugRendererSubscriber_FWDDECL)
#include <Modloader/app/structs/IDebugRendererSubscriber.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDebugRendererSubscriber.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
