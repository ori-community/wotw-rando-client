#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HtmlEncodedRawTextWriterIndent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HtmlEncodedRawTextWriterIndent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HtmlEncodedRawTextWriterIndent__Fields_DEFINED)
#include <Modloader/app/structs/HtmlEncodedRawTextWriter__Fields.h>
#if defined(IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_HtmlEncodedRawTextWriterIndent__Fields_DEFINED
struct String;
struct HtmlEncodedRawTextWriterIndent__Fields {
    struct HtmlEncodedRawTextWriter__Fields _;
    int32_t indentLevel;
    int32_t endBlockPos;
    struct String* indentChars;
    bool newLineOnAttributes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HtmlEncodedRawTextWriterIndent__Fields_FWDDECL)
#define IL2CPP_STRUCT_HtmlEncodedRawTextWriterIndent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HtmlEncodedRawTextWriterIndent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HtmlEncodedRawTextWriterIndent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HtmlEncodedRawTextWriterIndent__Fields_FWDDECL)
#include <Modloader/app/structs/HtmlEncodedRawTextWriterIndent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HtmlEncodedRawTextWriterIndent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
