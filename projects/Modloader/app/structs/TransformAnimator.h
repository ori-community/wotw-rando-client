#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimator_DEFINED)
#include <Modloader/app/structs/TransformAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_TransformAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformAnimator_DEFINED
struct TransformAnimator__Class;
struct TransformAnimator {
    struct TransformAnimator__Class* klass;
    MonitorData* monitor;
    struct TransformAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformAnimator_FWDDECL)
#define IL2CPP_STRUCT_TransformAnimator_FWDDECL
#include <Modloader/app/structs/TransformAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimator_DEFINED) && !defined(IL2CPP_STRUCT_TransformAnimator_FWDDECL)
#include <Modloader/app/structs/TransformAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
