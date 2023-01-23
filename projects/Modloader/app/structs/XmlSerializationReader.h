#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_DEFINED)
#include <Modloader/app/structs/XmlSerializationReader__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializationReader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationReader_DEFINED
struct XmlSerializationReader__Class;
struct XmlSerializationReader {
    struct XmlSerializationReader__Class* klass;
    MonitorData* monitor;
    struct XmlSerializationReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationReader_FWDDECL
#include <Modloader/app/structs/XmlSerializationReader__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationReader_FWDDECL)
#include <Modloader/app/structs/XmlSerializationReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
