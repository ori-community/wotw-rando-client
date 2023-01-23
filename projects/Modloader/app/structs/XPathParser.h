#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathParser_DEFINED)
#include <Modloader/app/structs/XPathParser__Fields.h>
#if defined(IL2CPP_STRUCT_XPathParser__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathParser_DEFINED
struct XPathParser__Class;
struct XPathParser {
    struct XPathParser__Class* klass;
    MonitorData* monitor;
    struct XPathParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathParser_FWDDECL)
#define IL2CPP_STRUCT_XPathParser_FWDDECL
#include <Modloader/app/structs/XPathParser__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathParser_DEFINED) && !defined(IL2CPP_STRUCT_XPathParser_FWDDECL)
#include <Modloader/app/structs/XPathParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
