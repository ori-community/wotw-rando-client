#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlChildNodes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlChildNodes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlChildNodes_DEFINED)
#include <Modloader/app/structs/XmlChildNodes__Fields.h>
#if defined(IL2CPP_STRUCT_XmlChildNodes__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlChildNodes_DEFINED
struct XmlChildNodes__Class;
struct XmlChildNodes {
    struct XmlChildNodes__Class* klass;
    MonitorData* monitor;
    struct XmlChildNodes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlChildNodes_FWDDECL)
#define IL2CPP_STRUCT_XmlChildNodes_FWDDECL
#include <Modloader/app/structs/XmlChildNodes__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlChildNodes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlChildNodes_DEFINED) && !defined(IL2CPP_STRUCT_XmlChildNodes_FWDDECL)
#include <Modloader/app/structs/XmlChildNodes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlChildNodes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
