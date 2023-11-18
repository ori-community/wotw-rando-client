#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Data_Index__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Data_Index__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Data_Index__DEFINED)
#define IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Data_Index__DEFINED
struct String;
struct Index;
struct KeyValuePair_2_System_String_System_Data_Index_ {
    struct String* key;
    struct Index* value;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Data_Index__FWDDECL)
#define IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Data_Index__FWDDECL
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Data_Index__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Data_Index__DEFINED) && !defined(IL2CPP_STRUCT_KeyValuePair_2_System_String_System_Data_Index__FWDDECL)
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Data_Index_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Data_Index_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
