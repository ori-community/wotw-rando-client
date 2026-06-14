#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LargeArrayBuilder_1_System_Object__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LargeArrayBuilder_1_System_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_LargeArrayBuilder_1_System_Object__DEFINED)
#include <Modloader/app/structs/ArrayBuilder_1_System_Object__1.h>
#if defined(IL2CPP_STRUCT_ArrayBuilder_1_System_Object__1_DEFINED)
#define IL2CPP_STRUCT_LargeArrayBuilder_1_System_Object__DEFINED
struct Object__Array;
struct LargeArrayBuilder_1_System_Object_ {
    int32_t _maxCapacity;
    struct Object__Array* _first;
    struct ArrayBuilder_1_System_Object__1 _buffers;
    struct Object__Array* _current;
    int32_t _index;
    int32_t _count;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LargeArrayBuilder_1_System_Object__FWDDECL)
#define IL2CPP_STRUCT_LargeArrayBuilder_1_System_Object__FWDDECL
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_LargeArrayBuilder_1_System_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_LargeArrayBuilder_1_System_Object__DEFINED) && !defined(IL2CPP_STRUCT_LargeArrayBuilder_1_System_Object__FWDDECL)
#include <Modloader/app/structs/LargeArrayBuilder_1_System_Object_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LargeArrayBuilder_1_System_Object_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
