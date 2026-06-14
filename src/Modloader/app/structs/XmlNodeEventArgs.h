#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeEventArgs_DEFINED)
#include <Modloader/app/structs/XmlNodeEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNodeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeEventArgs_DEFINED
struct XmlNodeEventArgs__Class;
struct XmlNodeEventArgs {
    struct XmlNodeEventArgs__Class* klass;
    MonitorData* monitor;
    struct XmlNodeEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeEventArgs_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeEventArgs_FWDDECL
#include <Modloader/app/structs/XmlNodeEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeEventArgs_FWDDECL)
#include <Modloader/app/structs/XmlNodeEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
