#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDateTimeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDateTimeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDateTimeConverter_DEFINED)
#include <Modloader/app/structs/XmlDateTimeConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlDateTimeConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDateTimeConverter_DEFINED
struct XmlDateTimeConverter__Class;
struct XmlDateTimeConverter {
    struct XmlDateTimeConverter__Class* klass;
    MonitorData* monitor;
    struct XmlDateTimeConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDateTimeConverter_FWDDECL)
#define IL2CPP_STRUCT_XmlDateTimeConverter_FWDDECL
#include <Modloader/app/structs/XmlDateTimeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlDateTimeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDateTimeConverter_DEFINED) && !defined(IL2CPP_STRUCT_XmlDateTimeConverter_FWDDECL)
#include <Modloader/app/structs/XmlDateTimeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDateTimeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
