#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlMembersMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlMembersMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMembersMapping_DEFINED)
#include <Modloader/app/structs/XmlMembersMapping__Fields.h>
#if defined(IL2CPP_STRUCT_XmlMembersMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlMembersMapping_DEFINED
struct XmlMembersMapping__Class;
struct XmlMembersMapping {
    struct XmlMembersMapping__Class* klass;
    MonitorData* monitor;
    struct XmlMembersMapping__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlMembersMapping_FWDDECL)
#define IL2CPP_STRUCT_XmlMembersMapping_FWDDECL
#include <Modloader/app/structs/XmlMembersMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlMembersMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMembersMapping_DEFINED) && !defined(IL2CPP_STRUCT_XmlMembersMapping_FWDDECL)
#include <Modloader/app/structs/XmlMembersMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlMembersMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
