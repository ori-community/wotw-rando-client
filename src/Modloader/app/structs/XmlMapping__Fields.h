#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlMapping__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMapping__Fields_DEFINED)
#include <Modloader/app/structs/SerializationFormat__Enum.h>
#if defined(IL2CPP_STRUCT_SerializationFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlMapping__Fields_DEFINED
struct ObjectMap_1;
struct ArrayList;
struct SerializationSource;
struct String;
struct __declspec(align(8)) XmlMapping__Fields {
    struct ObjectMap_1* map;
    struct ArrayList* relatedMaps;
    SerializationFormat__Enum format;

    struct SerializationSource* source;
    struct String* _elementName;
    struct String* _namespace;
    struct String* key;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlMapping__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlMapping__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ObjectMap_1.h>
#include <Modloader/app/structs/SerializationSource.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMapping__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlMapping__Fields_FWDDECL)
#include <Modloader/app/structs/XmlMapping__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlMapping__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
