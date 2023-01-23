#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmallXmlParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmallXmlParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallXmlParser__Fields_DEFINED)
#define IL2CPP_STRUCT_SmallXmlParser__Fields_DEFINED
struct SmallXmlParser_IContentHandler;
struct TextReader;
struct Stack;
struct String;
struct StringBuilder;
struct Char__Array;
struct SmallXmlParser_AttrListImpl;
struct __declspec(align(8)) SmallXmlParser__Fields {
    struct SmallXmlParser_IContentHandler* handler;
    struct TextReader* reader;
    struct Stack* elementNames;
    struct Stack* xmlSpaces;
    struct String* xmlSpace;
    struct StringBuilder* buffer;
    struct Char__Array* nameBuffer;
    bool isWhitespace;
    struct SmallXmlParser_AttrListImpl* attributes;
    int32_t line;
    int32_t column;
    bool resetColumn;
};
#endif
#if !defined(IL2CPP_STRUCT_SmallXmlParser__Fields_FWDDECL)
#define IL2CPP_STRUCT_SmallXmlParser__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/SmallXmlParser_AttrListImpl.h>
#include <Modloader/app/structs/SmallXmlParser_IContentHandler.h>
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/TextReader.h>
#endif
#undef IL2CPP_STRUCT_SmallXmlParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallXmlParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SmallXmlParser__Fields_FWDDECL)
#include <Modloader/app/structs/SmallXmlParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmallXmlParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
