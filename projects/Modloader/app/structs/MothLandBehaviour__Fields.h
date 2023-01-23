#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothLandBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothLandBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothLandBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_MothLandBehaviour__Fields_DEFINED
struct MothEnemy;
struct MothLandBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    float _LandRadius_k__BackingField;
    struct LayerMask LandLayer;
    struct MothEnemy* m_mothEnemy;
    struct Vector2 m_pointToLand;
    struct Vector2 m_pointToLandNormal;
    struct RaycastHit m_hit;
    bool m_spotFound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MothLandBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MothLandBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MothEnemy.h>
#endif
#undef IL2CPP_STRUCT_MothLandBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothLandBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MothLandBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MothLandBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothLandBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
