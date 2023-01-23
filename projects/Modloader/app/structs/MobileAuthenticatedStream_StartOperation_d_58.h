#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MobileAuthenticatedStream_StartOperation_d_58_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MobileAuthenticatedStream_StartOperation_d_58_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_StartOperation_d_58_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Int32_.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mono_Net_Security_AsyncProtocolResult_.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_OperationType__Enum.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_1_System_Int32__DEFINED) && defined(IL2CPP_STRUCT_MobileAuthenticatedStream_OperationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_CancellationToken_DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mono_Net_Security_AsyncProtocolResult__DEFINED)
#define IL2CPP_STRUCT_MobileAuthenticatedStream_StartOperation_d_58_DEFINED
struct MobileAuthenticatedStream;
struct AsyncProtocolRequest;
struct MobileAuthenticatedStream_StartOperation_d_58 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_System_Int32_ __t__builder;
    struct MobileAuthenticatedStream* __4__this;
    MobileAuthenticatedStream_OperationType__Enum type;

    struct AsyncProtocolRequest* asyncRequest;
    struct CancellationToken cancellationToken;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_Mono_Net_Security_AsyncProtocolResult_ __u__1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_StartOperation_d_58_FWDDECL)
#define IL2CPP_STRUCT_MobileAuthenticatedStream_StartOperation_d_58_FWDDECL
#include <Modloader/app/structs/AsyncProtocolRequest.h>
#include <Modloader/app/structs/MobileAuthenticatedStream.h>
#endif
#undef IL2CPP_STRUCT_MobileAuthenticatedStream_StartOperation_d_58_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_StartOperation_d_58_DEFINED) && !defined(IL2CPP_STRUCT_MobileAuthenticatedStream_StartOperation_d_58_FWDDECL)
#include <Modloader/app/structs/MobileAuthenticatedStream_StartOperation_d_58.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MobileAuthenticatedStream_StartOperation_d_58.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
