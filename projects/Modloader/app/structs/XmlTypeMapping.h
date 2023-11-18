#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapping_DEFINED)
#include <Modloader/app/structs/XmlTypeMapping__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapping_DEFINED
struct XmlTypeMapping__Class;
struct XmlTypeMapping {
    struct XmlTypeMapping__Class* klass;
    MonitorData* monitor;
    struct XmlTypeMapping__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapping_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapping_FWDDECL
#include <Modloader/app/structs/XmlTypeMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapping_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapping_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
