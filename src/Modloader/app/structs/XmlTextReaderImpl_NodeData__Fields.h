#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReaderImpl_NodeData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReaderImpl_NodeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_NodeData__Fields_DEFINED)
#include <Modloader/app/structs/LineInfo.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#if defined(IL2CPP_STRUCT_XmlNodeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LineInfo_DEFINED)
#define IL2CPP_STRUCT_XmlTextReaderImpl_NodeData__Fields_DEFINED
struct String;
struct Char__Array;
struct XmlTextReaderImpl_NodeData;
struct Object;
struct __declspec(align(8)) XmlTextReaderImpl_NodeData__Fields {
    XmlNodeType__Enum type;

    struct String* localName;
    struct String* prefix;
    struct String* ns;
    struct String* nameWPrefix;
    struct String* value;
    struct Char__Array* chars;
    int32_t valueStartPos;
    int32_t valueLength;
    struct LineInfo lineInfo;
    struct LineInfo lineInfo2;
    uint16_t quoteChar;
    int32_t depth;
    bool isEmptyOrDefault;
    int32_t entityId;
    bool xmlContextPushed;
    struct XmlTextReaderImpl_NodeData* nextAttrValueChunk;
    struct Object* schemaType;
    struct Object* typedValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_NodeData__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReaderImpl_NodeData__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData.h>
#endif
#undef IL2CPP_STRUCT_XmlTextReaderImpl_NodeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_NodeData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReaderImpl_NodeData__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
