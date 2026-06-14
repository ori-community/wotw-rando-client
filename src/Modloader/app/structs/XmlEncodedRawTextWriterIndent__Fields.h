#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEncodedRawTextWriterIndent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEncodedRawTextWriterIndent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEncodedRawTextWriterIndent__Fields_DEFINED)
#include <Modloader/app/structs/ConformanceLevel__Enum.h>
#include <Modloader/app/structs/XmlEncodedRawTextWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_DEFINED) && defined(IL2CPP_STRUCT_ConformanceLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlEncodedRawTextWriterIndent__Fields_DEFINED
struct String;
struct BitStack;
struct XmlEncodedRawTextWriterIndent__Fields {
    struct XmlEncodedRawTextWriter__Fields _;
    int32_t indentLevel;
    bool newLineOnAttributes;
    struct String* indentChars;
    bool mixedContent;
    struct BitStack* mixedContentStack;
    ConformanceLevel__Enum conformanceLevel;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlEncodedRawTextWriterIndent__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlEncodedRawTextWriterIndent__Fields_FWDDECL
#include <Modloader/app/structs/BitStack.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlEncodedRawTextWriterIndent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEncodedRawTextWriterIndent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlEncodedRawTextWriterIndent__Fields_FWDDECL)
#include <Modloader/app/structs/XmlEncodedRawTextWriterIndent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEncodedRawTextWriterIndent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
