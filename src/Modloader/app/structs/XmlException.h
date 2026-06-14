#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlException_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlException_DEFINED)
#include <Modloader/app/structs/XmlException__Fields.h>
#if defined(IL2CPP_STRUCT_XmlException__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlException_DEFINED
struct XmlException__Class;
struct XmlException {
    struct XmlException__Class* klass;
    MonitorData* monitor;
    struct XmlException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlException_FWDDECL)
#define IL2CPP_STRUCT_XmlException_FWDDECL
#include <Modloader/app/structs/XmlException__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlException_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlException_DEFINED) && !defined(IL2CPP_STRUCT_XmlException_FWDDECL)
#include <Modloader/app/structs/XmlException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
