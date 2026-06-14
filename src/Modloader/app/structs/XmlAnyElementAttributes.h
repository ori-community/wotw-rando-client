#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAnyElementAttributes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAnyElementAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAnyElementAttributes_DEFINED)
#include <Modloader/app/structs/XmlAnyElementAttributes__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAnyElementAttributes__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAnyElementAttributes_DEFINED
struct XmlAnyElementAttributes__Class;
struct XmlAnyElementAttributes {
    struct XmlAnyElementAttributes__Class* klass;
    MonitorData* monitor;
    struct XmlAnyElementAttributes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAnyElementAttributes_FWDDECL)
#define IL2CPP_STRUCT_XmlAnyElementAttributes_FWDDECL
#include <Modloader/app/structs/XmlAnyElementAttributes__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAnyElementAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAnyElementAttributes_DEFINED) && !defined(IL2CPP_STRUCT_XmlAnyElementAttributes_FWDDECL)
#include <Modloader/app/structs/XmlAnyElementAttributes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAnyElementAttributes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
