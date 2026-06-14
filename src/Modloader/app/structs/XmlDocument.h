#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDocument_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocument_DEFINED)
#include <Modloader/app/structs/XmlDocument__Fields.h>
#if defined(IL2CPP_STRUCT_XmlDocument__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDocument_DEFINED
struct XmlDocument__Class;
struct XmlDocument {
    struct XmlDocument__Class* klass;
    MonitorData* monitor;
    struct XmlDocument__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDocument_FWDDECL)
#define IL2CPP_STRUCT_XmlDocument_FWDDECL
#include <Modloader/app/structs/XmlDocument__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlDocument_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocument_DEFINED) && !defined(IL2CPP_STRUCT_XmlDocument_FWDDECL)
#include <Modloader/app/structs/XmlDocument.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDocument.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
