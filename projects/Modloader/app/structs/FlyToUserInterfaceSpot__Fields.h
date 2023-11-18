#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_DEFINED
struct AnimationCurve;
struct Transform;
struct FlyToUserInterfaceSpot__Fields {
    struct Suspendable__Fields _;
    struct Vector2 ScreenPosition;
    float Duration;
    struct AnimationCurve* TimeCurve;
    struct Vector3 m_startPosition;
    struct Transform* m_transform;
    float m_time;
    struct Vector2 BiezerIn;
    struct Vector2 BiezerOut;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlyToUserInterfaceSpot__Fields_FWDDECL)
#include <Modloader/app/structs/FlyToUserInterfaceSpot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlyToUserInterfaceSpot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
