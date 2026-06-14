#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConcurrentQueue_1_System_String___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConcurrentQueue_1_System_String___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConcurrentQueue_1_System_String___Fields_DEFINED)
#define IL2CPP_STRUCT_ConcurrentQueue_1_System_String___Fields_DEFINED
struct Object;
struct ConcurrentQueue_1_T_Segment_System_String_;
struct __declspec(align(8)) ConcurrentQueue_1_System_String___Fields {
    struct Object* _crossSegmentLock;
    struct ConcurrentQueue_1_T_Segment_System_String_* _tail;
    struct ConcurrentQueue_1_T_Segment_System_String_* _head;
};
#endif
#if !defined(IL2CPP_STRUCT_ConcurrentQueue_1_System_String___Fields_FWDDECL)
#define IL2CPP_STRUCT_ConcurrentQueue_1_System_String___Fields_FWDDECL
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_System_String_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ConcurrentQueue_1_System_String___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConcurrentQueue_1_System_String___Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConcurrentQueue_1_System_String___Fields_FWDDECL)
#include <Modloader/app/structs/ConcurrentQueue_1_System_String___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConcurrentQueue_1_System_String___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
