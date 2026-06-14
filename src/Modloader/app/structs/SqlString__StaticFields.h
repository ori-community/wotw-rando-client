#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlString__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlString__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlString__StaticFields_DEFINED)
#include <Modloader/app/structs/CompareOptions__Enum.h>
#include <Modloader/app/structs/SqlCompareOptions__Enum.h>
#include <Modloader/app/structs/SqlString.h>
#if defined(IL2CPP_STRUCT_SqlString_DEFINED) && defined(IL2CPP_STRUCT_SqlCompareOptions__Enum_DEFINED) && defined(IL2CPP_STRUCT_CompareOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_SqlString__StaticFields_DEFINED
struct UnicodeEncoding;
struct SqlString__StaticFields {
    struct SqlString Null;
    struct UnicodeEncoding* s_unicodeEncoding;
    int32_t IgnoreCase;
    int32_t IgnoreWidth;
    int32_t IgnoreNonSpace;
    int32_t IgnoreKanaType;
    int32_t BinarySort;
    int32_t BinarySort2;
    SqlCompareOptions__Enum s_iDefaultFlag;

    CompareOptions__Enum s_iValidCompareOptionMask;

    SqlCompareOptions__Enum s_iValidSqlCompareOptionMask;

    int32_t s_lcidUSEnglish;
    int32_t s_lcidBinary;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlString__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SqlString__StaticFields_FWDDECL
#include <Modloader/app/structs/UnicodeEncoding.h>
#endif
#undef IL2CPP_STRUCT_SqlString__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlString__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SqlString__StaticFields_FWDDECL)
#include <Modloader/app/structs/SqlString__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlString__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
