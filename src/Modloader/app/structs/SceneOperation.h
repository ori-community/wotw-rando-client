#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneOperation_DEFINED)
#define IL2CPP_STRUCT_SceneOperation_DEFINED
struct RuntimeSceneMetaData;
struct SceneOperation {
    struct RuntimeSceneMetaData* MetaData;
    bool Async;
    bool KeepLoaded;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneOperation_FWDDECL)
#define IL2CPP_STRUCT_SceneOperation_FWDDECL
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_SceneOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneOperation_DEFINED) && !defined(IL2CPP_STRUCT_SceneOperation_FWDDECL)
#include <Modloader/app/structs/SceneOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
