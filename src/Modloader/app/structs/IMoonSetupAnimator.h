#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonSetupAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonSetupAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonSetupAnimator_DEFINED)
#define IL2CPP_STRUCT_IMoonSetupAnimator_DEFINED
struct IMoonSetupAnimator__Class;
struct IMoonSetupAnimator {
    struct IMoonSetupAnimator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonSetupAnimator_FWDDECL)
#define IL2CPP_STRUCT_IMoonSetupAnimator_FWDDECL
#include <Modloader/app/structs/IMoonSetupAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonSetupAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonSetupAnimator_DEFINED) && !defined(IL2CPP_STRUCT_IMoonSetupAnimator_FWDDECL)
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
