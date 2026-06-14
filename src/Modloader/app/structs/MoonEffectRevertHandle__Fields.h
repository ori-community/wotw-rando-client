#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectRevertHandle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectRevertHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectRevertHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonEffectRevertHandle__Fields_DEFINED
struct Transform;
struct List_1_UnityEngine_Transform_;
struct HashSet_1_UnityEngine_ParticleSystem_;
struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_;
struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_;
struct __declspec(align(8)) MoonEffectRevertHandle__Fields {
    struct Transform* Root;
    struct List_1_UnityEngine_Transform_* Children;
    struct HashSet_1_UnityEngine_ParticleSystem_* ParticlesWithOriginalSpeedStored;
    struct List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_* m_logic;
    struct List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_* m_revertableData;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectRevertHandle__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectRevertHandle__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/List_1_Moon_EffectsFramework_IRevertMoonEffectLogic_.h>
#include <Modloader/app/structs/List_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MoonEffectRevertHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectRevertHandle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectRevertHandle__Fields_FWDDECL)
#include <Modloader/app/structs/MoonEffectRevertHandle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectRevertHandle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
