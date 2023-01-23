#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Spear__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Spear__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spear__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Spear__Fields_DEFINED
struct GameObject;
struct MoonTrail__Array;
struct Transform;
struct Spear__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* TrailPrefab;
    struct MoonTrail__Array* m_trails;
    struct Transform* m_trailTransform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Spear__Fields_FWDDECL)
#define IL2CPP_STRUCT_Spear__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTrail__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Spear__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spear__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Spear__Fields_FWDDECL)
#include <Modloader/app/structs/Spear__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Spear__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
