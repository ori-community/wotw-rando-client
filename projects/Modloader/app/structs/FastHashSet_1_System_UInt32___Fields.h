#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastHashSet_1_System_UInt32___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastHashSet_1_System_UInt32___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastHashSet_1_System_UInt32___Fields_DEFINED)
#define IL2CPP_STRUCT_FastHashSet_1_System_UInt32___Fields_DEFINED
struct IEqualityComparer_1_System_UInt32_;
struct Int32__Array;
struct FastHashSet_1_T_TNode_System_UInt32___Array;
struct UInt32__Array;
struct __declspec(align(8)) FastHashSet_1_System_UInt32___Fields {
    int32_t currentIndexIntoBucketsSizeArray;
    int32_t bucketsModSize;
    int32_t resizeBucketsCountThreshold;
    int32_t count;
    int32_t nextBlankIndex;
    int32_t firstBlankAtEndIndex;
    struct IEqualityComparer_1_System_UInt32_* comparer;
    struct Int32__Array* buckets;
    struct FastHashSet_1_T_TNode_System_UInt32___Array* slots;
    struct UInt32__Array* noHashArray;
};
#endif
#if !defined(IL2CPP_STRUCT_FastHashSet_1_System_UInt32___Fields_FWDDECL)
#define IL2CPP_STRUCT_FastHashSet_1_System_UInt32___Fields_FWDDECL
#include <Modloader/app/structs/FastHashSet_1_T_TNode_System_UInt32___Array.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_UInt32_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_FastHashSet_1_System_UInt32___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastHashSet_1_System_UInt32___Fields_DEFINED) && !defined(IL2CPP_STRUCT_FastHashSet_1_System_UInt32___Fields_FWDDECL)
#include <Modloader/app/structs/FastHashSet_1_System_UInt32___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastHashSet_1_System_UInt32___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
