#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlTextParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlTextParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlTextParser_DEFINED)
#define IL2CPP_STRUCT_IXmlTextParser_DEFINED
struct IXmlTextParser__Class;
struct IXmlTextParser {
    struct IXmlTextParser__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlTextParser_FWDDECL)
#define IL2CPP_STRUCT_IXmlTextParser_FWDDECL
#include <Modloader/app/structs/IXmlTextParser__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlTextParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlTextParser_DEFINED) && !defined(IL2CPP_STRUCT_IXmlTextParser_FWDDECL)
#include <Modloader/app/structs/IXmlTextParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlTextParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
