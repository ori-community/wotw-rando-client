#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlListConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlListConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlListConverter_DEFINED)
#include <Modloader/app/structs/XmlListConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlListConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlListConverter_DEFINED
struct XmlListConverter__Class;
struct XmlListConverter {
    struct XmlListConverter__Class* klass;
    MonitorData* monitor;
    struct XmlListConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlListConverter_FWDDECL)
#define IL2CPP_STRUCT_XmlListConverter_FWDDECL
#include <Modloader/app/structs/XmlListConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlListConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlListConverter_DEFINED) && !defined(IL2CPP_STRUCT_XmlListConverter_FWDDECL)
#include <Modloader/app/structs/XmlListConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlListConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
