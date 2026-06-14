#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayMovieTextureActionC__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayMovieTextureActionC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayMovieTextureActionC__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayMovieTextureActionC__Fields_DEFINED
struct VideoDescriptor;
struct GameObject;
struct ActionMethod;
struct MovieTextureControllerB;
struct PlayMovieTextureActionC__Fields {
    struct PerformingAction__Fields _;
    struct VideoDescriptor* VideoDescriptor;
    struct GameObject* MovieTextureController;
    struct ActionMethod* OnFinishedAction;
    bool CanBePaused;
    bool CanBeSkipped;
    bool SkippedWithButtonPress;
    struct MovieTextureControllerB* m_movieTextureController;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayMovieTextureActionC__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayMovieTextureActionC__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MovieTextureControllerB.h>
#include <Modloader/app/structs/VideoDescriptor.h>
#endif
#undef IL2CPP_STRUCT_PlayMovieTextureActionC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayMovieTextureActionC__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayMovieTextureActionC__Fields_FWDDECL)
#include <Modloader/app/structs/PlayMovieTextureActionC__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayMovieTextureActionC__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
