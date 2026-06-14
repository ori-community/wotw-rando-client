#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConcurrentQueue_1_T_Segment_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConcurrentQueue_1_T_Segment_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConcurrentQueue_1_T_Segment_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/PaddedHeadAndTail.h>
#if defined(IL2CPP_STRUCT_PaddedHeadAndTail_DEFINED)
#define IL2CPP_STRUCT_ConcurrentQueue_1_T_Segment_System_Object___Fields_DEFINED
struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array;
struct ConcurrentQueue_1_T_Segment_System_Object_;
struct __declspec(align(8)) ConcurrentQueue_1_T_Segment_System_Object___Fields {
    struct ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array* _slots;
    int32_t _slotsMask;
    struct PaddedHeadAndTail _headAndTail;
    bool _preservedForObservation;
    bool _frozenForEnqueues;
    struct ConcurrentQueue_1_T_Segment_System_Object_* _nextSegment;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConcurrentQueue_1_T_Segment_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_ConcurrentQueue_1_T_Segment_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_System_Object_.h>
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array.h>
#endif
#undef IL2CPP_STRUCT_ConcurrentQueue_1_T_Segment_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConcurrentQueue_1_T_Segment_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConcurrentQueue_1_T_Segment_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
