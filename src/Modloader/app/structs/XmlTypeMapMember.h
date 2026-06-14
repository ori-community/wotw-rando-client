#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapMember_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMember_DEFINED)
#include <Modloader/app/structs/XmlTypeMapMember__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTypeMapMember__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapMember_DEFINED
struct XmlTypeMapMember__Class;
struct XmlTypeMapMember {
    struct XmlTypeMapMember__Class* klass;
    MonitorData* monitor;
    struct XmlTypeMapMember__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapMember_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapMember_FWDDECL
#include <Modloader/app/structs/XmlTypeMapMember__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapMember_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapMember_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapMember.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapMember.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
