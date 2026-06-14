#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EulerRotationAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EulerRotationAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EulerRotationAnimator_DEFINED)
#include <Modloader/app/structs/EulerRotationAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EulerRotationAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_EulerRotationAnimator_DEFINED
struct EulerRotationAnimator__Class;
struct EulerRotationAnimator {
    struct EulerRotationAnimator__Class* klass;
    MonitorData* monitor;
    struct EulerRotationAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EulerRotationAnimator_FWDDECL)
#define IL2CPP_STRUCT_EulerRotationAnimator_FWDDECL
#include <Modloader/app/structs/EulerRotationAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_EulerRotationAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EulerRotationAnimator_DEFINED) && !defined(IL2CPP_STRUCT_EulerRotationAnimator_FWDDECL)
#include <Modloader/app/structs/EulerRotationAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EulerRotationAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
