#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationFixupCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationFixupCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationFixupCallback_DEFINED)
#include <Modloader/app/structs/XmlSerializationFixupCallback__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializationFixupCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationFixupCallback_DEFINED
struct XmlSerializationFixupCallback__Class;
struct XmlSerializationFixupCallback {
    struct XmlSerializationFixupCallback__Class* klass;
    MonitorData* monitor;
    struct XmlSerializationFixupCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationFixupCallback_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationFixupCallback_FWDDECL
#include <Modloader/app/structs/XmlSerializationFixupCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationFixupCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationFixupCallback_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationFixupCallback_FWDDECL)
#include <Modloader/app/structs/XmlSerializationFixupCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationFixupCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
