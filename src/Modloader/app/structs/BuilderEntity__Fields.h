#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderEntity__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/NPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_BuilderEntity__Fields_DEFINED
struct MoonAnimation;
struct SerializedBooleanUberState;
struct MoonTimeline;
struct MessageProvider;
struct BuilderEntity__Fields {
    struct NPCEntity__Fields _;
    struct MoonAnimation* IdleAnimationLoop;
    struct SerializedBooleanUberState* Introduced;
    struct CheckpointFunctionality ProjectPurchasedCheckpoint;
    struct MoonTimeline* DefaultCurrentProjectTimeline;
    struct MessageProvider* DefaultFinishedProjectMessage;
    bool PurchasedProject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuilderEntity__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_BuilderEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuilderEntity__Fields_FWDDECL)
#include <Modloader/app/structs/BuilderEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
