#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsMaterialManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsMaterialManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsMaterialManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PhysicsMaterialManager__Fields_DEFINED
struct PhysicMaterial;
struct SurfaceToWwiseSwitchData;
struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_;
struct HashSet_1_UnityEngine_PhysicMaterial_;
struct PhysicsMaterialManager__Fields {
    struct MonoBehaviour__Fields _;
    struct PhysicMaterial* Wood;
    struct PhysicMaterial* Grass;
    struct PhysicMaterial* Water;
    struct PhysicMaterial* Rock;
    struct PhysicMaterial* Ice;
    struct PhysicMaterial* RollingRock;
    struct PhysicMaterial* PushableBlockMoving;
    struct PhysicMaterial* Mushroom;
    struct PhysicMaterial* Sand;
    struct PhysicMaterial* LightDarkPlatform;
    struct PhysicMaterial* MovingLightDarkPlatform;
    struct PhysicMaterial* DiggableSand;
    struct PhysicMaterial* Ceramic;
    struct PhysicMaterial* Snow;
    struct PhysicMaterial* DiggableSnow;
    struct PhysicMaterial* RockSnow;
    struct PhysicMaterial* WoodSnow;
    struct PhysicMaterial* Insect;
    struct PhysicMaterial* LagoonMoss;
    struct PhysicMaterial* Bone;
    struct PhysicMaterial* SandPlatform;
    struct PhysicMaterial* Ash;
    struct PhysicMaterial* Metal;
    struct PhysicMaterial* FrogTongue;
    struct PhysicMaterial* Plank;
    struct PhysicMaterial* Moss;
    struct PhysicMaterial* RopeBridge;
    struct SurfaceToWwiseSwitchData* SurfaceToWwiseSwitchData;
    struct Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_* m_physicsToMaterial;
    struct HashSet_1_UnityEngine_PhysicMaterial_* m_unsetMaterialsLogged;
    struct Vector3 m_prevSoundHostPosition;
    int32_t m_distanceUpdateCooldownCounter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsMaterialManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsMaterialManager__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UnityEngine_PhysicMaterial_SurfaceMaterialType_.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_PhysicMaterial_.h>
#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/SurfaceToWwiseSwitchData.h>
#endif
#undef IL2CPP_STRUCT_PhysicsMaterialManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsMaterialManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsMaterialManager__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsMaterialManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsMaterialManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
