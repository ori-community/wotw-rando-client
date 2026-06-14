#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartDamageCheckAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartDamageCheckAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartDamageCheckAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CartDamageCheckAction__Fields_DEFINED
struct Cart;
struct Transform;
struct CartDamageCheckAction__Fields {
    struct ActionMethod__Fields _;
    struct Cart* Cart;
    struct LayerMask DamageSurfaceMask;
    int32_t AmoutOfHorizontalRays;
    int32_t AmoutOfVerticalRays;
    float RayLenght;
    struct Transform* m_transform;
    struct RaycastHit m_hit;
    float m_horizontalRayStep;
    float m_verticalRayStep;
    struct Vector2 m_rayOrigin;
    struct Vector2 m_bottonRightBoundingBox;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartDamageCheckAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartDamageCheckAction__Fields_FWDDECL
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CartDamageCheckAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartDamageCheckAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartDamageCheckAction__Fields_FWDDECL)
#include <Modloader/app/structs/CartDamageCheckAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartDamageCheckAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
