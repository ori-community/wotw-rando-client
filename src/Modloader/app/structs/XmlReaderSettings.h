#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlReaderSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlReaderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReaderSettings_DEFINED)
#include <Modloader/app/structs/XmlReaderSettings__Fields.h>
#if defined(IL2CPP_STRUCT_XmlReaderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlReaderSettings_DEFINED
struct XmlReaderSettings__Class;
struct XmlReaderSettings {
    struct XmlReaderSettings__Class* klass;
    MonitorData* monitor;
    struct XmlReaderSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlReaderSettings_FWDDECL)
#define IL2CPP_STRUCT_XmlReaderSettings_FWDDECL
#include <Modloader/app/structs/XmlReaderSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlReaderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReaderSettings_DEFINED) && !defined(IL2CPP_STRUCT_XmlReaderSettings_FWDDECL)
#include <Modloader/app/structs/XmlReaderSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlReaderSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
