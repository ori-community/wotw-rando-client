#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReaderImpl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReaderImpl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl__Fields_DEFINED)
#include <Modloader/app/structs/DtdProcessing__Enum.h>
#include <Modloader/app/structs/EntityHandling__Enum.h>
#include <Modloader/app/structs/LineInfo.h>
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/WhitespaceHandling__Enum.h>
#include <Modloader/app/structs/XmlCharType.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl_IncrementalReadState__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingFunction__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingMode__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingState.h>
#if defined(IL2CPP_STRUCT_XmlCharType_DEFINED) && defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_DEFINED) && defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_DEFINED) && defined(IL2CPP_STRUCT_WhitespaceHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_DtdProcessing__Enum_DEFINED) && defined(IL2CPP_STRUCT_EntityHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlNodeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_DEFINED) && defined(IL2CPP_STRUCT_LineInfo_DEFINED) && defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_ReadState__Enum_1_DEFINED)
#define IL2CPP_STRUCT_XmlTextReaderImpl__Fields_DEFINED
struct XmlTextReaderImpl_LaterInitParam;
struct XmlTextReaderImpl_NodeData__Array;
struct XmlTextReaderImpl_NodeData;
struct XmlNameTable;
struct XmlResolver;
struct String;
struct XmlNamespaceManager;
struct XmlTextReaderImpl_XmlContext;
struct XmlTextReaderImpl_ParsingState__Array;
struct Encoding;
struct IDtdInfo;
struct XmlParserContext;
struct IncrementalReadDecoder;
struct IValidationEventHandling;
struct XmlTextReaderImpl_OnDefaultAttributeUseDelegate;
struct StringBuilder;
struct IDtdEntityInfo;
struct Dictionary_2_System_Xml_IDtdEntityInfo_System_Xml_IDtdEntityInfo_;
struct XmlReader;
struct Task_1_System_Tuple_4_;
struct __declspec(align(8)) XmlTextReaderImpl__Fields {
    bool useAsync;
    struct XmlTextReaderImpl_LaterInitParam* laterInitParam;
    struct XmlCharType xmlCharType;
    struct XmlTextReaderImpl_ParsingState ps;
    XmlTextReaderImpl_ParsingFunction__Enum parsingFunction;

    XmlTextReaderImpl_ParsingFunction__Enum nextParsingFunction;

    XmlTextReaderImpl_ParsingFunction__Enum nextNextParsingFunction;

    struct XmlTextReaderImpl_NodeData__Array* nodes;
    struct XmlTextReaderImpl_NodeData* curNode;
    int32_t index;
    int32_t curAttrIndex;
    int32_t attrCount;
    int32_t attrHashtable;
    int32_t attrDuplWalkCount;
    bool attrNeedNamespaceLookup;
    bool fullAttrCleanup;
    struct XmlTextReaderImpl_NodeData__Array* attrDuplSortingArray;
    struct XmlNameTable* nameTable;
    bool nameTableFromSettings;
    struct XmlResolver* xmlResolver;
    struct String* url;
    bool normalize;
    bool supportNamespaces;
    WhitespaceHandling__Enum whitespaceHandling;

    DtdProcessing__Enum dtdProcessing;

    EntityHandling__Enum entityHandling;

    bool ignorePIs;
    bool ignoreComments;
    bool checkCharacters;
    int32_t lineNumberOffset;
    int32_t linePositionOffset;
    bool closeInput;
    int64_t maxCharactersInDocument;
    int64_t maxCharactersFromEntities;
    bool v1Compat;
    struct XmlNamespaceManager* namespaceManager;
    struct String* lastPrefix;
    struct XmlTextReaderImpl_XmlContext* xmlContext;
    struct XmlTextReaderImpl_ParsingState__Array* parsingStatesStack;
    int32_t parsingStatesStackTop;
    struct String* reportedBaseUri;
    struct Encoding* reportedEncoding;
    struct IDtdInfo* dtdInfo;
    XmlNodeType__Enum fragmentType;

    struct XmlParserContext* fragmentParserContext;
    bool fragment;
    struct IncrementalReadDecoder* incReadDecoder;
    XmlTextReaderImpl_IncrementalReadState__Enum incReadState;

    struct LineInfo incReadLineInfo;
    int32_t incReadDepth;
    int32_t incReadLeftStartPos;
    int32_t incReadLeftEndPos;
    int32_t attributeValueBaseEntityId;
    bool emptyEntityInAttributeResolved;
    struct IValidationEventHandling* validationEventHandling;
    struct XmlTextReaderImpl_OnDefaultAttributeUseDelegate* onDefaultAttributeUse;
    bool validatingReaderCompatFlag;
    bool addDefaultAttributesAndNormalize;
    struct StringBuilder* stringBuilder;
    bool rootElementParsed;
    bool standalone;
    int32_t nextEntityId;
    XmlTextReaderImpl_ParsingMode__Enum parsingMode;

    ReadState__Enum_1 readState;

    struct IDtdEntityInfo* lastEntity;
    bool afterResetState;
    int32_t documentStartBytePos;
    int32_t readValueOffset;
    int64_t charactersInDocument;
    int64_t charactersFromEntities;
    struct Dictionary_2_System_Xml_IDtdEntityInfo_System_Xml_IDtdEntityInfo_* currentEntities;
    bool disableUndeclaredEntityCheck;
    struct XmlReader* outerReader;
    bool xmlResolverIsSet;
    struct String* Xml;
    struct String* XmlNs;
    struct Task_1_System_Tuple_4_* parseText_dummyTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReaderImpl__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Xml_IDtdEntityInfo_System_Xml_IDtdEntityInfo_.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/IDtdEntityInfo.h>
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/IValidationEventHandling.h>
#include <Modloader/app/structs/IncrementalReadDecoder.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Task_1_System_Tuple_4_.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlParserContext.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlTextReaderImpl_LaterInitParam.h>
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData.h>
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData__Array.h>
#include <Modloader/app/structs/XmlTextReaderImpl_OnDefaultAttributeUseDelegate.h>
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingState__Array.h>
#include <Modloader/app/structs/XmlTextReaderImpl_XmlContext.h>
#endif
#undef IL2CPP_STRUCT_XmlTextReaderImpl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReaderImpl__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTextReaderImpl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReaderImpl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
