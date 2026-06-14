#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdCachingReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdCachingReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdCachingReader__Fields_DEFINED)
#include <Modloader/app/structs/XsdCachingReader_CachingReaderState__Enum.h>
#if defined(IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdCachingReader__Fields_DEFINED
struct XmlReader;
struct XmlNameTable;
struct ValidatingReaderNodeData__Array;
struct ValidatingReaderNodeData;
struct CachingEventHandler;
struct IXmlLineInfo;
struct __declspec(align(8)) XsdCachingReader__Fields {
    struct XmlReader* coreReader;
    struct XmlNameTable* coreReaderNameTable;
    struct ValidatingReaderNodeData__Array* contentEvents;
    struct ValidatingReaderNodeData__Array* attributeEvents;
    struct ValidatingReaderNodeData* cachedNode;
    XsdCachingReader_CachingReaderState__Enum cacheState;

    int32_t contentIndex;
    int32_t attributeCount;
    bool returnOriginalStringValues;
    struct CachingEventHandler* cacheHandler;
    int32_t currentAttrIndex;
    int32_t currentContentIndex;
    bool readAhead;
    struct IXmlLineInfo* lineInfo;
    struct ValidatingReaderNodeData* textNode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdCachingReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_XsdCachingReader__Fields_FWDDECL
#include <Modloader/app/structs/CachingEventHandler.h>
#include <Modloader/app/structs/IXmlLineInfo.h>
#include <Modloader/app/structs/ValidatingReaderNodeData.h>
#include <Modloader/app/structs/ValidatingReaderNodeData__Array.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlReader.h>
#endif
#undef IL2CPP_STRUCT_XsdCachingReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdCachingReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XsdCachingReader__Fields_FWDDECL)
#include <Modloader/app/structs/XsdCachingReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdCachingReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
