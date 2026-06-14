#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#include <Modloader/app/structs/NPCEntityPlaceholder_NPCInteractionSettings.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED
struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_;
struct QuestNodeSetup;
struct MessageProvider;
struct Transform;
struct NPCEntityPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_* Interaction;
    struct QuestNodeSetup* OverrideQuestNodeSetup;
    struct MessageProvider* OverrideInteractionHintMessage;
    bool ApplyRigOffset;
    float RigOffsetZ;
    bool OverrideInteractionSettings;
    struct NPCEntityPlaceholder_NPCInteractionSettings InteractionSettings;
    bool AttachToTransform;
    struct Transform* AttachTransform;
    struct Vector3 AttachAnchor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IInteractionNode_.h>
#include <Modloader/app/structs/QuestNodeSetup.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/NPCEntityPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCEntityPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
