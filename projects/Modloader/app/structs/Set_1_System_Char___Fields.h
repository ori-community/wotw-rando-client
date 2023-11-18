#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Set_1_System_Char___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Set_1_System_Char___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Set_1_System_Char___Fields_DEFINED)
#define IL2CPP_STRUCT_Set_1_System_Char___Fields_DEFINED
struct Int32__Array;
struct Set_1_TElement_Slot_System_Char___Array;
struct IEqualityComparer_1_System_Char_;
struct __declspec(align(8)) Set_1_System_Char___Fields {
    struct Int32__Array* buckets;
    struct Set_1_TElement_Slot_System_Char___Array* slots;
    int32_t count;
    int32_t freeList;
    struct IEqualityComparer_1_System_Char_* comparer;
};
#endif
#if !defined(IL2CPP_STRUCT_Set_1_System_Char___Fields_FWDDECL)
#define IL2CPP_STRUCT_Set_1_System_Char___Fields_FWDDECL
#include <Modloader/app/structs/IEqualityComparer_1_System_Char_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Set_1_TElement_Slot_System_Char___Array.h>
#endif
#undef IL2CPP_STRUCT_Set_1_System_Char___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Set_1_System_Char___Fields_DEFINED) && !defined(IL2CPP_STRUCT_Set_1_System_Char___Fields_FWDDECL)
#include <Modloader/app/structs/Set_1_System_Char___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Set_1_System_Char___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
