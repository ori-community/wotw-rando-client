#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebRequest__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebRequest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequest__StaticFields_DEFINED)
#define IL2CPP_STRUCT_WebRequest__StaticFields_DEFINED
struct ArrayList;
struct Object;
struct TimerThread_Queue;
struct WebRequest_DesignerWebRequestCreate;
struct IWebProxy;
struct WebRequest__StaticFields {
    struct ArrayList* s_PrefixList;
    struct Object* s_InternalSyncObject;
    struct TimerThread_Queue* s_DefaultTimerQueue;
    struct WebRequest_DesignerWebRequestCreate* webRequestCreate;
    struct IWebProxy* s_DefaultWebProxy;
    bool s_DefaultWebProxyInitialized;
};
#endif
#if !defined(IL2CPP_STRUCT_WebRequest__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_WebRequest__StaticFields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimerThread_Queue.h>
#include <Modloader/app/structs/WebRequest_DesignerWebRequestCreate.h>
#endif
#undef IL2CPP_STRUCT_WebRequest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequest__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_WebRequest__StaticFields_FWDDECL)
#include <Modloader/app/structs/WebRequest__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebRequest__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
