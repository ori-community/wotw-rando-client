#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlSerializable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlSerializable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlSerializable_DEFINED)
#define IL2CPP_STRUCT_IXmlSerializable_DEFINED
struct IXmlSerializable__Class;
struct IXmlSerializable {
    struct IXmlSerializable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlSerializable_FWDDECL)
#define IL2CPP_STRUCT_IXmlSerializable_FWDDECL
#include <Modloader/app/structs/IXmlSerializable__Class.h>
#endif
#undef IL2CPP_STRUCT_IXmlSerializable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlSerializable_DEFINED) && !defined(IL2CPP_STRUCT_IXmlSerializable_FWDDECL)
#include <Modloader/app/structs/IXmlSerializable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlSerializable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
