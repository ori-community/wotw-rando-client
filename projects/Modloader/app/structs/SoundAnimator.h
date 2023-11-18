#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAnimator_DEFINED)
#include <Modloader/app/structs/SoundAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_SoundAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundAnimator_DEFINED
struct SoundAnimator__Class;
struct SoundAnimator {
    struct SoundAnimator__Class* klass;
    MonitorData* monitor;
    struct SoundAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundAnimator_FWDDECL)
#define IL2CPP_STRUCT_SoundAnimator_FWDDECL
#include <Modloader/app/structs/SoundAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAnimator_DEFINED) && !defined(IL2CPP_STRUCT_SoundAnimator_FWDDECL)
#include <Modloader/app/structs/SoundAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
