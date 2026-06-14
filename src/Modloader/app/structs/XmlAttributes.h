#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttributes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributes_DEFINED)
#include <Modloader/app/structs/XmlAttributes__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAttributes__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAttributes_DEFINED
struct XmlAttributes__Class;
struct XmlAttributes {
    struct XmlAttributes__Class* klass;
    MonitorData* monitor;
    struct XmlAttributes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAttributes_FWDDECL)
#define IL2CPP_STRUCT_XmlAttributes_FWDDECL
#include <Modloader/app/structs/XmlAttributes__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributes_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttributes_FWDDECL)
#include <Modloader/app/structs/XmlAttributes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttributes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
