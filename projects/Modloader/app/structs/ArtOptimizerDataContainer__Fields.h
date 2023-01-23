#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_DEFINED
struct List_1_System_Int32_;
struct List_1_System_String_;
struct ArtOptimizationDataModel;
struct Dictionary_2_UnityEngine_GameObject_System_Int32_;
struct ArtOptimizerDataContainer__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_System_Int32_* IgnoredObjectIds;
    bool IgnoreModifiers;
    struct List_1_System_String_* Modifiers;
    float m_objectEnergyLimit;
    float m_modifiersEnergyLimit;
    float AnimationModifierBoost;
    float CenterLayerBoost;
    struct ArtOptimizationDataModel* Data;
    float m_cachedObjectsEnergyLimit;
    float m_cachedModifiersEnergyLimit;
    struct Dictionary_2_UnityEngine_GameObject_System_Int32_* m_fileIdsCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_FWDDECL
#include <Modloader/app/structs/ArtOptimizationDataModel.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizerDataContainer__Fields_FWDDECL)
#include <Modloader/app/structs/ArtOptimizerDataContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizerDataContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
