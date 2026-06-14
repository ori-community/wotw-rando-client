#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationAnimator_DEFINED)
#include <Modloader/app/structs/RotationAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_RotationAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_RotationAnimator_DEFINED
struct RotationAnimator__Class;
struct RotationAnimator {
    struct RotationAnimator__Class* klass;
    MonitorData* monitor;
    struct RotationAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationAnimator_FWDDECL)
#define IL2CPP_STRUCT_RotationAnimator_FWDDECL
#include <Modloader/app/structs/RotationAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_RotationAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationAnimator_DEFINED) && !defined(IL2CPP_STRUCT_RotationAnimator_FWDDECL)
#include <Modloader/app/structs/RotationAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
