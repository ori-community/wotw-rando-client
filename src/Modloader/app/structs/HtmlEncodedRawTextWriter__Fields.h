#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_DEFINED)
#include <Modloader/app/structs/AttributeProperties__Enum.h>
#include <Modloader/app/structs/ElementProperties__Enum.h>
#include <Modloader/app/structs/XmlEncodedRawTextWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_DEFINED) && defined(IL2CPP_STRUCT_ElementProperties__Enum_DEFINED) && defined(IL2CPP_STRUCT_AttributeProperties__Enum_DEFINED)
#define IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_DEFINED
struct ByteStack;
struct Byte__Array;
struct String;
struct HtmlEncodedRawTextWriter__Fields {
    struct XmlEncodedRawTextWriter__Fields _;
    struct ByteStack* elementScope;
    ElementProperties__Enum currentElementProperties;

    AttributeProperties__Enum currentAttributeProperties;

    bool endsWithAmpersand;
    struct Byte__Array* uriEscapingBuffer;
    struct String* mediaType;
    bool doNotEscapeUriAttributes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_FWDDECL
#include <Modloader/app/structs/ByteStack.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HtmlEncodedRawTextWriter__Fields_FWDDECL)
#include <Modloader/app/structs/HtmlEncodedRawTextWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HtmlEncodedRawTextWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
