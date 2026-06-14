#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFNetwork__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFNetwork__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CFNetwork__StaticFields_DEFINED
struct Object;
struct Queue_1_Mono_Net_CFNetwork_GetProxyData_;
struct AutoResetEvent;
struct CFNetwork__StaticFields {
    struct Object* lock_obj;
    struct Queue_1_Mono_Net_CFNetwork_GetProxyData_* get_proxy_queue;
    struct AutoResetEvent* proxy_event;
};
#endif
#if !defined(IL2CPP_STRUCT_CFNetwork__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CFNetwork__StaticFields_FWDDECL
#include <Modloader/app/structs/AutoResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_Mono_Net_CFNetwork_GetProxyData_.h>
#endif
#undef IL2CPP_STRUCT_CFNetwork__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CFNetwork__StaticFields_FWDDECL)
#include <Modloader/app/structs/CFNetwork__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFNetwork__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
