#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Quest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Quest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quest__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/Quest_QuestType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quest_QuestType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Quest__Fields_DEFINED
struct MessageProvider;
struct Texture2D;
struct Quest;
struct QuestReward;
struct IGenericUberState;
struct MoonReference_1_IGenericUberState_;
struct Quest__Fields {
    struct GuidOwner__Fields _;
    struct MessageProvider* NameMessageProvider;
    struct MessageProvider* ShortDescriptionMessageProvider;
    struct MessageProvider* DescriptionMessageProvider;
    struct MessageProvider* RewardMessageProvider;
    Quest_QuestType__Enum Type;

    bool SilentUpdate;
    bool HideObjectiveMarker;
    struct Vector2 Position;
    struct Texture2D* Icon;
    struct Quest* ChainQuest;
    struct QuestReward* OnWelcomeReward;
    struct QuestReward* OnCompleteReward;
    struct QuestReward* NonInteractionReward;
    int32_t StateOffset;
    bool SaveOnUpdate;
    bool _ShownOnMapByTimeline_k__BackingField;
    struct IGenericUberState* m_resolvedUberState;
    struct MoonReference_1_IGenericUberState_* m_uberState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Quest__Fields_FWDDECL)
#define IL2CPP_STRUCT_Quest__Fields_FWDDECL
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/QuestReward.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_Quest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Quest__Fields_FWDDECL)
#include <Modloader/app/structs/Quest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Quest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
