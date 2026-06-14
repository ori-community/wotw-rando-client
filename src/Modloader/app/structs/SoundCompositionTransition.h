#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition_DEFINED)
#include <Modloader/app/structs/SoundCompositionTransition__Fields.h>
#if defined(IL2CPP_STRUCT_SoundCompositionTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionTransition_DEFINED
struct SoundCompositionTransition__Class;
struct SoundCompositionTransition {
    struct SoundCompositionTransition__Class* klass;
    MonitorData* monitor;
    struct SoundCompositionTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionTransition_FWDDECL
#include <Modloader/app/structs/SoundCompositionTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransition_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionTransition_FWDDECL)
#include <Modloader/app/structs/SoundCompositionTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
