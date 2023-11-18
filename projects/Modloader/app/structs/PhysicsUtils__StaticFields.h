#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsUtils__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUtils__StaticFields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_PhysicsUtils__StaticFields_DEFINED
struct Comparer_1_UnityEngine_RaycastHit_;
struct PhysicsUtils__StaticFields {
    bool s_staticsInitialized;
    struct LayerMask s_groundMask;
    struct LayerMask s_obstaclesMask;
    struct LayerMask s_killCharacterMask;
    struct LayerMask s_characterMask;
    struct LayerMask s_playerMask;
    struct Comparer_1_UnityEngine_RaycastHit_* s_nearesHitComparer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsUtils__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsUtils__StaticFields_FWDDECL
#include <Modloader/app/structs/Comparer_1_UnityEngine_RaycastHit_.h>
#endif
#undef IL2CPP_STRUCT_PhysicsUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUtils__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsUtils__StaticFields_FWDDECL)
#include <Modloader/app/structs/PhysicsUtils__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsUtils__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
