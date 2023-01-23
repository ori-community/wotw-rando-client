#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestItemReward__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestItemReward__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemReward__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestItemReward__Fields_DEFINED
struct MessageProvider;
struct GameObject;
struct Texture2D;
struct QuestItemReward__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider* RewardNameProvider;
    struct MessageProvider* RewardMessageProvider;
    struct GameObject* RewardMessageIcon;
    struct Texture2D* RewardIcon;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestItemReward__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestItemReward__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_QuestItemReward__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemReward__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestItemReward__Fields_FWDDECL)
#include <Modloader/app/structs/QuestItemReward__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestItemReward__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
