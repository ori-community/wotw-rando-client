#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindArea__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindArea__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_WindArea__Fields_DEFINED
struct Transform;
struct AnimationCurve;
struct WindArea__Fields {
    struct MonoBehaviour__Fields _;
    bool RequiresWindRestored;
    struct Transform* _Transform_k__BackingField;
    float Speed;
    float HorizontalAcceleration;
    float VerticalAcceleration;
    struct AnimationCurve* HorizontalAccelerationOverSpeed;
    struct AnimationCurve* VerticalAccelerationOverSpeed;
    bool CancelGravity;
    bool _IsOverlapping_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindArea__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindArea__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_WindArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindArea__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindArea__Fields_FWDDECL)
#include <Modloader/app/structs/WindArea__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindArea__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
