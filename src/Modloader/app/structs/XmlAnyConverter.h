#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAnyConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAnyConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAnyConverter_DEFINED)
#include <Modloader/app/structs/XmlAnyConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAnyConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAnyConverter_DEFINED
struct XmlAnyConverter__Class;
struct XmlAnyConverter {
    struct XmlAnyConverter__Class* klass;
    MonitorData* monitor;
    struct XmlAnyConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAnyConverter_FWDDECL)
#define IL2CPP_STRUCT_XmlAnyConverter_FWDDECL
#include <Modloader/app/structs/XmlAnyConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAnyConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAnyConverter_DEFINED) && !defined(IL2CPP_STRUCT_XmlAnyConverter_FWDDECL)
#include <Modloader/app/structs/XmlAnyConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAnyConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
