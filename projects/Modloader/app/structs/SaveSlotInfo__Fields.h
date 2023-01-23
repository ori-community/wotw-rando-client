#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotInfo__Fields_DEFINED)
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#if defined(IL2CPP_STRUCT_DifficultyMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_GameWorldAreaID__Enum_DEFINED)
#define IL2CPP_STRUCT_SaveSlotInfo__Fields_DEFINED
struct String;
struct MoonGuid;
struct __declspec(align(8)) SaveSlotInfo__Fields {
    struct String* AreaName;
    int32_t Completion;
    int32_t Health;
    int32_t MaxHealth;
    int32_t Energy;
    int32_t MaxEnergy;
    int32_t Hours;
    int32_t Minutes;
    int32_t Seconds;
    int32_t Order;
    bool Completed;
    bool WasKilled;
    bool CompletedWithEverything;
    bool ErrorWhileLoading;
    struct MoonGuid* Identifier;
    DifficultyMode__Enum Difficulty;

    DifficultyMode__Enum LowestDifficulty;

    bool IsTrialSave;
    bool DebugOn;
    GameWorldAreaID__Enum AreaID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotInfo__Fields_FWDDECL
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SaveSlotInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
