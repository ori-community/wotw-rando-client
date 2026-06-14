#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerEntity__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_CartographerEntity__Fields_DEFINED
struct MessageProvider;
struct TalkVariant;
struct SerializedBooleanUberState;
struct GameWorldArea;
struct FloatAnimationParameter;
struct Condition_1;
struct CartographerEntity__Fields {
    struct NPCEntity__Fields _;
    struct MessageProvider* m_lastFlavour;
    struct TalkVariant* m_lastIdleBreakup;
    struct MessageProvider* FirstEncounterMessageProvider;
    struct SerializedBooleanUberState* EncounteredLupo;
    struct GameWorldArea* DefaultArea;
    struct TalkVariant* Purchase;
    struct FloatAnimationParameter* CharacterInteractionSlopeParameter;
    struct TalkVariant* IdleBreakupA;
    struct TalkVariant* IdleBreakupB;
    struct Condition_1* MapQuestCompletedCondition;
    float MapQuestCompletedMapCostModifier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartographerEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartographerEntity__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/TalkVariant.h>
#endif
#undef IL2CPP_STRUCT_CartographerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartographerEntity__Fields_FWDDECL)
#include <Modloader/app/structs/CartographerEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
