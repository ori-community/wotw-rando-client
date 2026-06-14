#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShardTraderNPC__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShardTraderNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderNPC__Fields_DEFINED)
#include <Modloader/app/structs/BaseNPC__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/ShardTraderNPC_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseNPC__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_ShardTraderNPC_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ShardTraderNPC__Fields_DEFINED
struct List_1_SpiritShardType_;
struct MessageProvider;
struct InteractionSettings;
struct CameraOffsetZone;
struct MoonTimeline;
struct Locomotion;
struct Transform;
struct MoonAnimation;
struct GameObject;
struct MessageBox;
struct RuntimeGameWorldArea;
struct DynamicDataResolver;
struct ShardTraderNPC__Fields {
    struct BaseNPC__Fields _;
    struct LayerMask CollisionMaskCanInteract;
    struct List_1_SpiritShardType_* ShardsInStock;
    struct MessageProvider* InteractionHintMessage;
    struct MessageProvider* InteractionMessageProvider;
    struct InteractionSettings* OpenShopInteraction;
    struct InteractionSettings* ShardsPurcahsedInteraction;
    struct MessageProvider* NoPurchaseMessageProvider;
    struct MessageProvider* AfterShopMessageProvider;
    struct CameraOffsetZone* InteractionCameraOffsetZone;
    struct MoonTimeline* TalkingTimeline;
    struct MoonTimeline* OpenShopTimeline;
    struct Locomotion* TurningHandler;
    struct Transform* OriPositionForInteraction;
    float OriPositionMoveRate;
    struct MoonAnimation* OriMoveToPositionAnimation;
    struct GameObject* m_shardEntity;
    ShardTraderNPC_State__Enum m_currentState;

    float m_currentStateTime;
    struct MessageBox* m_interactionHintMessageBox;
    struct RuntimeGameWorldArea* m_runtimeArea;
    bool m_moveOri;
    struct Vector2 m_oriInteractionPosition;
    struct DynamicDataResolver* m_dataResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShardTraderNPC__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShardTraderNPC__Fields_FWDDECL
#include <Modloader/app/structs/CameraOffsetZone.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/List_1_SpiritShardType_.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShardTraderNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderNPC__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShardTraderNPC__Fields_FWDDECL)
#include <Modloader/app/structs/ShardTraderNPC__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShardTraderNPC__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
