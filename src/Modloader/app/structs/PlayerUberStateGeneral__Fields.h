#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_DEFINED)
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_GameWorldAreaID__Enum_DEFINED) && defined(IL2CPP_STRUCT_DifficultyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_DEFINED
struct MoonGuid;
struct Action;
struct __declspec(align(8)) PlayerUberStateGeneral__Fields {
    struct Vector3 m_worldPosition;
    int32_t SaveSlotOrder;
    struct MoonGuid* SaveSlotID;
    bool m_debugOn;
    GameWorldAreaID__Enum m_gameWorldAreaID;

    DifficultyMode__Enum Difficulty;

    DifficultyMode__Enum LowestDifficulty;

    bool IsTrialSave;
    float GameTime;
    int32_t m_deathCounter;
    struct Action* m_setDirtyCallback;
    bool m_statsFoldout;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/MoonGuid.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateGeneral__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateGeneral__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
