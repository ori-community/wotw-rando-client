#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttributeEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttributeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeEventArgs_DEFINED)
#include <Modloader/app/structs/XmlAttributeEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAttributeEventArgs_DEFINED
struct XmlAttributeEventArgs__Class;
struct XmlAttributeEventArgs {
    struct XmlAttributeEventArgs__Class* klass;
    MonitorData* monitor;
    struct XmlAttributeEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAttributeEventArgs_FWDDECL)
#define IL2CPP_STRUCT_XmlAttributeEventArgs_FWDDECL
#include <Modloader/app/structs/XmlAttributeEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAttributeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttributeEventArgs_FWDDECL)
#include <Modloader/app/structs/XmlAttributeEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttributeEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
