#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NpcProjectItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NpcProjectItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NpcProjectItem__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_NpcProjectItem__Fields_DEFINED
struct MessageProvider;
struct Texture2D;
struct SerializedByteUberState;
struct UpgradableProjectProperties__Array;
struct MoonTimeline;
struct NpcProjectItem__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider* Name;
    struct MessageProvider* DiscoverProjectSiteMessage;
    struct MessageProvider* ProjectFinishedMessage;
    struct Texture2D* Icon;
    struct SerializedByteUberState* UberState;
    struct UpgradableProjectProperties__Array* LevelProperties;
    struct MoonTimeline* Timeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NpcProjectItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_NpcProjectItem__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UpgradableProjectProperties__Array.h>
#endif
#undef IL2CPP_STRUCT_NpcProjectItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NpcProjectItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NpcProjectItem__Fields_FWDDECL)
#include <Modloader/app/structs/NpcProjectItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NpcProjectItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
