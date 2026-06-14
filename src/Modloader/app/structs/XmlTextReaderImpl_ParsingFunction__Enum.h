#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_DEFINED
enum class XmlTextReaderImpl_ParsingFunction__Enum : int32_t {
    ElementContent = 0x00000000,
    NoData = 0x00000001,
    OpenUrl = 0x00000002,
    SwitchToInteractive = 0x00000003,
    SwitchToInteractiveXmlDecl = 0x00000004,
    DocumentContent = 0x00000005,
    MoveToElementContent = 0x00000006,
    PopElementContext = 0x00000007,
    PopEmptyElementContext = 0x00000008,
    ResetAttributesRootLevel = 0x00000009,
    Error = 0x0000000a,
    Eof = 0x0000000b,
    ReaderClosed = 0x0000000c,
    EntityReference = 0x0000000d,
    InIncrementalRead = 0x0000000e,
    FragmentAttribute = 0x0000000f,
    ReportEndEntity = 0x00000010,
    AfterResolveEntityInContent = 0x00000011,
    AfterResolveEmptyEntityInContent = 0x00000012,
    XmlDeclarationFragment = 0x00000013,
    GoToEof = 0x00000014,
    PartialTextValue = 0x00000015,
    InReadAttributeValue = 0x00000016,
    InReadValueChunk = 0x00000017,
    InReadContentAsBinary = 0x00000018,
    InReadElementContentAsBinary = 0x00000019,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingFunction__Enum_FWDDECL)
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingFunction__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingFunction__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
