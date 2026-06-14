#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializerImplementation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializerImplementation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializerImplementation_DEFINED)
#define IL2CPP_STRUCT_XmlSerializerImplementation_DEFINED
struct XmlSerializerImplementation__Class;
struct XmlSerializerImplementation {
    struct XmlSerializerImplementation__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializerImplementation_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializerImplementation_FWDDECL
#include <Modloader/app/structs/XmlSerializerImplementation__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializerImplementation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializerImplementation_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializerImplementation_FWDDECL)
#include <Modloader/app/structs/XmlSerializerImplementation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializerImplementation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
