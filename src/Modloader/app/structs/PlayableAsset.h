#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayableAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayableAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableAsset_DEFINED)
#include <Modloader/app/structs/PlayableAsset__Fields.h>
#if defined(IL2CPP_STRUCT_PlayableAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayableAsset_DEFINED
struct PlayableAsset__Class;
struct PlayableAsset {
    struct PlayableAsset__Class* klass;
    MonitorData* monitor;
    struct PlayableAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayableAsset_FWDDECL)
#define IL2CPP_STRUCT_PlayableAsset_FWDDECL
#include <Modloader/app/structs/PlayableAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayableAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayableAsset_DEFINED) && !defined(IL2CPP_STRUCT_PlayableAsset_FWDDECL)
#include <Modloader/app/structs/PlayableAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayableAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
