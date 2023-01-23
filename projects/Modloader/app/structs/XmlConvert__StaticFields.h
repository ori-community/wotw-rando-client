#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlConvert__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlConvert__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlConvert__StaticFields_DEFINED)
#include <Modloader/app/structs/XmlCharType.h>
#if defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_XmlConvert__StaticFields_DEFINED
struct Char__Array;
struct Regex;
struct String__Array;
struct XmlConvert__StaticFields {
    struct XmlCharType xmlCharType;
    struct Char__Array* crt;
    int32_t c_EncodedCharLength;
    struct Regex* c_EncodeCharPattern;
    struct Regex* c_DecodeCharPattern;
    struct String__Array* s_allDateTimeFormats;
    struct Char__Array* WhitespaceChars;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlConvert__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XmlConvert__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlConvert__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlConvert__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XmlConvert__StaticFields_FWDDECL)
#include <Modloader/app/structs/XmlConvert__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlConvert__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
