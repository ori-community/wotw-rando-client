#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OccludeMotionVectors__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OccludeMotionVectors__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OccludeMotionVectors__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_OccludeMotionVectors__Fields_DEFINED
struct Material;
struct OccludeMotionVectors__Fields {
    struct MonoBehaviour__Fields _;
    struct Material* occludeMaterial;
    struct Material* m_occludeMat;
    float ownMotionScale;
    struct Vector3 dbgMotionVector;
    struct Vector3 m_prevPos;
    struct Vector3 ownMotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OccludeMotionVectors__Fields_FWDDECL)
#define IL2CPP_STRUCT_OccludeMotionVectors__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_OccludeMotionVectors__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OccludeMotionVectors__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OccludeMotionVectors__Fields_FWDDECL)
#include <Modloader/app/structs/OccludeMotionVectors__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OccludeMotionVectors__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
