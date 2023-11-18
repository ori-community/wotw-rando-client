#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Link_Link__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Link_Link__INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Link_Link__DEFINED)
#define IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Link_Link__DEFINED
struct Link;
struct Dictionary_2_TKey_TValue_Entry_Link_Link_ {
    int32_t hashCode;
    int32_t next;
    struct Link* key;
    struct Link* value;
};
#endif
#if !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Link_Link__FWDDECL)
#define IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Link_Link__FWDDECL
#include <Modloader/app/structs/Link.h>
#endif
#undef IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Link_Link__INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Link_Link__DEFINED) && !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Link_Link__FWDDECL)
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_Link_Link_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_Link_Link_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
