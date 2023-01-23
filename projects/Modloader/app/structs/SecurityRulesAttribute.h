#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityRulesAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityRulesAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityRulesAttribute_DEFINED)
#include <Modloader/app/structs/SecurityRulesAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityRulesAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityRulesAttribute_DEFINED
struct SecurityRulesAttribute__Class;
struct SecurityRulesAttribute {
    struct SecurityRulesAttribute__Class* klass;
    MonitorData* monitor;
    struct SecurityRulesAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityRulesAttribute_FWDDECL)
#define IL2CPP_STRUCT_SecurityRulesAttribute_FWDDECL
#include <Modloader/app/structs/SecurityRulesAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityRulesAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityRulesAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SecurityRulesAttribute_FWDDECL)
#include <Modloader/app/structs/SecurityRulesAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityRulesAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
