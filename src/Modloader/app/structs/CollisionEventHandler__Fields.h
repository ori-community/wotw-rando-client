#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionEventHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionEventHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionEventHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionEventHandler__Fields_DEFINED
struct Action_1_UnityEngine_Collision_;
struct CollisionEventHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct Action_1_UnityEngine_Collision_* CollisionEnterEvent;
    struct Action_1_UnityEngine_Collision_* CollisionStayEvent;
    struct Action_1_UnityEngine_Collision_* CollisionExitEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionEventHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollisionEventHandler__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_Collision_.h>
#endif
#undef IL2CPP_STRUCT_CollisionEventHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionEventHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollisionEventHandler__Fields_FWDDECL)
#include <Modloader/app/structs/CollisionEventHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionEventHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
