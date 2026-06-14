#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LandOnVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LandOnVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LandOnVisuals__Fields_DEFINED
struct GameObject;
struct Action_2_UnityEngine_GameObject_UnityEngine_Vector2_;
struct MoonTimeline;
struct LandOnVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Base;
    struct GameObject* Perishable;
    struct Action_2_UnityEngine_GameObject_UnityEngine_Vector2_* Break;
    struct MoonTimeline* OnDestroyTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LandOnVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_LandOnVisuals__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_UnityEngine_GameObject_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LandOnVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LandOnVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/LandOnVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LandOnVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
