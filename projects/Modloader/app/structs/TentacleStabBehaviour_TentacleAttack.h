#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleStabBehaviour_TentacleAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleStabBehaviour_TentacleAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleStabBehaviour_TentacleAttack_DEFINED)
#define IL2CPP_STRUCT_TentacleStabBehaviour_TentacleAttack_DEFINED
struct String;
struct MoonTimeline;
struct TentacleStabBehaviour_TentacleAttack {
    struct String* name;
    bool stickIntoWall;
    struct MoonTimeline* timeline;
};
#endif
#if !defined(IL2CPP_STRUCT_TentacleStabBehaviour_TentacleAttack_FWDDECL)
#define IL2CPP_STRUCT_TentacleStabBehaviour_TentacleAttack_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TentacleStabBehaviour_TentacleAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleStabBehaviour_TentacleAttack_DEFINED) && !defined(IL2CPP_STRUCT_TentacleStabBehaviour_TentacleAttack_FWDDECL)
#include <Modloader/app/structs/TentacleStabBehaviour_TentacleAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleStabBehaviour_TentacleAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
