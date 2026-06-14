#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationReader_CollectionFixup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationReader_CollectionFixup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_CollectionFixup__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationReader_CollectionFixup__Fields_DEFINED
struct XmlSerializationCollectionFixupCallback;
struct Object;
struct String;
struct __declspec(align(8)) XmlSerializationReader_CollectionFixup__Fields {
    struct XmlSerializationCollectionFixupCallback* callback;
    struct Object* collection;
    struct Object* collectionItems;
    struct String* id;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_CollectionFixup__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationReader_CollectionFixup__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSerializationCollectionFixupCallback.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationReader_CollectionFixup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader_CollectionFixup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationReader_CollectionFixup__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializationReader_CollectionFixup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationReader_CollectionFixup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
