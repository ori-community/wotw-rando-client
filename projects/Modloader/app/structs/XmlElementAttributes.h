#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlElementAttributes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlElementAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementAttributes_DEFINED)
#include <Modloader/app/structs/XmlElementAttributes__Fields.h>
#if defined(IL2CPP_STRUCT_XmlElementAttributes__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlElementAttributes_DEFINED
struct XmlElementAttributes__Class;
struct XmlElementAttributes {
    struct XmlElementAttributes__Class* klass;
    MonitorData* monitor;
    struct XmlElementAttributes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlElementAttributes_FWDDECL)
#define IL2CPP_STRUCT_XmlElementAttributes_FWDDECL
#include <Modloader/app/structs/XmlElementAttributes__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlElementAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementAttributes_DEFINED) && !defined(IL2CPP_STRUCT_XmlElementAttributes_FWDDECL)
#include <Modloader/app/structs/XmlElementAttributes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlElementAttributes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
