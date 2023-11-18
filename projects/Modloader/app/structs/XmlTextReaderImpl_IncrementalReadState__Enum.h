#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_DEFINED
enum class XmlTextReaderImpl_IncrementalReadState__Enum : int32_t {
    Text = 0x00000000,
    StartTag = 0x00000001,
    PI = 0x00000002,
    CDATA = 0x00000003,
    Comment = 0x00000004,
    Attributes = 0x00000005,
    AttributeValue = 0x00000006,
    ReadData = 0x00000007,
    EndElement = 0x00000008,
    End = 0x00000009,
    ReadValueChunk_OnCachedValue = 0x0000000a,
    ReadValueChunk_OnPartialValue = 0x0000000b,
    ReadContentAsBinary_OnCachedValue = 0x0000000c,
    ReadContentAsBinary_OnPartialValue = 0x0000000d,
    ReadContentAsBinary_End = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReaderImpl_IncrementalReadState__Enum_FWDDECL)
#include <Modloader/app/structs/XmlTextReaderImpl_IncrementalReadState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReaderImpl_IncrementalReadState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
