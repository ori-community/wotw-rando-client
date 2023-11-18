#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEntityReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEntityReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEntityReference_DEFINED)
#include <Modloader/app/structs/XmlEntityReference__Fields.h>
#if defined(IL2CPP_STRUCT_XmlEntityReference__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlEntityReference_DEFINED
struct XmlEntityReference__Class;
struct XmlEntityReference {
    struct XmlEntityReference__Class* klass;
    MonitorData* monitor;
    struct XmlEntityReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlEntityReference_FWDDECL)
#define IL2CPP_STRUCT_XmlEntityReference_FWDDECL
#include <Modloader/app/structs/XmlEntityReference__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlEntityReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEntityReference_DEFINED) && !defined(IL2CPP_STRUCT_XmlEntityReference_FWDDECL)
#include <Modloader/app/structs/XmlEntityReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEntityReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
