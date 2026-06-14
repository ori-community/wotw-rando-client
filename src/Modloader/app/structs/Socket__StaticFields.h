#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Socket__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Socket__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Socket__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Socket__StaticFields_DEFINED
struct Object;
struct AsyncCallback;
struct IOAsyncCallback;
struct Socket__StaticFields {
    struct Object* s_InternalSyncObject;
    bool s_SupportsIPv4;
    bool s_SupportsIPv6;
    bool s_OSSupportsIPv6;
    bool s_Initialized;
    bool s_LoggingEnabled;
    bool s_PerfCountersEnabled;
    struct AsyncCallback* AcceptAsyncCallback;
    struct IOAsyncCallback* BeginAcceptCallback;
    struct IOAsyncCallback* BeginAcceptReceiveCallback;
    struct AsyncCallback* ConnectAsyncCallback;
    struct IOAsyncCallback* BeginConnectCallback;
    struct AsyncCallback* DisconnectAsyncCallback;
    struct IOAsyncCallback* BeginDisconnectCallback;
    struct AsyncCallback* ReceiveAsyncCallback;
    struct IOAsyncCallback* BeginReceiveCallback;
    struct IOAsyncCallback* BeginReceiveGenericCallback;
    struct AsyncCallback* ReceiveFromAsyncCallback;
    struct IOAsyncCallback* BeginReceiveFromCallback;
    struct AsyncCallback* SendAsyncCallback;
    struct IOAsyncCallback* BeginSendGenericCallback;
    struct AsyncCallback* SendToAsyncCallback;
};
#endif
#if !defined(IL2CPP_STRUCT_Socket__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Socket__StaticFields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IOAsyncCallback.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Socket__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Socket__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Socket__StaticFields_FWDDECL)
#include <Modloader/app/structs/Socket__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Socket__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
