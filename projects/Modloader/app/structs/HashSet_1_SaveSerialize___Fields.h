#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HashSet_1_SaveSerialize___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HashSet_1_SaveSerialize___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashSet_1_SaveSerialize___Fields_DEFINED)
#define IL2CPP_STRUCT_HashSet_1_SaveSerialize___Fields_DEFINED
struct Int32__Array;
struct HashSet_1_T_Slot_SaveSerialize___Array;
struct IEqualityComparer_1_SaveSerialize_;
struct SerializationInfo;
struct __declspec(align(8)) HashSet_1_SaveSerialize___Fields {
    struct Int32__Array* _buckets;
    struct HashSet_1_T_Slot_SaveSerialize___Array* _slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_SaveSerialize_* _comparer;
    int32_t _version;
    struct SerializationInfo* _siInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_HashSet_1_SaveSerialize___Fields_FWDDECL)
#define IL2CPP_STRUCT_HashSet_1_SaveSerialize___Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_T_Slot_SaveSerialize___Array.h>
#include <Modloader/app/structs/IEqualityComparer_1_SaveSerialize_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SerializationInfo.h>
#endif
#undef IL2CPP_STRUCT_HashSet_1_SaveSerialize___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HashSet_1_SaveSerialize___Fields_DEFINED) && !defined(IL2CPP_STRUCT_HashSet_1_SaveSerialize___Fields_FWDDECL)
#include <Modloader/app/structs/HashSet_1_SaveSerialize___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HashSet_1_SaveSerialize___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
