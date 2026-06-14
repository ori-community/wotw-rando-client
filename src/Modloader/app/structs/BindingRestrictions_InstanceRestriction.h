#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction_DEFINED)
#include <Modloader/app/structs/BindingRestrictions_InstanceRestriction__Fields.h>
#if defined(IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction__Fields_DEFINED)
#define IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction_DEFINED
struct BindingRestrictions_InstanceRestriction__Class;
struct BindingRestrictions_InstanceRestriction {
    struct BindingRestrictions_InstanceRestriction__Class* klass;
    MonitorData* monitor;
    struct BindingRestrictions_InstanceRestriction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction_FWDDECL)
#define IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction_FWDDECL
#include <Modloader/app/structs/BindingRestrictions_InstanceRestriction__Class.h>
#endif
#undef IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction_DEFINED) && !defined(IL2CPP_STRUCT_BindingRestrictions_InstanceRestriction_FWDDECL)
#include <Modloader/app/structs/BindingRestrictions_InstanceRestriction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindingRestrictions_InstanceRestriction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
