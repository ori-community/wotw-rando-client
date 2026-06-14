#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivationChild_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivationChild_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationChild_DEFINED)
#include <Modloader/app/structs/ActivationChild__Fields.h>
#if defined(IL2CPP_STRUCT_ActivationChild__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivationChild_DEFINED
struct ActivationChild__Class;
struct ActivationChild {
    struct ActivationChild__Class* klass;
    MonitorData* monitor;
    struct ActivationChild__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivationChild_FWDDECL)
#define IL2CPP_STRUCT_ActivationChild_FWDDECL
#include <Modloader/app/structs/ActivationChild__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivationChild_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationChild_DEFINED) && !defined(IL2CPP_STRUCT_ActivationChild_FWDDECL)
#include <Modloader/app/structs/ActivationChild.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivationChild.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
