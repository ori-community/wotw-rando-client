#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlReflectionMember_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlReflectionMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReflectionMember_DEFINED)
#include <Modloader/app/structs/XmlReflectionMember__Fields.h>
#if defined(IL2CPP_STRUCT_XmlReflectionMember__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlReflectionMember_DEFINED
struct XmlReflectionMember__Class;
struct XmlReflectionMember {
    struct XmlReflectionMember__Class* klass;
    MonitorData* monitor;
    struct XmlReflectionMember__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlReflectionMember_FWDDECL)
#define IL2CPP_STRUCT_XmlReflectionMember_FWDDECL
#include <Modloader/app/structs/XmlReflectionMember__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlReflectionMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReflectionMember_DEFINED) && !defined(IL2CPP_STRUCT_XmlReflectionMember_FWDDECL)
#include <Modloader/app/structs/XmlReflectionMember.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlReflectionMember.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
