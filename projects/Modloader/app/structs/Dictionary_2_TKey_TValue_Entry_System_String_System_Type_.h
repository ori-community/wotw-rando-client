#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_System_String_System_Type__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_System_String_System_Type__INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_System_String_System_Type__DEFINED)
#define IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_System_String_System_Type__DEFINED
struct String;
struct Type;
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type_ {
    int32_t hashCode;
    int32_t next;
    struct String* key;
    struct Type* value;
};
#endif
#if !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_System_String_System_Type__FWDDECL)
#define IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_System_String_System_Type__FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_System_String_System_Type__INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_System_String_System_Type__DEFINED) && !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_System_String_System_Type__FWDDECL)
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_String_System_Type_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_String_System_Type_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
