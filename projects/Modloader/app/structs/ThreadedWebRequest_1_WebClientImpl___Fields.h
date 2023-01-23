#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadedWebRequest_1_WebClientImpl___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadedWebRequest_1_WebClientImpl___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadedWebRequest_1_WebClientImpl___Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadedWebRequest_1_WebClientImpl___Fields_DEFINED
struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_;
struct IRequest;
struct Thread;
struct String;
struct Timer_1;
struct __declspec(align(8)) ThreadedWebRequest_1_WebClientImpl___Fields {
    struct Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_* m_callback;
    struct IRequest* m_request;
    struct Thread* m_thread;
    struct String* m_url;
    bool m_isResponseDispatched;
    struct Timer_1* timer;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadedWebRequest_1_WebClientImpl___Fields_FWDDECL)
#define IL2CPP_STRUCT_ThreadedWebRequest_1_WebClientImpl___Fields_FWDDECL
#include <Modloader/app/structs/Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_.h>
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Thread.h>
#include <Modloader/app/structs/Timer_1.h>
#endif
#undef IL2CPP_STRUCT_ThreadedWebRequest_1_WebClientImpl___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadedWebRequest_1_WebClientImpl___Fields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadedWebRequest_1_WebClientImpl___Fields_FWDDECL)
#include <Modloader/app/structs/ThreadedWebRequest_1_WebClientImpl___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadedWebRequest_1_WebClientImpl___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
