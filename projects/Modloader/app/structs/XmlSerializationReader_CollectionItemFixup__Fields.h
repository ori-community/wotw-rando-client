#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationReader_CollectionItemFixup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationReader_CollectionItemFixup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_CollectionItemFixup__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationReader_CollectionItemFixup__Fields_DEFINED
struct Array;
struct String;
struct __declspec(align(8)) XmlSerializationReader_CollectionItemFixup__Fields {
    struct Array* list;
    int32_t index;
    struct String* id;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_CollectionItemFixup__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationReader_CollectionItemFixup__Fields_FWDDECL
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationReader_CollectionItemFixup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_CollectionItemFixup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationReader_CollectionItemFixup__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializationReader_CollectionItemFixup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationReader_CollectionItemFixup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
