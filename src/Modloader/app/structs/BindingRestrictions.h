#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindingRestrictions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindingRestrictions_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_DEFINED)
#define IL2CPP_STRUCT_BindingRestrictions_DEFINED
struct BindingRestrictions__Class;
struct BindingRestrictions {
    struct BindingRestrictions__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BindingRestrictions_FWDDECL)
#define IL2CPP_STRUCT_BindingRestrictions_FWDDECL
#include <Modloader/app/structs/BindingRestrictions__Class.h>
#endif
#undef IL2CPP_STRUCT_BindingRestrictions_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_DEFINED) && !defined(IL2CPP_STRUCT_BindingRestrictions_FWDDECL)
#include <Modloader/app/structs/BindingRestrictions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindingRestrictions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
