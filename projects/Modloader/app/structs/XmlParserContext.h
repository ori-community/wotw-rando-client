#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlParserContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlParserContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlParserContext_DEFINED)
#include <Modloader/app/structs/XmlParserContext__Fields.h>
#if defined(IL2CPP_STRUCT_XmlParserContext__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlParserContext_DEFINED
struct XmlParserContext__Class;
struct XmlParserContext {
    struct XmlParserContext__Class* klass;
    MonitorData* monitor;
    struct XmlParserContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlParserContext_FWDDECL)
#define IL2CPP_STRUCT_XmlParserContext_FWDDECL
#include <Modloader/app/structs/XmlParserContext__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlParserContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlParserContext_DEFINED) && !defined(IL2CPP_STRUCT_XmlParserContext_FWDDECL)
#include <Modloader/app/structs/XmlParserContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlParserContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
