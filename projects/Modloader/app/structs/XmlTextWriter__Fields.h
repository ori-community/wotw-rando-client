#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter__Fields_DEFINED)
#include <Modloader/app/structs/Formatting__Enum.h>
#include <Modloader/app/structs/XmlCharType.h>
#include <Modloader/app/structs/XmlTextWriter_SpecialAttr__Enum.h>
#include <Modloader/app/structs/XmlTextWriter_State__Enum.h>
#include <Modloader/app/structs/XmlTextWriter_Token__Enum.h>
#include <Modloader/app/structs/XmlWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlWriter__Fields_DEFINED) && defined(IL2CPP_STRUCT_Formatting__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlTextWriter_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlTextWriter_Token__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlTextWriter_SpecialAttr__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_XmlTextWriter__Fields_DEFINED
struct TextWriter;
struct XmlTextEncoder;
struct Encoding;
struct XmlTextWriter_TagInfo__Array;
struct XmlTextWriter_State__Enum__Array;
struct XmlTextWriterBase64Encoder;
struct String;
struct XmlTextWriter_Namespace__Array;
struct Dictionary_2_System_String_System_Int32_;
struct XmlTextWriter__Fields {
    struct XmlWriter__Fields _;
    struct TextWriter* textWriter;
    struct XmlTextEncoder* xmlEncoder;
    struct Encoding* encoding;
    Formatting__Enum formatting;

    bool indented;
    int32_t indentation;
    uint16_t indentChar;
    struct XmlTextWriter_TagInfo__Array* stack;
    int32_t top;
    struct XmlTextWriter_State__Enum__Array* stateTable;
    XmlTextWriter_State__Enum currentState;

    XmlTextWriter_Token__Enum lastToken;

    struct XmlTextWriterBase64Encoder* base64Encoder;
    uint16_t quoteChar;
    uint16_t curQuoteChar;
    bool namespaces;
    XmlTextWriter_SpecialAttr__Enum specialAttr;

    struct String* prefixForXmlNs;
    bool flush;
    struct XmlTextWriter_Namespace__Array* nsStack;
    int32_t nsTop;
    struct Dictionary_2_System_String_System_Int32_* nsHashtable;
    bool useNsHashtable;
    struct XmlCharType xmlCharType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTextWriter__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/XmlTextEncoder.h>
#include <Modloader/app/structs/XmlTextWriterBase64Encoder.h>
#include <Modloader/app/structs/XmlTextWriter_Namespace__Array.h>
#include <Modloader/app/structs/XmlTextWriter_State__Enum__Array.h>
#include <Modloader/app/structs/XmlTextWriter_TagInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextWriter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTextWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
