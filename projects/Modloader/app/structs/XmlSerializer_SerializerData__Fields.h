#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_DEFINED
struct MethodInfo_1;
struct Type;
struct XmlSerializerImplementation;
struct __declspec(align(8)) XmlSerializer_SerializerData__Fields {
    struct MethodInfo_1* ReaderMethod;
    struct Type* WriterType;
    struct MethodInfo_1* WriterMethod;
    struct XmlSerializerImplementation* Implementation;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_FWDDECL
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlSerializerImplementation.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializer_SerializerData__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializer_SerializerData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializer_SerializerData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
