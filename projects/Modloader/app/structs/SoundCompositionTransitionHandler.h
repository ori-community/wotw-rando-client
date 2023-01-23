#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionTransitionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionTransitionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransitionHandler_DEFINED)
#include <Modloader/app/structs/SoundCompositionTransitionHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SoundCompositionTransitionHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionTransitionHandler_DEFINED
struct SoundCompositionTransitionHandler__Class;
struct SoundCompositionTransitionHandler {
    struct SoundCompositionTransitionHandler__Class* klass;
    MonitorData* monitor;
    struct SoundCompositionTransitionHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionTransitionHandler_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionTransitionHandler_FWDDECL
#include <Modloader/app/structs/SoundCompositionTransitionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionTransitionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionTransitionHandler_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionTransitionHandler_FWDDECL)
#include <Modloader/app/structs/SoundCompositionTransitionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionTransitionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
