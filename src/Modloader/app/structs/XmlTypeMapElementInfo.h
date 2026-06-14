#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapElementInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapElementInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapElementInfo_DEFINED)
#include <Modloader/app/structs/XmlTypeMapElementInfo__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapElementInfo_DEFINED
struct XmlTypeMapElementInfo__Class;
struct XmlTypeMapElementInfo {
    struct XmlTypeMapElementInfo__Class* klass;
    MonitorData* monitor;
    struct XmlTypeMapElementInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapElementInfo_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapElementInfo_FWDDECL
#include <Modloader/app/structs/XmlTypeMapElementInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapElementInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapElementInfo_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapElementInfo_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapElementInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapElementInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
