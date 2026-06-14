#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeChangedEventArgs_DEFINED)
#include <Modloader/app/structs/XmlNodeChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeChangedEventArgs_DEFINED
struct XmlNodeChangedEventArgs__Class;
struct XmlNodeChangedEventArgs {
    struct XmlNodeChangedEventArgs__Class* klass;
    MonitorData* monitor;
    struct XmlNodeChangedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeChangedEventArgs_FWDDECL
#include <Modloader/app/structs/XmlNodeChangedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/XmlNodeChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
