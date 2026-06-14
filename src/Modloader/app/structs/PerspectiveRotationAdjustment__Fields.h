#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerspectiveRotationAdjustment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerspectiveRotationAdjustment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerspectiveRotationAdjustment__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PerspectiveRotationAdjustment__Fields_DEFINED
struct Transform;
struct PerspectiveRotationAdjustment__Fields {
    struct MonoBehaviour__Fields _;
    float AdjustmentWeight;
    bool PreserveZRotation;
    struct Transform* m_transform;
    float m_desiredWeight;
    float m_blendSpeed;
    bool m_initialized;
    float m_defaultWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerspectiveRotationAdjustment__Fields_FWDDECL)
#define IL2CPP_STRUCT_PerspectiveRotationAdjustment__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PerspectiveRotationAdjustment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerspectiveRotationAdjustment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PerspectiveRotationAdjustment__Fields_FWDDECL)
#include <Modloader/app/structs/PerspectiveRotationAdjustment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerspectiveRotationAdjustment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
