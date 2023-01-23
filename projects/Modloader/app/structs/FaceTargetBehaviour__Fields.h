#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaceTargetBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaceTargetBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaceTargetBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_FaceTargetBehaviour__Fields_DEFINED
struct ILocomotionTurningHandler;
struct FaceTargetBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    struct ILocomotionTurningHandler* m_turningHandler;
    float m_facingDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaceTargetBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_FaceTargetBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#endif
#undef IL2CPP_STRUCT_FaceTargetBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaceTargetBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FaceTargetBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/FaceTargetBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaceTargetBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
