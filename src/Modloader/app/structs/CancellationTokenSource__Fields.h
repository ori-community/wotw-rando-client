#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancellationTokenSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancellationTokenSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationTokenSource__Fields_DEFINED)
#define IL2CPP_STRUCT_CancellationTokenSource__Fields_DEFINED
struct ManualResetEvent;
struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array;
struct CancellationTokenRegistration__Array;
struct CancellationCallbackInfo;
struct Timer;
struct __declspec(align(8)) CancellationTokenSource__Fields {
    struct ManualResetEvent* m_kernelEvent;
    struct SparselyPopulatedArray_1_CancellationCallbackInfo___Array* m_registeredCallbacksLists;
    int32_t m_state;
    int32_t m_threadIDExecutingCallbacks;
    bool m_disposed;
    struct CancellationTokenRegistration__Array* m_linkingRegistrations;
    struct CancellationCallbackInfo* m_executingCallback;
    struct Timer* m_timer;
};
#endif
#if !defined(IL2CPP_STRUCT_CancellationTokenSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_CancellationTokenSource__Fields_FWDDECL
#include <Modloader/app/structs/CancellationCallbackInfo.h>
#include <Modloader/app/structs/CancellationTokenRegistration__Array.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/SparselyPopulatedArray_1_CancellationCallbackInfo___Array.h>
#include <Modloader/app/structs/Timer.h>
#endif
#undef IL2CPP_STRUCT_CancellationTokenSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationTokenSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CancellationTokenSource__Fields_FWDDECL)
#include <Modloader/app/structs/CancellationTokenSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancellationTokenSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
