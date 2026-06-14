#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballExplosionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballExplosionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballExplosionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_GasballEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_GasballEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_GasballExplosionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct GasballExplosionBehaviour__Fields {
    struct EntityReactionBehaviour_1_GasballEntity___Fields _;
    struct MoonTimeline* InflateTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballExplosionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasballExplosionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_GasballExplosionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballExplosionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasballExplosionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/GasballExplosionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballExplosionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
