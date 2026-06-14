#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardTableUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardTableUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardTableUI__Fields_DEFINED)
#include <Modloader/app/structs/Leaderboard__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Leaderboard__Enum_DEFINED)
#define IL2CPP_STRUCT_LeaderboardTableUI__Fields_DEFINED
struct GameObject;
struct Transform;
struct List_1_LeaderboardRowUI_;
struct List_1_UnityEngine_GameObject_;
struct LeaderboardTableUI_LeaderboardMetaData__Array;
struct LeaderboardTableUI__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* LeaderboardRowBackground;
    float RowSpacing;
    int32_t RowCount;
    struct Transform* RowsParent;
    struct Transform* HeaderParent;
    struct List_1_LeaderboardRowUI_* m_leaderboardRows;
    struct List_1_UnityEngine_GameObject_* m_rowBackgrounds;
    struct GameObject* m_header;
    struct LeaderboardTableUI_LeaderboardMetaData__Array* MetaData;
    Leaderboard__Enum m_leaderboardType;

    bool m_tableExists;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardTableUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardTableUI__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LeaderboardTableUI_LeaderboardMetaData__Array.h>
#include <Modloader/app/structs/List_1_LeaderboardRowUI_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardTableUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardTableUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardTableUI__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderboardTableUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardTableUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
