#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastHashSet_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastHashSet_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastHashSet_1_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_FastHashSet_1_System_Object___Fields_DEFINED
struct IEqualityComparer_1_System_Object_;
struct Int32__Array;
struct FastHashSet_1_T_TNode_System_Object___Array;
struct Object__Array;
struct __declspec(align(8)) FastHashSet_1_System_Object___Fields {
    int32_t currentIndexIntoBucketsSizeArray;
    int32_t bucketsModSize;
    int32_t resizeBucketsCountThreshold;
    int32_t count;
    int32_t nextBlankIndex;
    int32_t firstBlankAtEndIndex;
    struct IEqualityComparer_1_System_Object_* comparer;
    struct Int32__Array* buckets;
    struct FastHashSet_1_T_TNode_System_Object___Array* slots;
    struct Object__Array* noHashArray;
};
#endif
#if !defined(IL2CPP_STRUCT_FastHashSet_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_FastHashSet_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/FastHashSet_1_T_TNode_System_Object___Array.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_FastHashSet_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastHashSet_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_FastHashSet_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/FastHashSet_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastHashSet_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
