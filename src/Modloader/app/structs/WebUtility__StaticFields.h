#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebUtility__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtility__StaticFields_DEFINED)
#include <Modloader/app/structs/UnicodeDecodingConformance__Enum.h>
#include <Modloader/app/structs/UnicodeEncodingConformance__Enum.h>
#if defined(IL2CPP_STRUCT_UnicodeDecodingConformance__Enum_DEFINED) && defined(IL2CPP_STRUCT_UnicodeEncodingConformance__Enum_DEFINED)
#define IL2CPP_STRUCT_WebUtility__StaticFields_DEFINED
struct Char__Array;
struct WebUtility__StaticFields {
    struct Char__Array* _htmlEntityEndingChars;
    UnicodeDecodingConformance__Enum _htmlDecodeConformance;

    UnicodeEncodingConformance__Enum _htmlEncodeConformance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebUtility__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_WebUtility__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#endif
#undef IL2CPP_STRUCT_WebUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtility__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_WebUtility__StaticFields_FWDDECL)
#include <Modloader/app/structs/WebUtility__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebUtility__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
