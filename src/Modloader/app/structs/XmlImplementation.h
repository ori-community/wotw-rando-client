#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlImplementation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlImplementation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlImplementation_DEFINED)
#include <Modloader/app/structs/XmlImplementation__Fields.h>
#if defined(IL2CPP_STRUCT_XmlImplementation__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlImplementation_DEFINED
struct XmlImplementation__Class;
struct XmlImplementation {
    struct XmlImplementation__Class* klass;
    MonitorData* monitor;
    struct XmlImplementation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlImplementation_FWDDECL)
#define IL2CPP_STRUCT_XmlImplementation_FWDDECL
#include <Modloader/app/structs/XmlImplementation__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlImplementation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlImplementation_DEFINED) && !defined(IL2CPP_STRUCT_XmlImplementation_FWDDECL)
#include <Modloader/app/structs/XmlImplementation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlImplementation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
