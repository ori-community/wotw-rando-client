#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields_DEFINED)
#define IL2CPP_STRUCT_XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields_DEFINED
struct Int32__Array;
struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_WeakReference___Array;
struct XHashtable_1_TValue_ExtractKeyDelegate_System_WeakReference_;
struct __declspec(align(8)) XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields {
    struct Int32__Array* buckets;
    struct XHashtable_1_TValue_XHashtableState_TValue_Entry_System_WeakReference___Array* entries;
    int32_t numEntries;
    struct XHashtable_1_TValue_ExtractKeyDelegate_System_WeakReference_* extractKey;
};
#endif
#if !defined(IL2CPP_STRUCT_XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields_FWDDECL)
#define IL2CPP_STRUCT_XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/XHashtable_1_TValue_ExtractKeyDelegate_System_WeakReference_.h>
#include <Modloader/app/structs/XHashtable_1_TValue_XHashtableState_TValue_Entry_System_WeakReference___Array.h>
#endif
#undef IL2CPP_STRUCT_XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields_DEFINED) && !defined(IL2CPP_STRUCT_XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields_FWDDECL)
#include <Modloader/app/structs/XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XHashtable_1_TValue_XHashtableState_System_WeakReference___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
