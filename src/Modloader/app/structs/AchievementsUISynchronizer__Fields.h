#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementsUISynchronizer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementsUISynchronizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUISynchronizer__Fields_DEFINED)
#include <Modloader/app/structs/AchievementsUISynchronizer_SynchronizationState__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AchievementsUISynchronizer_SynchronizationState__Enum_DEFINED)
#define IL2CPP_STRUCT_AchievementsUISynchronizer__Fields_DEFINED
struct GameObject;
struct List_1_AchievementsUIItem_;
struct INetworkConnectivityChecker;
struct AchievementsUISynchronizer__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* AchievementsCouterText;
    struct GameObject* AchievementsLoadingText;
    struct GameObject* AchievementsGrid;
    struct List_1_AchievementsUIItem_* m_achievementsUIItems;
    struct INetworkConnectivityChecker* m_netConnectivityChecker;
    AchievementsUISynchronizer_SynchronizationState__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementsUISynchronizer__Fields_FWDDECL)
#define IL2CPP_STRUCT_AchievementsUISynchronizer__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/List_1_AchievementsUIItem_.h>
#endif
#undef IL2CPP_STRUCT_AchievementsUISynchronizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUISynchronizer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AchievementsUISynchronizer__Fields_FWDDECL)
#include <Modloader/app/structs/AchievementsUISynchronizer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementsUISynchronizer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
