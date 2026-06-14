#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindingRestrictions_TypeRestriction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindingRestrictions_TypeRestriction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_TypeRestriction_DEFINED)
#include <Modloader/app/structs/BindingRestrictions_TypeRestriction__Fields.h>
#if defined(IL2CPP_STRUCT_BindingRestrictions_TypeRestriction__Fields_DEFINED)
#define IL2CPP_STRUCT_BindingRestrictions_TypeRestriction_DEFINED
struct BindingRestrictions_TypeRestriction__Class;
struct BindingRestrictions_TypeRestriction {
    struct BindingRestrictions_TypeRestriction__Class* klass;
    MonitorData* monitor;
    struct BindingRestrictions_TypeRestriction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BindingRestrictions_TypeRestriction_FWDDECL)
#define IL2CPP_STRUCT_BindingRestrictions_TypeRestriction_FWDDECL
#include <Modloader/app/structs/BindingRestrictions_TypeRestriction__Class.h>
#endif
#undef IL2CPP_STRUCT_BindingRestrictions_TypeRestriction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_TypeRestriction_DEFINED) && !defined(IL2CPP_STRUCT_BindingRestrictions_TypeRestriction_FWDDECL)
#include <Modloader/app/structs/BindingRestrictions_TypeRestriction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindingRestrictions_TypeRestriction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
