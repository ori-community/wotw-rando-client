#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializer__Fields_DEFINED
struct XmlMapping;
struct XmlSerializer_SerializerData;
struct UnreferencedObjectEventHandler;
struct XmlAttributeEventHandler;
struct XmlElementEventHandler;
struct XmlNodeEventHandler;
struct __declspec(align(8)) XmlSerializer__Fields {
    bool customSerializer;
    struct XmlMapping* typeMapping;
    struct XmlSerializer_SerializerData* serializerData;
    struct UnreferencedObjectEventHandler* onUnreferencedObject;
    struct XmlAttributeEventHandler* onUnknownAttribute;
    struct XmlElementEventHandler* onUnknownElement;
    struct XmlNodeEventHandler* onUnknownNode;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializer__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializer__Fields_FWDDECL
#include <Modloader/app/structs/UnreferencedObjectEventHandler.h>
#include <Modloader/app/structs/XmlAttributeEventHandler.h>
#include <Modloader/app/structs/XmlElementEventHandler.h>
#include <Modloader/app/structs/XmlMapping.h>
#include <Modloader/app/structs/XmlNodeEventHandler.h>
#include <Modloader/app/structs/XmlSerializer_SerializerData.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializer__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSerializer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
