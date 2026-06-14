#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CryptoStream_ReadAsyncInternal_d_34_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CryptoStream_ReadAsyncInternal_d_34_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoStream_ReadAsyncInternal_d_34_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Int32_.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_1_System_Int32__DEFINED) && defined(IL2CPP_STRUCT_CancellationToken_DEFINED) && defined(IL2CPP_STRUCT_CryptoStream_HopToThreadPoolAwaitable_DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32__DEFINED)
#define IL2CPP_STRUCT_CryptoStream_ReadAsyncInternal_d_34_DEFINED
struct CryptoStream;
struct Byte__Array;
struct SemaphoreSlim;
struct CryptoStream_ReadAsyncInternal_d_34 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_System_Int32_ __t__builder;
    struct CryptoStream* __4__this;
    int32_t count;
    int32_t offset;
    struct Byte__Array* buffer;
    struct CancellationToken cancellationToken;
    struct Byte__Array* _tempInputBuffer_5__1;
    int32_t _currentOutputIndex_5__2;
    int32_t _bytesToDeliver_5__3;
    struct SemaphoreSlim* _sem_5__4;
    struct CryptoStream_HopToThreadPoolAwaitable __u__1;
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
    int32_t __7__wrap1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_ __u__3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CryptoStream_ReadAsyncInternal_d_34_FWDDECL)
#define IL2CPP_STRUCT_CryptoStream_ReadAsyncInternal_d_34_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CryptoStream.h>
#include <Modloader/app/structs/SemaphoreSlim.h>
#endif
#undef IL2CPP_STRUCT_CryptoStream_ReadAsyncInternal_d_34_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoStream_ReadAsyncInternal_d_34_DEFINED) && !defined(IL2CPP_STRUCT_CryptoStream_ReadAsyncInternal_d_34_FWDDECL)
#include <Modloader/app/structs/CryptoStream_ReadAsyncInternal_d_34.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CryptoStream_ReadAsyncInternal_d_34.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
