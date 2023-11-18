#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncProtocolRequest_ProcessOperation_d_24_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncProtocolRequest_ProcessOperation_d_24_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncProtocolRequest_ProcessOperation_d_24_DEFINED)
#include <Modloader/app/structs/AsyncOperationStatus__Enum.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_DEFINED) && defined(IL2CPP_STRUCT_CancellationToken_DEFINED) && defined(IL2CPP_STRUCT_AsyncOperationStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1__DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_DEFINED)
#define IL2CPP_STRUCT_AsyncProtocolRequest_ProcessOperation_d_24_DEFINED
struct AsyncProtocolRequest;
struct AsyncProtocolRequest_ProcessOperation_d_24 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct CancellationToken cancellationToken;
    struct AsyncProtocolRequest* __4__this;
    AsyncOperationStatus__Enum _status_5__1;

    AsyncOperationStatus__Enum _newStatus_5__2;

    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1_ __u__1;
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncProtocolRequest_ProcessOperation_d_24_FWDDECL)
#define IL2CPP_STRUCT_AsyncProtocolRequest_ProcessOperation_d_24_FWDDECL
#include <Modloader/app/structs/AsyncProtocolRequest.h>
#endif
#undef IL2CPP_STRUCT_AsyncProtocolRequest_ProcessOperation_d_24_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncProtocolRequest_ProcessOperation_d_24_DEFINED) && !defined(IL2CPP_STRUCT_AsyncProtocolRequest_ProcessOperation_d_24_FWDDECL)
#include <Modloader/app/structs/AsyncProtocolRequest_ProcessOperation_d_24.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncProtocolRequest_ProcessOperation_d_24.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
