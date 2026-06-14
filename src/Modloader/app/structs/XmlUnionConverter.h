#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlUnionConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlUnionConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUnionConverter_DEFINED)
#include <Modloader/app/structs/XmlUnionConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlUnionConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlUnionConverter_DEFINED
struct XmlUnionConverter__Class;
struct XmlUnionConverter {
    struct XmlUnionConverter__Class* klass;
    MonitorData* monitor;
    struct XmlUnionConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlUnionConverter_FWDDECL)
#define IL2CPP_STRUCT_XmlUnionConverter_FWDDECL
#include <Modloader/app/structs/XmlUnionConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlUnionConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUnionConverter_DEFINED) && !defined(IL2CPP_STRUCT_XmlUnionConverter_FWDDECL)
#include <Modloader/app/structs/XmlUnionConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlUnionConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
