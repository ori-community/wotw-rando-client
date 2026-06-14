#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlElementEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlElementEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementEventArgs_DEFINED)
#include <Modloader/app/structs/XmlElementEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_XmlElementEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlElementEventArgs_DEFINED
struct XmlElementEventArgs__Class;
struct XmlElementEventArgs {
    struct XmlElementEventArgs__Class* klass;
    MonitorData* monitor;
    struct XmlElementEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlElementEventArgs_FWDDECL)
#define IL2CPP_STRUCT_XmlElementEventArgs_FWDDECL
#include <Modloader/app/structs/XmlElementEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlElementEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_XmlElementEventArgs_FWDDECL)
#include <Modloader/app/structs/XmlElementEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlElementEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
