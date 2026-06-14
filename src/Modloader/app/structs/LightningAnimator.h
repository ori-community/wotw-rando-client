#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightningAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightningAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningAnimator_DEFINED)
#include <Modloader/app/structs/LightningAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LightningAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LightningAnimator_DEFINED
struct LightningAnimator__Class;
struct LightningAnimator {
    struct LightningAnimator__Class* klass;
    MonitorData* monitor;
    struct LightningAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightningAnimator_FWDDECL)
#define IL2CPP_STRUCT_LightningAnimator_FWDDECL
#include <Modloader/app/structs/LightningAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_LightningAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningAnimator_DEFINED) && !defined(IL2CPP_STRUCT_LightningAnimator_FWDDECL)
#include <Modloader/app/structs/LightningAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightningAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
