#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplayCameraTargetEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplayCameraTargetEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCameraTargetEntry_DEFINED)
#include <Modloader/app/structs/GameplayCameraTargetEntry_Type__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_GameplayCameraTargetEntry_Type__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GameplayCameraTargetEntry_DEFINED
struct ICameraTarget;
struct GameplayCameraTargetEntry {
    GameplayCameraTargetEntry_Type__Enum EntryType;

    struct Vector2 Padding;
    float Weight;
    struct ICameraTarget* Target;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplayCameraTargetEntry_FWDDECL)
#define IL2CPP_STRUCT_GameplayCameraTargetEntry_FWDDECL
#include <Modloader/app/structs/ICameraTarget.h>
#endif
#undef IL2CPP_STRUCT_GameplayCameraTargetEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayCameraTargetEntry_DEFINED) && !defined(IL2CPP_STRUCT_GameplayCameraTargetEntry_FWDDECL)
#include <Modloader/app/structs/GameplayCameraTargetEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplayCameraTargetEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
