#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivationParent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivationParent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationParent_DEFINED)
#include <Modloader/app/structs/ActivationParent__Fields.h>
#if defined(IL2CPP_STRUCT_ActivationParent__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivationParent_DEFINED
struct ActivationParent__Class;
struct ActivationParent {
    struct ActivationParent__Class* klass;
    MonitorData* monitor;
    struct ActivationParent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivationParent_FWDDECL)
#define IL2CPP_STRUCT_ActivationParent_FWDDECL
#include <Modloader/app/structs/ActivationParent__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivationParent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationParent_DEFINED) && !defined(IL2CPP_STRUCT_ActivationParent_FWDDECL)
#include <Modloader/app/structs/ActivationParent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivationParent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
