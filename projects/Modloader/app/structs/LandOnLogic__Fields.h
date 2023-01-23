#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LandOnLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LandOnLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnLogic__Fields_DEFINED)
#include <Modloader/app/structs/LandOnState__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LandOnState__Enum_DEFINED)
#define IL2CPP_STRUCT_LandOnLogic__Fields_DEFINED
struct LandOnAnimator;
struct OrbSpawner;
struct LandOnLogic__Fields {
    struct MonoBehaviour__Fields _;
    float RespawnTime;
    float Height;
    float StopDecelerationMultiplier;
    struct LandOnAnimator* Animator;
    LandOnState__Enum m_state;

    struct OrbSpawner* m_orbSpawner;
    float m_timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LandOnLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_LandOnLogic__Fields_FWDDECL
#include <Modloader/app/structs/LandOnAnimator.h>
#include <Modloader/app/structs/OrbSpawner.h>
#endif
#undef IL2CPP_STRUCT_LandOnLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LandOnLogic__Fields_FWDDECL)
#include <Modloader/app/structs/LandOnLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LandOnLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
