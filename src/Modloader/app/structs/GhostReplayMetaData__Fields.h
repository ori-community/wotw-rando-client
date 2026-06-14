#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostReplayMetaData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostReplayMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostReplayMetaData__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostReplayMetaData__Fields_DEFINED
struct String;
struct GhostRecorderData;
struct List_1_SceneMetaData_;
struct GhostReplayMetaData__Fields {
    struct ScriptableObject__Fields _;
    struct String* Name;
    int32_t FrameCount;
    struct GhostRecorderData* ReplayInMemory;
    struct List_1_SceneMetaData_* Scenes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostReplayMetaData__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostReplayMetaData__Fields_FWDDECL
#include <Modloader/app/structs/GhostRecorderData.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GhostReplayMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostReplayMetaData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostReplayMetaData__Fields_FWDDECL)
#include <Modloader/app/structs/GhostReplayMetaData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostReplayMetaData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
