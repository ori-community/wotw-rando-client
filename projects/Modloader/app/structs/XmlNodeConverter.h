#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeConverter_DEFINED)
#include <Modloader/app/structs/XmlNodeConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNodeConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeConverter_DEFINED
struct XmlNodeConverter__Class;
struct XmlNodeConverter {
    struct XmlNodeConverter__Class* klass;
    MonitorData* monitor;
    struct XmlNodeConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeConverter_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeConverter_FWDDECL
#include <Modloader/app/structs/XmlNodeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeConverter_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeConverter_FWDDECL)
#include <Modloader/app/structs/XmlNodeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
