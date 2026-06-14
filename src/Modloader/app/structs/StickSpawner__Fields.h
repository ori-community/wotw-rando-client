#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StickSpawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StickSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickSpawner__Fields_DEFINED)
#include <Modloader/app/structs/Flammable_FlameColor__Enum.h>
#include <Modloader/app/structs/Flammable_FlameState__Enum.h>
#include <Modloader/app/structs/InteractablePrefabSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_InteractablePrefabSpawner__Fields_DEFINED) && defined(IL2CPP_STRUCT_Flammable_FlameState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Flammable_FlameColor__Enum_DEFINED)
#define IL2CPP_STRUCT_StickSpawner__Fields_DEFINED
struct GuidOwner;
struct Event_1;
struct MoonTimeline;
struct StickSpawner__Fields {
    struct InteractablePrefabSpawner__Fields _;
    struct GuidOwner* GuidOwner;
    Flammable_FlameState__Enum FlameState;

    Flammable_FlameColor__Enum FlameColor;

    struct Event_1* OnSpawnStickSound;
    struct MoonTimeline* OnPickupTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StickSpawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_StickSpawner__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GuidOwner.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_StickSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickSpawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StickSpawner__Fields_FWDDECL)
#include <Modloader/app/structs/StickSpawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StickSpawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
