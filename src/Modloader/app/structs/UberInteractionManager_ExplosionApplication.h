#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionManager_ExplosionApplication_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionManager_ExplosionApplication_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_ExplosionApplication_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_UberInteractionManager_ExplosionApplication_DEFINED
struct IInteractable;
struct UberInteractionManager_ExplosionApplication {
    float Time;
    struct IInteractable* Apply;
    struct Vector4 Strength;
    struct Vector3 Pos;
    struct Vector3 Velocity;
    bool ForcePlay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionManager_ExplosionApplication_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionManager_ExplosionApplication_FWDDECL
#include <Modloader/app/structs/IInteractable.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionManager_ExplosionApplication_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_ExplosionApplication_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionManager_ExplosionApplication_FWDDECL)
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplication.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplication.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
