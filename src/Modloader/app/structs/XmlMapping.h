#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMapping_DEFINED)
#include <Modloader/app/structs/XmlMapping__Fields.h>
#if defined(IL2CPP_STRUCT_XmlMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlMapping_DEFINED
struct XmlMapping__Class;
struct XmlMapping {
    struct XmlMapping__Class* klass;
    MonitorData* monitor;
    struct XmlMapping__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlMapping_FWDDECL)
#define IL2CPP_STRUCT_XmlMapping_FWDDECL
#include <Modloader/app/structs/XmlMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMapping_DEFINED) && !defined(IL2CPP_STRUCT_XmlMapping_FWDDECL)
#include <Modloader/app/structs/XmlMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
