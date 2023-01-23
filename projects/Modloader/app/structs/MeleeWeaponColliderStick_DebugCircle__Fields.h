#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponColliderStick_DebugCircle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponColliderStick_DebugCircle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponColliderStick_DebugCircle__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponColliderStick_DebugCircle__Fields_DEFINED
struct Transform;
struct Renderer;
struct __declspec(align(8)) MeleeWeaponColliderStick_DebugCircle__Fields {
    struct Transform* Transform;
    struct Renderer* Renderer;
    int32_t ID;
};
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponColliderStick_DebugCircle__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponColliderStick_DebugCircle__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponColliderStick_DebugCircle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponColliderStick_DebugCircle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponColliderStick_DebugCircle__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponColliderStick_DebugCircle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponColliderStick_DebugCircle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
