#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Value__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Value__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Value__Fields_DEFINED)
#include <Modloader/app/structs/ValueKind__Enum.h>
#if defined(IL2CPP_STRUCT_ValueKind__Enum_DEFINED)
#define IL2CPP_STRUCT_Value__Fields_DEFINED
struct List_1_Microsoft_Applications_Events_DataModels_Attributes_;
struct String;
struct List_1_List_1_System_Byte_;
struct List_1_List_1_System_String_;
struct List_1_List_1_System_Int64_;
struct List_1_List_1_System_Double_;
struct List_1_List_1_List_1_System_Int64_;
struct __declspec(align(8)) Value__Fields {
    ValueKind__Enum _type_k__BackingField;

    struct List_1_Microsoft_Applications_Events_DataModels_Attributes_* _attributes_k__BackingField;
    struct String* _stringValue_k__BackingField;
    int64_t _longValue_k__BackingField;
    double _doubleValue_k__BackingField;
    struct List_1_List_1_System_Byte_* _guidValue_k__BackingField;
    struct List_1_List_1_System_String_* _stringArray_k__BackingField;
    struct List_1_List_1_System_Int64_* _longArray_k__BackingField;
    struct List_1_List_1_System_Double_* _doubleArray_k__BackingField;
    struct List_1_List_1_List_1_System_Int64_* _guidArray_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Value__Fields_FWDDECL)
#define IL2CPP_STRUCT_Value__Fields_FWDDECL
#include <Modloader/app/structs/List_1_List_1_List_1_System_Int64_.h>
#include <Modloader/app/structs/List_1_List_1_System_Byte_.h>
#include <Modloader/app/structs/List_1_List_1_System_Double_.h>
#include <Modloader/app/structs/List_1_List_1_System_Int64_.h>
#include <Modloader/app/structs/List_1_List_1_System_String_.h>
#include <Modloader/app/structs/List_1_Microsoft_Applications_Events_DataModels_Attributes_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Value__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Value__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Value__Fields_FWDDECL)
#include <Modloader/app/structs/Value__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Value__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
