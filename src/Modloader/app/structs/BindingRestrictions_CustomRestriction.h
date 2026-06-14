#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindingRestrictions_CustomRestriction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindingRestrictions_CustomRestriction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_CustomRestriction_DEFINED)
#include <Modloader/app/structs/BindingRestrictions_CustomRestriction__Fields.h>
#if defined(IL2CPP_STRUCT_BindingRestrictions_CustomRestriction__Fields_DEFINED)
#define IL2CPP_STRUCT_BindingRestrictions_CustomRestriction_DEFINED
struct BindingRestrictions_CustomRestriction__Class;
struct BindingRestrictions_CustomRestriction {
    struct BindingRestrictions_CustomRestriction__Class* klass;
    MonitorData* monitor;
    struct BindingRestrictions_CustomRestriction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BindingRestrictions_CustomRestriction_FWDDECL)
#define IL2CPP_STRUCT_BindingRestrictions_CustomRestriction_FWDDECL
#include <Modloader/app/structs/BindingRestrictions_CustomRestriction__Class.h>
#endif
#undef IL2CPP_STRUCT_BindingRestrictions_CustomRestriction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_CustomRestriction_DEFINED) && !defined(IL2CPP_STRUCT_BindingRestrictions_CustomRestriction_FWDDECL)
#include <Modloader/app/structs/BindingRestrictions_CustomRestriction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindingRestrictions_CustomRestriction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
