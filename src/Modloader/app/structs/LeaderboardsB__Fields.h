#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardsB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardsB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsB__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuItemGroupBase__Fields.h>
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/Leaderboard__Enum.h>
#include <Modloader/app/structs/LeaderboardsB_LeaderboardQueryState__Enum.h>
#if defined(IL2CPP_STRUCT_CleverMenuItemGroupBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Leaderboard__Enum_DEFINED) && defined(IL2CPP_STRUCT_DifficultyMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LeaderboardsB_LeaderboardQueryState__Enum_DEFINED)
#define IL2CPP_STRUCT_LeaderboardsB__Fields_DEFINED
struct LeaderboardTableUI;
struct MessageBox;
struct ActionMethod;
struct Dictionary_2_LeaderboardB_LeaderboardData_;
struct TranslatedMessageProvider;
struct SoundProvider;
struct LegacyTransparencyAnimator;
struct ActionSequence;
struct Transform;
struct OnlineHandler;
struct LeaderboardsB__Fields {
    struct CleverMenuItemGroupBase__Fields _;
    struct LeaderboardTableUI* TableUI;
    struct MessageBox* LeaderboardTitle;
    struct MessageBox* FilterText;
    struct MessageBox* EntriesText;
    struct MessageBox* DifficultyText;
    struct ActionMethod* OnHighlightChangedAction;
    Leaderboard__Enum m_currentLeaderboard;

    DifficultyMode__Enum m_currentDifficulty;

    struct Dictionary_2_LeaderboardB_LeaderboardData_* m_data;
    int32_t m_currentRowIndex;
    bool m_isVisible;
    struct TranslatedMessageProvider* LeaderboardMessageProvider;
    struct TranslatedMessageProvider* FilterMessageProvider;
    struct TranslatedMessageProvider* DifficultyMessageProvider;
    struct TranslatedMessageProvider* EntriesMessageProvider;
    struct TranslatedMessageProvider* BoardSpeedRunnerMessageProvider;
    struct TranslatedMessageProvider* BoardExplorerMessageProvider;
    struct TranslatedMessageProvider* BoardGlobalMessageProvider;
    struct TranslatedMessageProvider* FilterOverallMessageProvider;
    struct TranslatedMessageProvider* FilterMyFriendsMessageProvider;
    struct TranslatedMessageProvider* FilterMyScoreMessageProvider;
    struct TranslatedMessageProvider* DifficultyEasyMessageProvider;
    struct TranslatedMessageProvider* DifficultyNormalMessageProvider;
    struct TranslatedMessageProvider* DifficultyHardMessageProvider;
    struct TranslatedMessageProvider* DifficultyOneLifeMessageProvider;
    struct SoundProvider* OpenSound;
    struct SoundProvider* CloseSound;
    struct SoundProvider* CycleLeaderboardSound;
    struct SoundProvider* CycleFilterSound;
    struct SoundProvider* ViewGamerSound;
    struct SoundProvider* ChangeSelectionSound;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct LegacyTransparencyAnimator* FetchingDataFadeAnimator;
    bool m_isActive;
    struct ActionSequence* OnBackAction;
    struct Transform* ShowScoreCardLegend;
    bool CycleDifficulty;
    struct OnlineHandler* m_onlineHandler;
    bool m_isHighlightVisible;
    LeaderboardsB_LeaderboardQueryState__Enum m_currentLeaderboardQueryState;

    float m_inactiveTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardsB__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardsB__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/Dictionary_2_LeaderboardB_LeaderboardData_.h>
#include <Modloader/app/structs/LeaderboardTableUI.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/OnlineHandler.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TranslatedMessageProvider.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardsB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardsB__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderboardsB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardsB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
