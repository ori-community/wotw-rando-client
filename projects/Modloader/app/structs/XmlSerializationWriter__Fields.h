#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationWriter__Fields_DEFINED
struct ObjectIDGenerator;
struct ArrayList;
struct XmlWriter;
struct Queue;
struct Hashtable;
struct __declspec(align(8)) XmlSerializationWriter__Fields {
    struct ObjectIDGenerator* idGenerator;
    int32_t qnameCount;
    bool topLevelElement;
    struct ArrayList* namespaces;
    struct XmlWriter* writer;
    struct Queue* referencedElements;
    struct Hashtable* callbacks;
    struct Hashtable* serializedObjects;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationWriter__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/ObjectIDGenerator.h>
#include <Modloader/app/structs/Queue.h>
#include <Modloader/app/structs/XmlWriter.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationWriter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializationWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
