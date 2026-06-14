#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializationReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializationReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializationReader__Fields_DEFINED
struct XmlDocument;
struct XmlReader;
struct ArrayList;
struct Hashtable;
struct XmlSerializer;
struct String;
struct XmlQualifiedName;
struct __declspec(align(8)) XmlSerializationReader__Fields {
    struct XmlDocument* document;
    struct XmlReader* reader;
    struct ArrayList* fixups;
    struct Hashtable* collFixups;
    struct ArrayList* collItemFixups;
    struct Hashtable* typesCallbacks;
    struct ArrayList* noIDTargets;
    struct Hashtable* targets;
    struct Hashtable* delayedListFixups;
    struct XmlSerializer* eventSource;
    int32_t delayedFixupId;
    struct Hashtable* referencedObjects;
    int32_t readCount;
    int32_t whileIterationCount;
    struct String* w3SchemaNS;
    struct String* w3InstanceNS;
    struct String* w3InstanceNS2000;
    struct String* w3InstanceNS1999;
    struct String* soapNS;
    struct String* wsdlNS;
    struct String* nullX;
    struct String* nil;
    struct String* typeX;
    struct String* arrayType;
    struct XmlQualifiedName* arrayQName;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializationReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializationReader__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSerializer.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializationReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializationReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializationReader__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializationReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializationReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
