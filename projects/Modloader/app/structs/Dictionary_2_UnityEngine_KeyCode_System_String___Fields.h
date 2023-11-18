#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dictionary_2_UnityEngine_KeyCode_System_String___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dictionary_2_UnityEngine_KeyCode_System_String___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_UnityEngine_KeyCode_System_String___Fields_DEFINED)
#define IL2CPP_STRUCT_Dictionary_2_UnityEngine_KeyCode_System_String___Fields_DEFINED
struct Int32__Array;
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array;
struct IEqualityComparer_1_UnityEngine_KeyCode_;
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String_;
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String_;
struct Object;
struct __declspec(align(8)) Dictionary_2_UnityEngine_KeyCode_System_String___Fields {
    struct Int32__Array* buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array* entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_KeyCode_* comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String_* keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String_* values;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_Dictionary_2_UnityEngine_KeyCode_System_String___Fields_FWDDECL)
#define IL2CPP_STRUCT_Dictionary_2_UnityEngine_KeyCode_System_String___Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_System_String___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_System_String_.h>
#include <Modloader/app/structs/IEqualityComparer_1_UnityEngine_KeyCode_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Dictionary_2_UnityEngine_KeyCode_System_String___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_UnityEngine_KeyCode_System_String___Fields_DEFINED) && !defined(IL2CPP_STRUCT_Dictionary_2_UnityEngine_KeyCode_System_String___Fields_FWDDECL)
#include <Modloader/app/structs/Dictionary_2_UnityEngine_KeyCode_System_String___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dictionary_2_UnityEngine_KeyCode_System_String___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
