#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlArrayItemAttributes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlArrayItemAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlArrayItemAttributes_DEFINED)
#include <Modloader/app/structs/XmlArrayItemAttributes__Fields.h>
#if defined(IL2CPP_STRUCT_XmlArrayItemAttributes__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlArrayItemAttributes_DEFINED
struct XmlArrayItemAttributes__Class;
struct XmlArrayItemAttributes {
    struct XmlArrayItemAttributes__Class* klass;
    MonitorData* monitor;
    struct XmlArrayItemAttributes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlArrayItemAttributes_FWDDECL)
#define IL2CPP_STRUCT_XmlArrayItemAttributes_FWDDECL
#include <Modloader/app/structs/XmlArrayItemAttributes__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlArrayItemAttributes_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlArrayItemAttributes_DEFINED) && !defined(IL2CPP_STRUCT_XmlArrayItemAttributes_FWDDECL)
#include <Modloader/app/structs/XmlArrayItemAttributes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlArrayItemAttributes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
