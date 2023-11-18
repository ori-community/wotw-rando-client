#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapMemberList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapMemberList_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberList_DEFINED)
#include <Modloader/app/structs/XmlTypeMapMemberList__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeMapMemberList__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapMemberList_DEFINED
struct XmlTypeMapMemberList__Class;
struct XmlTypeMapMemberList {
    struct XmlTypeMapMemberList__Class* klass;
    MonitorData* monitor;
    struct XmlTypeMapMemberList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberList_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapMemberList_FWDDECL
#include <Modloader/app/structs/XmlTypeMapMemberList__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapMemberList_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberList_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapMemberList_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapMemberList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapMemberList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
