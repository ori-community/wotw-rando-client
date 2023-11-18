#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationWriter_DEFINED)
#include <Modloader/app/structs/XmlSerializationWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializationWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationWriter_DEFINED
struct XmlSerializationWriter__Class;
struct XmlSerializationWriter {
    struct XmlSerializationWriter__Class* klass;
    MonitorData* monitor;
    struct XmlSerializationWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationWriter_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationWriter_FWDDECL
#include <Modloader/app/structs/XmlSerializationWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationWriter_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationWriter_FWDDECL)
#include <Modloader/app/structs/XmlSerializationWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
