#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttributeOverrides_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttributeOverrides_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeOverrides_DEFINED)
#include <Modloader/app/structs/XmlAttributeOverrides__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAttributeOverrides__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAttributeOverrides_DEFINED
struct XmlAttributeOverrides__Class;
struct XmlAttributeOverrides {
    struct XmlAttributeOverrides__Class* klass;
    MonitorData* monitor;
    struct XmlAttributeOverrides__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAttributeOverrides_FWDDECL)
#define IL2CPP_STRUCT_XmlAttributeOverrides_FWDDECL
#include <Modloader/app/structs/XmlAttributeOverrides__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAttributeOverrides_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeOverrides_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttributeOverrides_FWDDECL)
#include <Modloader/app/structs/XmlAttributeOverrides.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttributeOverrides.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
