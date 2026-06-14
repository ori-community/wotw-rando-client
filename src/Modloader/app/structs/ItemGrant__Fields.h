#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ItemGrant__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ItemGrant__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemGrant__Fields_DEFINED)
#define IL2CPP_STRUCT_ItemGrant__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_String_;
struct List_1_System_String_;
struct __declspec(align(8)) ItemGrant__Fields {
    struct String* Annotation;
    struct String* CharacterId;
    struct Dictionary_2_System_String_System_String_* Data;
    struct String* ItemId;
    struct List_1_System_String_* KeysToRemove;
    struct String* PlayFabId;
};
#endif
#if !defined(IL2CPP_STRUCT_ItemGrant__Fields_FWDDECL)
#define IL2CPP_STRUCT_ItemGrant__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ItemGrant__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemGrant__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ItemGrant__Fields_FWDDECL)
#include <Modloader/app/structs/ItemGrant__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ItemGrant__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
