#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GardenerEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GardenerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerEntity__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/NPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_GardenerEntity__Fields_DEFINED
struct TalkVariant;
struct MoonTimeline;
struct GardenerEntity__Fields {
    struct NPCEntity__Fields _;
    struct TalkVariant* TalkIdle;
    struct CheckpointFunctionality ProjectPurchasedCheckpoint;
    struct MoonTimeline* DefaultCurrentProjectTimeline;
    bool PurchasedProject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GardenerEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_GardenerEntity__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TalkVariant.h>
#endif
#undef IL2CPP_STRUCT_GardenerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GardenerEntity__Fields_FWDDECL)
#include <Modloader/app/structs/GardenerEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GardenerEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
