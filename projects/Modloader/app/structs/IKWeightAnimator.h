#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKWeightAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKWeightAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKWeightAnimator_DEFINED)
#include <Modloader/app/structs/IKWeightAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_IKWeightAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_IKWeightAnimator_DEFINED
struct IKWeightAnimator__Class;
struct IKWeightAnimator {
    struct IKWeightAnimator__Class* klass;
    MonitorData* monitor;
    struct IKWeightAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKWeightAnimator_FWDDECL)
#define IL2CPP_STRUCT_IKWeightAnimator_FWDDECL
#include <Modloader/app/structs/IKWeightAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_IKWeightAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKWeightAnimator_DEFINED) && !defined(IL2CPP_STRUCT_IKWeightAnimator_FWDDECL)
#include <Modloader/app/structs/IKWeightAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKWeightAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
