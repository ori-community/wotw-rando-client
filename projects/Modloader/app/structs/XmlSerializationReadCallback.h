#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationReadCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationReadCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReadCallback_DEFINED)
#include <Modloader/app/structs/XmlSerializationReadCallback__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializationReadCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationReadCallback_DEFINED
struct XmlSerializationReadCallback__Class;
struct XmlSerializationReadCallback {
    struct XmlSerializationReadCallback__Class* klass;
    MonitorData* monitor;
    struct XmlSerializationReadCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationReadCallback_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationReadCallback_FWDDECL
#include <Modloader/app/structs/XmlSerializationReadCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationReadCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReadCallback_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationReadCallback_FWDDECL)
#include <Modloader/app/structs/XmlSerializationReadCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationReadCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
