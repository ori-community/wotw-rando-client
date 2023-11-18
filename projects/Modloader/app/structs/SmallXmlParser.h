#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmallXmlParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmallXmlParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallXmlParser_DEFINED)
#include <Modloader/app/structs/SmallXmlParser__Fields.h>
#if defined(IL2CPP_STRUCT_SmallXmlParser__Fields_DEFINED)
#define IL2CPP_STRUCT_SmallXmlParser_DEFINED
struct SmallXmlParser__Class;
struct SmallXmlParser {
    struct SmallXmlParser__Class* klass;
    MonitorData* monitor;
    struct SmallXmlParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmallXmlParser_FWDDECL)
#define IL2CPP_STRUCT_SmallXmlParser_FWDDECL
#include <Modloader/app/structs/SmallXmlParser__Class.h>
#endif
#undef IL2CPP_STRUCT_SmallXmlParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallXmlParser_DEFINED) && !defined(IL2CPP_STRUCT_SmallXmlParser_FWDDECL)
#include <Modloader/app/structs/SmallXmlParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmallXmlParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
