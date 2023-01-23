#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestReward__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestReward__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestReward__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestReward__Fields_DEFINED
struct Transform;
struct MessageProvider;
struct QuestReward__Fields {
    struct ScriptableObject__Fields _;
    int32_t Keystone;
    int32_t SpiritLight;
    int32_t Ore;
    struct Transform* RewardPrefab;
    struct MessageProvider* CustomText;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestReward__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestReward__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_QuestReward__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestReward__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestReward__Fields_FWDDECL)
#include <Modloader/app/structs/QuestReward__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestReward__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
