#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializableMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializableMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializableMapping_DEFINED)
#include <Modloader/app/structs/XmlSerializableMapping__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializableMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializableMapping_DEFINED
struct XmlSerializableMapping__Class;
struct XmlSerializableMapping {
    struct XmlSerializableMapping__Class* klass;
    MonitorData* monitor;
    struct XmlSerializableMapping__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializableMapping_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializableMapping_FWDDECL
#include <Modloader/app/structs/XmlSerializableMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializableMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializableMapping_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializableMapping_FWDDECL)
#include <Modloader/app/structs/XmlSerializableMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializableMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
