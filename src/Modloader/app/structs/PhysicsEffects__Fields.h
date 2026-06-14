#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsEffects__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEffects__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsEffects__Fields_DEFINED
struct GameObject;
struct Event_1;
struct __declspec(align(8)) PhysicsEffects__Fields {
    struct GameObject* HeavyLandVFX;
    struct Event_1* HeavyLandSound;
    struct GameObject* StrongHitLeftVFX;
    struct Event_1* StrongHitLeftSound;
    struct GameObject* StrongHitRightVFX;
    struct Event_1* StringHitRightSound;
    struct GameObject* FoostepDetailVFX;
    struct Event_1* FoostepDetailSound;
    struct GameObject* LeftEdgeStopVFX;
    struct Event_1* LeftEdgeStopSound;
    struct GameObject* RightEdgeStopVFX;
    struct Event_1* RightEdgeStopSound;
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicsEffects__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsEffects__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_PhysicsEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEffects__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsEffects__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsEffects__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsEffects__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
