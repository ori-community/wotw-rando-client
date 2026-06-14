#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeaderInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeaderInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderInfo_1__Fields_DEFINED)
#include <Modloader/app/structs/HttpHeaderKind__Enum.h>
#if defined(IL2CPP_STRUCT_HttpHeaderKind__Enum_DEFINED)
#define IL2CPP_STRUCT_HeaderInfo_1__Fields_DEFINED
struct String;
struct Func_2_Object_String_;
struct __declspec(align(8)) HeaderInfo_1__Fields {
    bool AllowsMany;
    HttpHeaderKind__Enum HeaderKind;

    struct String* Name;
    struct Func_2_Object_String_* _CustomToString_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeaderInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_HeaderInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/Func_2_Object_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HeaderInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HeaderInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/HeaderInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeaderInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
