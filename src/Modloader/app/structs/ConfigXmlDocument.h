#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigXmlDocument_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigXmlDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigXmlDocument_DEFINED)
#include <Modloader/app/structs/ConfigXmlDocument__Fields.h>
#if defined(IL2CPP_STRUCT_ConfigXmlDocument__Fields_DEFINED)
#define IL2CPP_STRUCT_ConfigXmlDocument_DEFINED
struct ConfigXmlDocument__Class;
struct ConfigXmlDocument {
    struct ConfigXmlDocument__Class* klass;
    MonitorData* monitor;
    struct ConfigXmlDocument__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConfigXmlDocument_FWDDECL)
#define IL2CPP_STRUCT_ConfigXmlDocument_FWDDECL
#include <Modloader/app/structs/ConfigXmlDocument__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigXmlDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigXmlDocument_DEFINED) && !defined(IL2CPP_STRUCT_ConfigXmlDocument_FWDDECL)
#include <Modloader/app/structs/ConfigXmlDocument.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigXmlDocument.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
