#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraShakeLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraShakeLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_CameraShakeLogic__Fields_DEFINED
struct Transform;
struct CameraShakeLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Target;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraShakeLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraShakeLogic__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraShakeLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraShakeLogic__Fields_FWDDECL)
#include <Modloader/app/structs/CameraShakeLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraShakeLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
