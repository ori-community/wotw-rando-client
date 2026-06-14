#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializer_SerializerData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializer_SerializerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer_SerializerData_DEFINED)
#include <Modloader/app/structs/XmlSerializer_SerializerData__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializer_SerializerData_DEFINED
struct XmlSerializer_SerializerData__Class;
struct XmlSerializer_SerializerData {
    struct XmlSerializer_SerializerData__Class* klass;
    MonitorData* monitor;
    struct XmlSerializer_SerializerData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializer_SerializerData_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializer_SerializerData_FWDDECL
#include <Modloader/app/structs/XmlSerializer_SerializerData__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializer_SerializerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer_SerializerData_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializer_SerializerData_FWDDECL)
#include <Modloader/app/structs/XmlSerializer_SerializerData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializer_SerializerData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
