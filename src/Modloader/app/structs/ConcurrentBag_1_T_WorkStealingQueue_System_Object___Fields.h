#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields_DEFINED
struct Object__Array;
struct ConcurrentBag_1_T_WorkStealingQueue_System_Object_;
struct __declspec(align(8)) ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields {
    int32_t _headIndex;
    int32_t _tailIndex;
    struct Object__Array* _array;
    int32_t _mask;
    int32_t _addTakeCount;
    int32_t _stealCount;
    int32_t _currentOp;
    bool _frozen;
    struct ConcurrentBag_1_T_WorkStealingQueue_System_Object_* _nextQueue;
    int32_t _ownerThreadId;
};
#endif
#if !defined(IL2CPP_STRUCT_ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/ConcurrentBag_1_T_WorkStealingQueue_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConcurrentBag_1_T_WorkStealingQueue_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
