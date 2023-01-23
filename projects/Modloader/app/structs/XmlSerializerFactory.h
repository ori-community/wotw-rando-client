#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializerFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializerFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializerFactory_DEFINED)
#define IL2CPP_STRUCT_XmlSerializerFactory_DEFINED
struct XmlSerializerFactory__Class;
struct XmlSerializerFactory {
    struct XmlSerializerFactory__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializerFactory_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializerFactory_FWDDECL
#include <Modloader/app/structs/XmlSerializerFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializerFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializerFactory_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializerFactory_FWDDECL)
#include <Modloader/app/structs/XmlSerializerFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializerFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
