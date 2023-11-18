#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CodeAccessSecurityAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CodeAccessSecurityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodeAccessSecurityAttribute_DEFINED)
#include <Modloader/app/structs/CodeAccessSecurityAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_CodeAccessSecurityAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_CodeAccessSecurityAttribute_DEFINED
struct CodeAccessSecurityAttribute__Class;
struct CodeAccessSecurityAttribute {
    struct CodeAccessSecurityAttribute__Class* klass;
    MonitorData* monitor;
    struct CodeAccessSecurityAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CodeAccessSecurityAttribute_FWDDECL)
#define IL2CPP_STRUCT_CodeAccessSecurityAttribute_FWDDECL
#include <Modloader/app/structs/CodeAccessSecurityAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_CodeAccessSecurityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodeAccessSecurityAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CodeAccessSecurityAttribute_FWDDECL)
#include <Modloader/app/structs/CodeAccessSecurityAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CodeAccessSecurityAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
