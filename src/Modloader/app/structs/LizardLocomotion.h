#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardLocomotion_DEFINED)
#include <Modloader/app/structs/LizardLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_LizardLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardLocomotion_DEFINED
struct LizardLocomotion__Class;
struct LizardLocomotion {
    struct LizardLocomotion__Class* klass;
    MonitorData* monitor;
    struct LizardLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardLocomotion_FWDDECL)
#define IL2CPP_STRUCT_LizardLocomotion_FWDDECL
#include <Modloader/app/structs/LizardLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_LizardLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_LizardLocomotion_FWDDECL)
#include <Modloader/app/structs/LizardLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
