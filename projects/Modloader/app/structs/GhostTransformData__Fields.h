#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostTransformData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostTransformData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTransformData__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GhostTransformData__Fields_DEFINED
struct __declspec(align(8)) GhostTransformData__Fields {
    struct Vector3 m_position;
    bool m_faceLeft;
    float m_feetAngle;
    bool _Executed_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostTransformData__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostTransformData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GhostTransformData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTransformData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostTransformData__Fields_FWDDECL)
#include <Modloader/app/structs/GhostTransformData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostTransformData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
