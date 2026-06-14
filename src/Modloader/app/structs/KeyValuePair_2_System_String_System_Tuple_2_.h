#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Tuple_2__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Tuple_2__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Tuple_2__DEFINED)
#define IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Tuple_2__DEFINED
struct String;
struct Tuple_2_Guid_String_;
struct KeyValuePair_2_System_String_System_Tuple_2_ {
    struct String* key;
    struct Tuple_2_Guid_String_* value;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Tuple_2__FWDDECL)
#define IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Tuple_2__FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Tuple_2_Guid_String_.h>
#endif
#undef IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Tuple_2__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Tuple_2__DEFINED) && !defined(IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Tuple_2__FWDDECL)
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Tuple_2_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Tuple_2_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
