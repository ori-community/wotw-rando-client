#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEventCache_XmlEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEventCache_XmlEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEventCache_XmlEvent_DEFINED)
#include <Modloader/app/structs/XmlEventCache_XmlEventType__Enum.h>
#if defined(IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlEventCache_XmlEvent_DEFINED
struct String;
struct Object;
struct XmlEventCache_XmlEvent {
    XmlEventCache_XmlEventType__Enum eventType;

    struct String* s1;
    struct String* s2;
    struct String* s3;
    struct Object* o;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlEventCache_XmlEvent_FWDDECL)
#define IL2CPP_STRUCT_XmlEventCache_XmlEvent_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlEventCache_XmlEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEventCache_XmlEvent_DEFINED) && !defined(IL2CPP_STRUCT_XmlEventCache_XmlEvent_FWDDECL)
#include <Modloader/app/structs/XmlEventCache_XmlEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEventCache_XmlEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
