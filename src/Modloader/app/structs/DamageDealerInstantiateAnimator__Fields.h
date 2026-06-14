#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageDealerInstantiateAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageDealerInstantiateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDealerInstantiateAnimator__Fields_DEFINED)
#include <Modloader/app/structs/InstantiateAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_InstantiateAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageDealerInstantiateAnimator__Fields_DEFINED
struct Transform;
struct MoonBool;
struct MoonFloat;
struct DamageDealerInstantiateAnimator__Fields {
    struct InstantiateAnimator__Fields _;
    struct Transform* DamagePositionCenter;
    struct Transform* Parent;
    struct MoonBool* Active;
    bool OverrideDamageAmount;
    struct MoonFloat* DamageAmount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageDealerInstantiateAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageDealerInstantiateAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DamageDealerInstantiateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDealerInstantiateAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageDealerInstantiateAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/DamageDealerInstantiateAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageDealerInstantiateAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
