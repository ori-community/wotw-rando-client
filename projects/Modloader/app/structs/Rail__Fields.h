#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rail__Fields_DEFINED)
#include <Modloader/app/structs/GravityToGroundSurface__Fields.h>
#include <Modloader/app/structs/RailType__Enum.h>
#if defined(IL2CPP_STRUCT_GravityToGroundSurface__Fields_DEFINED) && defined(IL2CPP_STRUCT_RailType__Enum_DEFINED)
#define IL2CPP_STRUCT_Rail__Fields_DEFINED
struct Renderer;
struct Collider;
struct Dictionary_2_Cart_System_Single_;
struct DamageDealer;
struct Rail__Fields {
    struct GravityToGroundSurface__Fields _;
    bool StartActivated;
    RailType__Enum RailType;

    bool m_activated;
    float MaxWidth;
    bool AllowFlipping;
    struct Renderer* m_renderer;
    struct Collider* m_collider;
    struct Dictionary_2_Cart_System_Single_* m_ignoredCartColliders;
    struct DamageDealer* m_damageDealer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rail__Fields_FWDDECL)
#define IL2CPP_STRUCT_Rail__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/Dictionary_2_Cart_System_Single_.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_Rail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Rail__Fields_FWDDECL)
#include <Modloader/app/structs/Rail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
