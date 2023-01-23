#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HashSet_1_T_Slot_IEntry__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HashSet_1_T_Slot_IEntry__INITIALIZING
#if !defined(IL2CPP_STRUCT_HashSet_1_T_Slot_IEntry__DEFINED)
#define IL2CPP_STRUCT_HashSet_1_T_Slot_IEntry__DEFINED
struct IEntry;
struct HashSet_1_T_Slot_IEntry_ {
    int32_t hashCode;
    int32_t next;
    struct IEntry* value;
};
#endif
#if !defined(IL2CPP_STRUCT_HashSet_1_T_Slot_IEntry__FWDDECL)
#define IL2CPP_STRUCT_HashSet_1_T_Slot_IEntry__FWDDECL
#include <Modloader/app/structs/IEntry.h>
#endif
#undef IL2CPP_STRUCT_HashSet_1_T_Slot_IEntry__INITIALIZING
#if !defined(IL2CPP_STRUCT_HashSet_1_T_Slot_IEntry__DEFINED) && !defined(IL2CPP_STRUCT_HashSet_1_T_Slot_IEntry__FWDDECL)
#include <Modloader/app/structs/HashSet_1_T_Slot_IEntry_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HashSet_1_T_Slot_IEntry_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
