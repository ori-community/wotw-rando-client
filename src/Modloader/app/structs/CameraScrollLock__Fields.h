#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraScrollLock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraScrollLock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraScrollLock__Fields_DEFINED)
#include <Modloader/app/structs/CameraScrollLock_ScrollLockMode__Enum.h>
#include <Modloader/app/structs/CameraScrollLock_Type__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_CameraScrollLock_ScrollLockMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_CameraScrollLock_Type__Enum_DEFINED)
#define IL2CPP_STRUCT_CameraScrollLock__Fields_DEFINED
struct GameObject;
struct AnimationCurve;
struct CameraScrollLock__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Fader;
    bool UseFader;
    struct AnimationCurve* ScrollLockSmooth;
    bool UseScrollLockSmooth;
    bool ShouldCreateCheckpoint;
    struct Vector3 _ScrollCenter_k__BackingField;
    struct Vector3 _HalfScrollSize_k__BackingField;
    float WideScreenAdjustment;
    bool Dynamic;
    CameraScrollLock_ScrollLockMode__Enum LockMode;

    struct Rect m_boundingRect;
    bool m_boundingRectCalculated;
    CameraScrollLock_Type__Enum m_scrollType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraScrollLock__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraScrollLock__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_CameraScrollLock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraScrollLock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraScrollLock__Fields_FWDDECL)
#include <Modloader/app/structs/CameraScrollLock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraScrollLock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
