#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivationServices_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivationServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationServices_DEFINED)
#define IL2CPP_STRUCT_ActivationServices_DEFINED
struct ActivationServices__Class;
struct ActivationServices {
    struct ActivationServices__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ActivationServices_FWDDECL)
#define IL2CPP_STRUCT_ActivationServices_FWDDECL
#include <Modloader/app/structs/ActivationServices__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivationServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivationServices_DEFINED) && !defined(IL2CPP_STRUCT_ActivationServices_FWDDECL)
#include <Modloader/app/structs/ActivationServices.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivationServices.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
