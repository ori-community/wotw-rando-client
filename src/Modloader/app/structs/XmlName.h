#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlName_DEFINED)
#include <Modloader/app/structs/XmlName__Fields.h>
#if defined(IL2CPP_STRUCT_XmlName__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlName_DEFINED
struct XmlName__Class;
struct XmlName {
    struct XmlName__Class* klass;
    MonitorData* monitor;
    struct XmlName__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlName_FWDDECL)
#define IL2CPP_STRUCT_XmlName_FWDDECL
#include <Modloader/app/structs/XmlName__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlName_DEFINED) && !defined(IL2CPP_STRUCT_XmlName_FWDDECL)
#include <Modloader/app/structs/XmlName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
