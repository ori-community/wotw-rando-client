#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields_DEFINED)
#define IL2CPP_STRUCT_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields_DEFINED
struct Int32__Array;
struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array;
struct IEqualityComparer_1_System_Type_;
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType_;
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType_;
struct Object;
struct __declspec(align(8)) Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields {
    struct Int32__Array* buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array* entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_* comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType_* keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType_* values;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields_FWDDECL)
#define IL2CPP_STRUCT_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Type_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields_DEFINED) && !defined(IL2CPP_STRUCT_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields_FWDDECL)
#include <Modloader/app/structs/Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
