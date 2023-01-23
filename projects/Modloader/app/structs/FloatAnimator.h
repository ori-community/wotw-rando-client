#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatAnimator_DEFINED)
#include <Modloader/app/structs/FloatAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_FloatAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatAnimator_DEFINED
struct FloatAnimator__Class;
struct FloatAnimator {
    struct FloatAnimator__Class* klass;
    MonitorData* monitor;
    struct FloatAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatAnimator_FWDDECL)
#define IL2CPP_STRUCT_FloatAnimator_FWDDECL
#include <Modloader/app/structs/FloatAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatAnimator_DEFINED) && !defined(IL2CPP_STRUCT_FloatAnimator_FWDDECL)
#include <Modloader/app/structs/FloatAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
