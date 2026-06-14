#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#if defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED)
#define IL2CPP_STRUCT_SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields_DEFINED
struct Object;
struct Func_2_Object_UnityEngine_GameObject_;
struct Transform;
struct String;
struct ParticleSystem;
struct Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_;
struct HashSet_1_SurfaceMaterialType_;
struct __declspec(align(8)) SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields {
    struct Object* m_effectMap;
    struct Func_2_Object_UnityEngine_GameObject_* m_getEffectsPrefab;
    struct Transform* m_vfxHodler;
    struct String* m_stateName;
    struct ParticleSystem* m_currentlyPlayingEffect;
    SurfaceMaterialType__Enum m_currentlyPlayingEffectSurface;

    struct Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_* m_effects;
    struct HashSet_1_SurfaceMaterialType_* m_customSurfaces;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/Func_2_Object_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/HashSet_1_SurfaceMaterialType_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceTypeVFXHandler_2_System_Object_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
