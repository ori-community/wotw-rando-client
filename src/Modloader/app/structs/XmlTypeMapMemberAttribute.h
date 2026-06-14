#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapMemberAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberAttribute_DEFINED)
#include <Modloader/app/structs/XmlTypeMapMemberAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeMapMemberAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapMemberAttribute_DEFINED
struct XmlTypeMapMemberAttribute__Class;
struct XmlTypeMapMemberAttribute {
    struct XmlTypeMapMemberAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlTypeMapMemberAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapMemberAttribute_FWDDECL
#include <Modloader/app/structs/XmlTypeMapMemberAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapMemberAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMemberAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapMemberAttribute_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapMemberAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapMemberAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
