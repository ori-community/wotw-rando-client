#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeList_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeList_DEFINED)
#define IL2CPP_STRUCT_XmlNodeList_DEFINED
struct XmlNodeList__Class;
struct XmlNodeList {
    struct XmlNodeList__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeList_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeList_FWDDECL
#include <Modloader/app/structs/XmlNodeList__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeList_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeList_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeList_FWDDECL)
#include <Modloader/app/structs/XmlNodeList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
