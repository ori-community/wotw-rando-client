#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlStringConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlStringConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlStringConverter_DEFINED)
#include <Modloader/app/structs/XmlStringConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlStringConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlStringConverter_DEFINED
struct XmlStringConverter__Class;
struct XmlStringConverter {
    struct XmlStringConverter__Class* klass;
    MonitorData* monitor;
    struct XmlStringConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlStringConverter_FWDDECL)
#define IL2CPP_STRUCT_XmlStringConverter_FWDDECL
#include <Modloader/app/structs/XmlStringConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlStringConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlStringConverter_DEFINED) && !defined(IL2CPP_STRUCT_XmlStringConverter_FWDDECL)
#include <Modloader/app/structs/XmlStringConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlStringConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
