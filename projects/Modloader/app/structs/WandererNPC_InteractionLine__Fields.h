#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_DEFINED
struct MessageProvider;
struct MoonTimeline;
struct __declspec(align(8)) WandererNPC_InteractionLine__Fields {
    struct MessageProvider* Line;
    struct MoonTimeline* TimelineRight;
    struct MoonTimeline* TimelineLeft;
};
#endif
#if !defined(IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_FWDDECL)
#define IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_FWDDECL)
#include <Modloader/app/structs/WandererNPC_InteractionLine__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererNPC_InteractionLine__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
