#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShockWaveAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShockWaveAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShockWaveAnimator_DEFINED)
#include <Modloader/app/structs/ShockWaveAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_ShockWaveAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ShockWaveAnimator_DEFINED
struct ShockWaveAnimator__Class;
struct ShockWaveAnimator {
    struct ShockWaveAnimator__Class* klass;
    MonitorData* monitor;
    struct ShockWaveAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShockWaveAnimator_FWDDECL)
#define IL2CPP_STRUCT_ShockWaveAnimator_FWDDECL
#include <Modloader/app/structs/ShockWaveAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_ShockWaveAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShockWaveAnimator_DEFINED) && !defined(IL2CPP_STRUCT_ShockWaveAnimator_FWDDECL)
#include <Modloader/app/structs/ShockWaveAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShockWaveAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
