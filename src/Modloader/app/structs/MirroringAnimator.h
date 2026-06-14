#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MirroringAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MirroringAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroringAnimator_DEFINED)
#include <Modloader/app/structs/MirroringAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_MirroringAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_MirroringAnimator_DEFINED
struct MirroringAnimator__Class;
struct MirroringAnimator {
    struct MirroringAnimator__Class* klass;
    MonitorData* monitor;
    struct MirroringAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MirroringAnimator_FWDDECL)
#define IL2CPP_STRUCT_MirroringAnimator_FWDDECL
#include <Modloader/app/structs/MirroringAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_MirroringAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroringAnimator_DEFINED) && !defined(IL2CPP_STRUCT_MirroringAnimator_FWDDECL)
#include <Modloader/app/structs/MirroringAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MirroringAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
