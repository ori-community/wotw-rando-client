#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CryptoStream_WriteAsyncInternal_d_37_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CryptoStream_WriteAsyncInternal_d_37_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoStream_WriteAsyncInternal_d_37_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_DEFINED) && defined(IL2CPP_STRUCT_CancellationToken_DEFINED) && defined(IL2CPP_STRUCT_CryptoStream_HopToThreadPoolAwaitable_DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_DEFINED)
#define IL2CPP_STRUCT_CryptoStream_WriteAsyncInternal_d_37_DEFINED
struct CryptoStream;
struct Byte__Array;
struct SemaphoreSlim;
struct CryptoStream_WriteAsyncInternal_d_37 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct CryptoStream* __4__this;
    int32_t count;
    int32_t offset;
    struct Byte__Array* buffer;
    struct CancellationToken cancellationToken;
    int32_t _bytesToWrite_5__1;
    int32_t _currentInputIndex_5__2;
    int32_t _numWholeBlocksInBytes_5__3;
    struct SemaphoreSlim* _sem_5__4;
    struct CryptoStream_HopToThreadPoolAwaitable __u__1;
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CryptoStream_WriteAsyncInternal_d_37_FWDDECL)
#define IL2CPP_STRUCT_CryptoStream_WriteAsyncInternal_d_37_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CryptoStream.h>
#include <Modloader/app/structs/SemaphoreSlim.h>
#endif
#undef IL2CPP_STRUCT_CryptoStream_WriteAsyncInternal_d_37_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoStream_WriteAsyncInternal_d_37_DEFINED) && !defined(IL2CPP_STRUCT_CryptoStream_WriteAsyncInternal_d_37_FWDDECL)
#include <Modloader/app/structs/CryptoStream_WriteAsyncInternal_d_37.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CryptoStream_WriteAsyncInternal_d_37.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
