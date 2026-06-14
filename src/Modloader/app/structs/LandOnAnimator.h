#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LandOnAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LandOnAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnAnimator_DEFINED)
#include <Modloader/app/structs/LandOnAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LandOnAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LandOnAnimator_DEFINED
struct LandOnAnimator__Class;
struct LandOnAnimator {
    struct LandOnAnimator__Class* klass;
    MonitorData* monitor;
    struct LandOnAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LandOnAnimator_FWDDECL)
#define IL2CPP_STRUCT_LandOnAnimator_FWDDECL
#include <Modloader/app/structs/LandOnAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_LandOnAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnAnimator_DEFINED) && !defined(IL2CPP_STRUCT_LandOnAnimator_FWDDECL)
#include <Modloader/app/structs/LandOnAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LandOnAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
