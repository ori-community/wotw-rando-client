#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_DEFINED)
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#if defined(IL2CPP_STRUCT_XmlNodeType__Enum_DEFINED)
#define IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_DEFINED
struct String;
struct AttributePSVIInfo;
struct __declspec(align(8)) ValidatingReaderNodeData__Fields {
    struct String* localName;
    struct String* namespaceUri;
    struct String* prefix;
    struct String* nameWPrefix;
    struct String* rawValue;
    struct String* originalStringValue;
    int32_t depth;
    struct AttributePSVIInfo* attributePSVIInfo;
    XmlNodeType__Enum nodeType;

    int32_t lineNo;
    int32_t linePos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_FWDDECL
#include <Modloader/app/structs/AttributePSVIInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_FWDDECL)
#include <Modloader/app/structs/ValidatingReaderNodeData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidatingReaderNodeData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
