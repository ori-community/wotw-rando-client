#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextEncoder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextEncoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextEncoder__Fields_DEFINED)
#include <Modloader/app/structs/XmlCharType.h>
#if defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_XmlTextEncoder__Fields_DEFINED
struct TextWriter;
struct StringBuilder;
struct __declspec(align(8)) XmlTextEncoder__Fields {
    struct TextWriter* textWriter;
    bool inAttribute;
    uint16_t quoteChar;
    struct StringBuilder* attrValue;
    bool cacheAttrValue;
    struct XmlCharType xmlCharType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextEncoder__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTextEncoder__Fields_FWDDECL
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/TextWriter.h>
#endif
#undef IL2CPP_STRUCT_XmlTextEncoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextEncoder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextEncoder__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTextEncoder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextEncoder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
