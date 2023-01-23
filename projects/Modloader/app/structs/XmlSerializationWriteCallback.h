#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationWriteCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationWriteCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationWriteCallback_DEFINED)
#include <Modloader/app/structs/XmlSerializationWriteCallback__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializationWriteCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationWriteCallback_DEFINED
struct XmlSerializationWriteCallback__Class;
struct XmlSerializationWriteCallback {
    struct XmlSerializationWriteCallback__Class* klass;
    MonitorData* monitor;
    struct XmlSerializationWriteCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationWriteCallback_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationWriteCallback_FWDDECL
#include <Modloader/app/structs/XmlSerializationWriteCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationWriteCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationWriteCallback_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationWriteCallback_FWDDECL)
#include <Modloader/app/structs/XmlSerializationWriteCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationWriteCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
