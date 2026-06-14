#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_DEFINED)
#include <Modloader/app/structs/SpinLock.h>
#if defined(IL2CPP_STRUCT_SpinLock_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_DEFINED
struct IThreadPoolWorkItem__Array;
struct __declspec(align(8)) ThreadPoolWorkQueue_WorkStealingQueue__Fields {
    struct IThreadPoolWorkItem__Array* m_array;
    int32_t m_mask;
    int32_t m_headIndex;
    int32_t m_tailIndex;
    struct SpinLock m_foreignLock;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_FWDDECL
#include <Modloader/app/structs/IThreadPoolWorkItem__Array.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolWorkQueue_WorkStealingQueue__Fields_FWDDECL)
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolWorkQueue_WorkStealingQueue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
