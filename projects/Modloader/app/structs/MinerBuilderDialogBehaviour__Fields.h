#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerBuilderDialogBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerBuilderDialogBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderDialogBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BuilderNPC_State__Enum.h>
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_BuilderNPC_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MinerBuilderDialogBehaviour__Fields_DEFINED
struct MessageProvider;
struct BuilderNPC;
struct LegacyTimelineSequence;
struct TurningBehaviour;
struct MessageBox;
struct MinerBuilderEntity;
struct Locomotion;
struct MinerBuilderDialogBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct MessageProvider* InteractionHintMessage;
    struct BuilderNPC* BuilderNPC;
    struct LegacyTimelineSequence* idleTimeline;
    struct LegacyTimelineSequence* interactTimeline;
    struct LegacyTimelineSequence* fixedTimeline;
    struct TurningBehaviour* TurningBehaviour;
    struct MessageBox* m_interactionHintMessageBox;
    struct MinerBuilderEntity* m_minerBuilderEntity;
    struct Locomotion* m_groundLocomotion;
    bool m_shouldBeginInteraction;
    bool m_interacting;
    bool m_playActionTimeline;
    struct LegacyTimelineSequence* m_actionTimeline;
    BuilderNPC_State__Enum _DialogState_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerBuilderDialogBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerBuilderDialogBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BuilderNPC.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MinerBuilderEntity.h>
#include <Modloader/app/structs/TurningBehaviour.h>
#endif
#undef IL2CPP_STRUCT_MinerBuilderDialogBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderDialogBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerBuilderDialogBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MinerBuilderDialogBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerBuilderDialogBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
