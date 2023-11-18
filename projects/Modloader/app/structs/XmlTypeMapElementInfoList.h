#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapElementInfoList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapElementInfoList_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapElementInfoList_DEFINED)
#include <Modloader/app/structs/XmlTypeMapElementInfoList__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeMapElementInfoList__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapElementInfoList_DEFINED
struct XmlTypeMapElementInfoList__Class;
struct XmlTypeMapElementInfoList {
    struct XmlTypeMapElementInfoList__Class* klass;
    MonitorData* monitor;
    struct XmlTypeMapElementInfoList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapElementInfoList_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapElementInfoList_FWDDECL
#include <Modloader/app/structs/XmlTypeMapElementInfoList__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapElementInfoList_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapElementInfoList_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapElementInfoList_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapElementInfoList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapElementInfoList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
