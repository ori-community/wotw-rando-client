#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWriterSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWriterSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWriterSettings_DEFINED)
#include <Modloader/app/structs/XmlWriterSettings__Fields.h>
#if defined(IL2CPP_STRUCT_XmlWriterSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlWriterSettings_DEFINED
struct XmlWriterSettings__Class;
struct XmlWriterSettings {
    struct XmlWriterSettings__Class* klass;
    MonitorData* monitor;
    struct XmlWriterSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlWriterSettings_FWDDECL)
#define IL2CPP_STRUCT_XmlWriterSettings_FWDDECL
#include <Modloader/app/structs/XmlWriterSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlWriterSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWriterSettings_DEFINED) && !defined(IL2CPP_STRUCT_XmlWriterSettings_FWDDECL)
#include <Modloader/app/structs/XmlWriterSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWriterSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
