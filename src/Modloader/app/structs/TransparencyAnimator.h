#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparencyAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparencyAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimator_DEFINED)
#include <Modloader/app/structs/TransparencyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_TransparencyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_TransparencyAnimator_DEFINED
struct TransparencyAnimator__Class;
struct TransparencyAnimator {
    struct TransparencyAnimator__Class* klass;
    MonitorData* monitor;
    struct TransparencyAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparencyAnimator_FWDDECL)
#define IL2CPP_STRUCT_TransparencyAnimator_FWDDECL
#include <Modloader/app/structs/TransparencyAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_TransparencyAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparencyAnimator_DEFINED) && !defined(IL2CPP_STRUCT_TransparencyAnimator_FWDDECL)
#include <Modloader/app/structs/TransparencyAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparencyAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
