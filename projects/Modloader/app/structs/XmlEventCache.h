#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEventCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEventCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEventCache_DEFINED)
#include <Modloader/app/structs/XmlEventCache__Fields.h>
#if defined(IL2CPP_STRUCT_XmlEventCache__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlEventCache_DEFINED
struct XmlEventCache__Class;
struct XmlEventCache {
    struct XmlEventCache__Class* klass;
    MonitorData* monitor;
    struct XmlEventCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlEventCache_FWDDECL)
#define IL2CPP_STRUCT_XmlEventCache_FWDDECL
#include <Modloader/app/structs/XmlEventCache__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlEventCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEventCache_DEFINED) && !defined(IL2CPP_STRUCT_XmlEventCache_FWDDECL)
#include <Modloader/app/structs/XmlEventCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEventCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
