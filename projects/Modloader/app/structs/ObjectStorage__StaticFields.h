#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectStorage__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectStorage__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectStorage__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ObjectStorage__StaticFields_DEFINED
struct Object;
struct Dictionary_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_;
struct XmlSerializerFactory;
struct ObjectStorage__StaticFields {
    struct Object* s_defaultValue;
    struct Object* s_tempAssemblyCacheLock;
    struct Dictionary_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_* s_tempAssemblyCache;
    struct XmlSerializerFactory* s_serializerFactory;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectStorage__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ObjectStorage__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSerializerFactory.h>
#endif
#undef IL2CPP_STRUCT_ObjectStorage__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectStorage__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectStorage__StaticFields_FWDDECL)
#include <Modloader/app/structs/ObjectStorage__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectStorage__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
