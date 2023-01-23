#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/WeaponJoint__Enum.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_WeaponJoint__Enum_DEFINED)
#define IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_DEFINED
struct Transform;
struct WeaponPreviewAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct Transform* WeaponRoot;
    WeaponJoint__Enum AttachTo;

    struct Transform* m_attachedJoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponPreviewAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponPreviewAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponPreviewAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
