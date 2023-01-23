#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormSquetchPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormSquetchPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormSquetchPlayer__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormSquetchPlayer__Fields_DEFINED
struct SandWormEntity;
struct SandWormEntity_SandWormSquetch;
struct SandWormSquetchPlayer__Fields {
    struct TimelineEntity__Fields _;
    struct SandWormEntity* SandWorm;
    struct SandWormEntity_SandWormSquetch* Animation;
    float Speed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormSquetchPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormSquetchPlayer__Fields_FWDDECL
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SandWormEntity_SandWormSquetch.h>
#endif
#undef IL2CPP_STRUCT_SandWormSquetchPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormSquetchPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormSquetchPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormSquetchPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormSquetchPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
