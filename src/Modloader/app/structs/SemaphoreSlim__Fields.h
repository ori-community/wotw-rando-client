#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SemaphoreSlim__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SemaphoreSlim__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim__Fields_DEFINED)
#define IL2CPP_STRUCT_SemaphoreSlim__Fields_DEFINED
struct Object;
struct ManualResetEvent;
struct SemaphoreSlim_TaskNode;
struct __declspec(align(8)) SemaphoreSlim__Fields {
    int32_t m_currentCount;
    int32_t m_maxCount;
    int32_t m_waitCount;
    struct Object* m_lockObj;
    struct ManualResetEvent* m_waitHandle;
    struct SemaphoreSlim_TaskNode* m_asyncHead;
    struct SemaphoreSlim_TaskNode* m_asyncTail;
};
#endif
#if !defined(IL2CPP_STRUCT_SemaphoreSlim__Fields_FWDDECL)
#define IL2CPP_STRUCT_SemaphoreSlim__Fields_FWDDECL
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SemaphoreSlim_TaskNode.h>
#endif
#undef IL2CPP_STRUCT_SemaphoreSlim__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SemaphoreSlim__Fields_FWDDECL)
#include <Modloader/app/structs/SemaphoreSlim__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SemaphoreSlim__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
