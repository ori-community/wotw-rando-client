#include <Il2CppModLoader/app/types/CompressedLightDirectionMap.h>
#include <Il2CppModLoader/app/types/EnvironmentLight.h>
#include <Il2CppModLoader/app/types/EnvironmentLightTexture.h>
#include <Il2CppModLoader/app/types/EnvironmentLightingManager.h>
#include <Il2CppModLoader/app/types/EnvironmentLightingModifier.h>
#include <Il2CppModLoader/app/types/GodRayModifier.h>
#include <Il2CppModLoader/app/types/GodRayModifier_CullingCategoryManager.h>
#include <Il2CppModLoader/app/types/IInteractable.h>
#include <Il2CppModLoader/app/types/IInteractable__Array.h>
#include <Il2CppModLoader/app/types/ITurbulenceInfluencer.h>
#include <Il2CppModLoader/app/types/IUberAtlasExternal.h>
#include <Il2CppModLoader/app/types/Int32__Array_1.h>
#include <Il2CppModLoader/app/types/InteractionLightModifier.h>
#include <Il2CppModLoader/app/types/InteractionLightModifier_GetKeywordsForShader_d_10.h>
#include <Il2CppModLoader/app/types/InteractionPunchModifier.h>
#include <Il2CppModLoader/app/types/InteractionPunchModifier_GetKeywordsForShader_d_12.h>
#include <Il2CppModLoader/app/types/InteractionRotationModifier.h>
#include <Il2CppModLoader/app/types/InteractionRotationModifier_GetKeywordsForShader_d_18.h>
#include <Il2CppModLoader/app/types/LightCullingSystem_LightCullingConfigPerType__Array.h>
#include <Il2CppModLoader/app/types/LightDirectionMapProperty.h>
#include <Il2CppModLoader/app/types/LightPriority.h>
#include <Il2CppModLoader/app/types/MaskDissolveModifier_GetKeywordsForShader_d_11.h>
#include <Il2CppModLoader/app/types/MeshTrailModifier.h>
#include <Il2CppModLoader/app/types/MultiplyLayerModifierManager.h>
#include <Il2CppModLoader/app/types/PositionTurbulence_GenericTurbulence.h>
#include <Il2CppModLoader/app/types/PrefabAreaData.h>
#include <Il2CppModLoader/app/types/PrefabAreaData__Array.h>
#include <Il2CppModLoader/app/types/Queue_1_UberWaterControl_ImpactBuf___Array.h>
#include <Il2CppModLoader/app/types/SandTrailModifier_GetKeywordsForShader_d_4.h>
#include <Il2CppModLoader/app/types/ShaderAnimationTimeDriver.h>
#include <Il2CppModLoader/app/types/TextureGuid.h>
#include <Il2CppModLoader/app/types/TurbulenceManager.h>
#include <Il2CppModLoader/app/types/TurbulenceManagerBinder.h>
#include <Il2CppModLoader/app/types/TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5.h>
#include <Il2CppModLoader/app/types/TurbulenceScaleModifier_GetKeywordsForShader_d_6.h>
#include <Il2CppModLoader/app/types/TurbulenceStateDefinition_TurbulenceState.h>
#include <Il2CppModLoader/app/types/TurbulenceTranslationModifier.h>
#include <Il2CppModLoader/app/types/TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8.h>
#include <Il2CppModLoader/app/types/TurbulenceTranslationModifier_GetKeywordsForShader_d_9.h>
#include <Il2CppModLoader/app/types/UberAtlasExclusions_SceneExclusion.h>
#include <Il2CppModLoader/app/types/UberAtlasPrefabAreaDictionary.h>
#include <Il2CppModLoader/app/types/UberAtlasPrefabAreas_c.h>
#include <Il2CppModLoader/app/types/UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum.h>
#include <Il2CppModLoader/app/types/UberInteractionManager.h>
#include <Il2CppModLoader/app/types/UberInteractionManagerAccelerator.h>
#include <Il2CppModLoader/app/types/UberInteractionManagerAccelerator_Cell.h>
#include <Il2CppModLoader/app/types/UberInteractionManagerAccelerator_CellInteractionData__Array.h>
#include <Il2CppModLoader/app/types/UberInteractionManagerAccelerator_Cell__Array.h>
#include <Il2CppModLoader/app/types/UberInteractionManager_ActorInfo.h>
#include <Il2CppModLoader/app/types/UberInteractionManager_ExplosionApplication.h>
#include <Il2CppModLoader/app/types/UberInteractionManager_ExplosionApplicationComparer.h>
#include <Il2CppModLoader/app/types/UberInteractionManager_ExplosionApplication__Array.h>
#include <Il2CppModLoader/app/types/UberInteractionManager_ExplosionApplications.h>
#include <Il2CppModLoader/app/types/UberInteractionManager_InteractionCurveType__Enum.h>
#include <Il2CppModLoader/app/types/UberInteractionManager_InteractionInfo__Array.h>
#include <Il2CppModLoader/app/types/UberInteractionManager_PropertyIDCache.h>
#include <Il2CppModLoader/app/types/UberInteractionModifier.h>
#include <Il2CppModLoader/app/types/UberInteractionModifier_GetBaseVertexTextureNames_d_66.h>
#include <Il2CppModLoader/app/types/UberInteractionModifier_GetKeywordsForShader_d_67.h>
#include <Il2CppModLoader/app/types/UberMotionBlurInterestZone.h>
#include <Il2CppModLoader/app/types/UberMotionBlurInterestZone_c.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_AnimationCurveDictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_BoolDictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_ColorDictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_FloatDictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_IntDictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_QuaternionDictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_ReferenceDictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_StringDictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_Vector2Dictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_Vector3Dictionary.h>
#include <Il2CppModLoader/app/types/UberPresetSerializedComponent_Vector4Dictionary.h>
#include <Il2CppModLoader/app/types/UberShaderAtlasUtilities.h>
#include <Il2CppModLoader/app/types/UberShaderCustomShaderBlockResult.h>
#include <Il2CppModLoader/app/types/UberShaderModifier_GetBaseVertexTextureNames_d_35.h>
#include <Il2CppModLoader/app/types/UberShaderMultiplyLayerColor.h>
#include <Il2CppModLoader/app/types/UberShaderProperties_TextureSuffixType__Enum.h>
#include <Il2CppModLoader/app/types/UberShaderRange.h>
#include <Il2CppModLoader/app/types/UberShaderRuntimeRenderOrder.h>
#include <Il2CppModLoader/app/types/UberShaderRuntimeUpdate.h>
#include <Il2CppModLoader/app/types/UberShaderTextureCube.h>
#include <Il2CppModLoader/app/types/UberShaderWorldHierarchyDictionary.h>
#include <Il2CppModLoader/app/types/UberSpawnManager.h>
#include <Il2CppModLoader/app/types/UberUIPostProcess.h>
#include <Il2CppModLoader/app/types/UberWaterControl.h>
#include <Il2CppModLoader/app/types/UberWaterControl_SplashInfo.h>
#include <Il2CppModLoader/app/types/UberWaterCross.h>
#include <Il2CppModLoader/app/types/UberWaterCross_CullingCategoryManager.h>
#include <Il2CppModLoader/app/types/UberWaterEdge.h>
#include <Il2CppModLoader/app/types/UberWaterEdge_CullingCategoryManager.h>
#include <Il2CppModLoader/app/types/UberWaterReflectionPlane.h>
#include <Il2CppModLoader/app/types/UberWaterReflectionView.h>
#include <Il2CppModLoader/app/types/UberWaterReflectionView_AutomaticGroup.h>
#include <Il2CppModLoader/app/types/UberWaterReflectionView_Group.h>
#include <Il2CppModLoader/app/types/UberWaterReflectionView_GroupViews.h>
#include <Il2CppModLoader/app/types/UberWaterTop.h>
#include <Il2CppModLoader/app/types/UberWaterTop_CullingCategoryManager.h>
#include <Il2CppModLoader/app/types/Vector2__Array__Array.h>
#include <Il2CppModLoader/app/types/VerletSkinningModifier.h>
#include <Il2CppModLoader/app/types/VoidUberShaderRebindService.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class** type_info = (::app::TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class**)(modloader::win::memory::resolve_rva(0x047320D0));
    }
    namespace TurbulenceScaleModifier_GetKeywordsForShader_d_6 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class** type_info = (::app::TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class**)(modloader::win::memory::resolve_rva(0x0476A248));
    }
    namespace TurbulenceTranslationModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceTranslationModifier__Class** type_info = (::app::TurbulenceTranslationModifier__Class**)(modloader::win::memory::resolve_rva(0x04702820));
    }
    namespace TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Class** type_info = (::app::TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Class**)(modloader::win::memory::resolve_rva(0x0475D4F0));
    }
    namespace TurbulenceTranslationModifier_GetKeywordsForShader_d_9 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class** type_info = (::app::TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class**)(modloader::win::memory::resolve_rva(0x047588D0));
    }
    namespace EnvironmentLightingModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnvironmentLightingModifier__Class** type_info = (::app::EnvironmentLightingModifier__Class**)(modloader::win::memory::resolve_rva(0x0471B678));
    }
    namespace EnvironmentLight {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnvironmentLight__Class** type_info = (::app::EnvironmentLight__Class**)(modloader::win::memory::resolve_rva(0x0476B7D0));
    }
    namespace EnvironmentLightTexture {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnvironmentLightTexture__Class** type_info = (::app::EnvironmentLightTexture__Class**)(modloader::win::memory::resolve_rva(0x0477D7F8));
    }
    namespace Int32__Array_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Int32__Array_1__Class** type_info = (::app::Int32__Array_1__Class**)(modloader::win::memory::resolve_rva(0x0476D9D8));
    }
    namespace UberInteractionManager_InteractionCurveType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManager_InteractionCurveType__Enum__Class** type_info = (::app::UberInteractionManager_InteractionCurveType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047442E8));
    }
    namespace UberInteractionModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionModifier__Class** type_info = (::app::UberInteractionModifier__Class**)(modloader::win::memory::resolve_rva(0x047649B0));
    }
    namespace InteractionLightModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionLightModifier__Class** type_info = (::app::InteractionLightModifier__Class**)(modloader::win::memory::resolve_rva(0x04719EC0));
    }
    namespace UberWaterControl {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterControl__Class** type_info = (::app::UberWaterControl__Class**)(modloader::win::memory::resolve_rva(0x04749768));
    }
    namespace UberWaterControl_SplashInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterControl_SplashInfo__Class** type_info = (::app::UberWaterControl_SplashInfo__Class**)(modloader::win::memory::resolve_rva(0x04757798));
    }
    namespace Queue_1_UberWaterControl_ImpactBuf___Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Queue_1_UberWaterControl_ImpactBuf___Array__Class** type_info = (::app::Queue_1_UberWaterControl_ImpactBuf___Array__Class**)(modloader::win::memory::resolve_rva(0x04736D58));
    }
    namespace UberWaterTop {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterTop__Class** type_info = (::app::UberWaterTop__Class**)(modloader::win::memory::resolve_rva(0x0477AEA8));
    }
    namespace UberWaterReflectionView_GroupViews {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterReflectionView_GroupViews__Class** type_info = (::app::UberWaterReflectionView_GroupViews__Class**)(modloader::win::memory::resolve_rva(0x04753EA0));
    }
    namespace UberWaterReflectionView_Group {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterReflectionView_Group__Class** type_info = (::app::UberWaterReflectionView_Group__Class**)(modloader::win::memory::resolve_rva(0x04724860));
    }
    namespace UberWaterReflectionPlane {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterReflectionPlane__Class** type_info = (::app::UberWaterReflectionPlane__Class**)(modloader::win::memory::resolve_rva(0x04743678));
    }
    namespace UberWaterReflectionView_AutomaticGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterReflectionView_AutomaticGroup__Class** type_info = (::app::UberWaterReflectionView_AutomaticGroup__Class**)(modloader::win::memory::resolve_rva(0x04724D70));
    }
    namespace UberWaterTop_CullingCategoryManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterTop_CullingCategoryManager__Class** type_info = (::app::UberWaterTop_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0475DAC8));
    }
    namespace UberInteractionManager_PropertyIDCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManager_PropertyIDCache__Class** type_info = (::app::UberInteractionManager_PropertyIDCache__Class**)(modloader::win::memory::resolve_rva(0x04782020));
    }
    namespace InteractionLightModifier_GetKeywordsForShader_d_10 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionLightModifier_GetKeywordsForShader_d_10__Class** type_info = (::app::InteractionLightModifier_GetKeywordsForShader_d_10__Class**)(modloader::win::memory::resolve_rva(0x04739C20));
    }
    namespace InteractionPunchModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionPunchModifier__Class** type_info = (::app::InteractionPunchModifier__Class**)(modloader::win::memory::resolve_rva(0x04772058));
    }
    namespace InteractionPunchModifier_GetKeywordsForShader_d_12 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionPunchModifier_GetKeywordsForShader_d_12__Class** type_info = (::app::InteractionPunchModifier_GetKeywordsForShader_d_12__Class**)(modloader::win::memory::resolve_rva(0x047485C0));
    }
    namespace InteractionRotationModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionRotationModifier__Class** type_info = (::app::InteractionRotationModifier__Class**)(modloader::win::memory::resolve_rva(0x0475E588));
    }
    namespace InteractionRotationModifier_GetKeywordsForShader_d_18 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InteractionRotationModifier_GetKeywordsForShader_d_18__Class** type_info = (::app::InteractionRotationModifier_GetKeywordsForShader_d_18__Class**)(modloader::win::memory::resolve_rva(0x047849B8));
    }
    namespace MaskDissolveModifier_GetKeywordsForShader_d_11 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class** type_info = (::app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class**)(modloader::win::memory::resolve_rva(0x0472A820));
    }
    namespace UberShaderTextureCube {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderTextureCube__Class** type_info = (::app::UberShaderTextureCube__Class**)(modloader::win::memory::resolve_rva(0x0472DF18));
    }
    namespace UberShaderMultiplyLayerColor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderMultiplyLayerColor__Class** type_info = (::app::UberShaderMultiplyLayerColor__Class**)(modloader::win::memory::resolve_rva(0x0474ACA0));
    }
    namespace GodRayModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GodRayModifier__Class** type_info = (::app::GodRayModifier__Class**)(modloader::win::memory::resolve_rva(0x04702118));
    }
    namespace GodRayModifier_CullingCategoryManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GodRayModifier_CullingCategoryManager__Class** type_info = (::app::GodRayModifier_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0470ED98));
    }
    namespace LightDirectionMapProperty {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightDirectionMapProperty__Class** type_info = (::app::LightDirectionMapProperty__Class**)(modloader::win::memory::resolve_rva(0x04731FC0));
    }
    namespace CompressedLightDirectionMap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompressedLightDirectionMap__Class** type_info = (::app::CompressedLightDirectionMap__Class**)(modloader::win::memory::resolve_rva(0x04745F58));
    }
    namespace TextureGuid {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TextureGuid__Class** type_info = (::app::TextureGuid__Class**)(modloader::win::memory::resolve_rva(0x04742238));
    }
    namespace LightCullingSystem_LightCullingConfigPerType__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCullingSystem_LightCullingConfigPerType__Array__Class** type_info = (::app::LightCullingSystem_LightCullingConfigPerType__Array__Class**)(modloader::win::memory::resolve_rva(0x04720570));
    }
    namespace LightPriority {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightPriority__Class** type_info = (::app::LightPriority__Class**)(modloader::win::memory::resolve_rva(0x047151D0));
    }
    namespace MeshTrailModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeshTrailModifier__Class** type_info = (::app::MeshTrailModifier__Class**)(modloader::win::memory::resolve_rva(0x0477FBE0));
    }
    namespace UberShaderRange {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderRange__Class** type_info = (::app::UberShaderRange__Class**)(modloader::win::memory::resolve_rva(0x047180C0));
    }
    namespace MultiplyLayerModifierManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MultiplyLayerModifierManager__Class** type_info = (::app::MultiplyLayerModifierManager__Class**)(modloader::win::memory::resolve_rva(0x04765E28));
    }
    namespace SandTrailModifier_GetKeywordsForShader_d_4 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SandTrailModifier_GetKeywordsForShader_d_4__Class** type_info = (::app::SandTrailModifier_GetKeywordsForShader_d_4__Class**)(modloader::win::memory::resolve_rva(0x04718860));
    }
    namespace VerletSkinningModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VerletSkinningModifier__Class** type_info = (::app::VerletSkinningModifier__Class**)(modloader::win::memory::resolve_rva(0x04708A90));
    }
    namespace PrefabAreaData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PrefabAreaData__Class** type_info = (::app::PrefabAreaData__Class**)(modloader::win::memory::resolve_rva(0x0470ACD8));
    }
    namespace UberAtlasPrefabAreaDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberAtlasPrefabAreaDictionary__Class** type_info = (::app::UberAtlasPrefabAreaDictionary__Class**)(modloader::win::memory::resolve_rva(0x04772948));
    }
    namespace PrefabAreaData__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PrefabAreaData__Array__Class** type_info = (::app::PrefabAreaData__Array__Class**)(modloader::win::memory::resolve_rva(0x0478DD60));
    }
    namespace UberAtlasPrefabAreas_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberAtlasPrefabAreas_c__Class** type_info = (::app::UberAtlasPrefabAreas_c__Class**)(modloader::win::memory::resolve_rva(0x047569A8));
    }
    namespace UberAtlasExclusions_SceneExclusion {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberAtlasExclusions_SceneExclusion__Class** type_info = (::app::UberAtlasExclusions_SceneExclusion__Class**)(modloader::win::memory::resolve_rva(0x0474D048));
    }
    namespace UberShaderAtlasUtilities {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderAtlasUtilities__Class** type_info = (::app::UberShaderAtlasUtilities__Class**)(modloader::win::memory::resolve_rva(0x0475F878));
    }
    namespace Vector2__Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Vector2__Array__Array__Class** type_info = (::app::Vector2__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04727258));
    }
    namespace UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class** type_info = (::app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477DA68));
    }
    namespace UberShaderRuntimeUpdate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderRuntimeUpdate__Class** type_info = (::app::UberShaderRuntimeUpdate__Class**)(modloader::win::memory::resolve_rva(0x0472D760));
    }
    namespace UberSpawnManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberSpawnManager__Class** type_info = (::app::UberSpawnManager__Class**)(modloader::win::memory::resolve_rva(0x0476C600));
    }
    namespace UberShaderCustomShaderBlockResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderCustomShaderBlockResult__Class** type_info = (::app::UberShaderCustomShaderBlockResult__Class**)(modloader::win::memory::resolve_rva(0x04768658));
    }
    namespace EnvironmentLightingManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnvironmentLightingManager__Class** type_info = (::app::EnvironmentLightingManager__Class**)(modloader::win::memory::resolve_rva(0x0477C950));
    }
    namespace UberInteractionManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManager__Class** type_info = (::app::UberInteractionManager__Class**)(modloader::win::memory::resolve_rva(0x04775448));
    }
    namespace IInteractable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IInteractable__Class** type_info = (::app::IInteractable__Class**)(modloader::win::memory::resolve_rva(0x047886E0));
    }
    namespace IInteractable__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IInteractable__Array__Class** type_info = (::app::IInteractable__Array__Class**)(modloader::win::memory::resolve_rva(0x04780460));
    }
    namespace UberInteractionManager_InteractionInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManager_InteractionInfo__Array__Class** type_info = (::app::UberInteractionManager_InteractionInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04775FB8));
    }
    namespace UberInteractionManagerAccelerator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManagerAccelerator__Class** type_info = (::app::UberInteractionManagerAccelerator__Class**)(modloader::win::memory::resolve_rva(0x047793B8));
    }
    namespace UberInteractionManagerAccelerator_Cell {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManagerAccelerator_Cell__Class** type_info = (::app::UberInteractionManagerAccelerator_Cell__Class**)(modloader::win::memory::resolve_rva(0x0475E0D0));
    }
    namespace UberInteractionManagerAccelerator_CellInteractionData__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManagerAccelerator_CellInteractionData__Array__Class** type_info = (::app::UberInteractionManagerAccelerator_CellInteractionData__Array__Class**)(modloader::win::memory::resolve_rva(0x04701470));
    }
    namespace UberInteractionManagerAccelerator_Cell__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManagerAccelerator_Cell__Array__Class** type_info = (::app::UberInteractionManagerAccelerator_Cell__Array__Class**)(modloader::win::memory::resolve_rva(0x04750900));
    }
    namespace UberInteractionManager_ExplosionApplications {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManager_ExplosionApplications__Class** type_info = (::app::UberInteractionManager_ExplosionApplications__Class**)(modloader::win::memory::resolve_rva(0x0470A258));
    }
    namespace UberInteractionManager_ExplosionApplication {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManager_ExplosionApplication__Class** type_info = (::app::UberInteractionManager_ExplosionApplication__Class**)(modloader::win::memory::resolve_rva(0x0473B818));
    }
    namespace UberInteractionManager_ExplosionApplication__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManager_ExplosionApplication__Array__Class** type_info = (::app::UberInteractionManager_ExplosionApplication__Array__Class**)(modloader::win::memory::resolve_rva(0x04705FE0));
    }
    namespace UberInteractionManager_ActorInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManager_ActorInfo__Class** type_info = (::app::UberInteractionManager_ActorInfo__Class**)(modloader::win::memory::resolve_rva(0x0470C238));
    }
    namespace ShaderAnimationTimeDriver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderAnimationTimeDriver__Class** type_info = (::app::ShaderAnimationTimeDriver__Class**)(modloader::win::memory::resolve_rva(0x0472AD80));
    }
    namespace UberInteractionManager_ExplosionApplicationComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionManager_ExplosionApplicationComparer__Class** type_info = (::app::UberInteractionManager_ExplosionApplicationComparer__Class**)(modloader::win::memory::resolve_rva(0x04729CC8));
    }
    namespace UberInteractionModifier_GetBaseVertexTextureNames_d_66 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionModifier_GetBaseVertexTextureNames_d_66__Class** type_info = (::app::UberInteractionModifier_GetBaseVertexTextureNames_d_66__Class**)(modloader::win::memory::resolve_rva(0x0478E0A8));
    }
    namespace UberInteractionModifier_GetKeywordsForShader_d_67 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberInteractionModifier_GetKeywordsForShader_d_67__Class** type_info = (::app::UberInteractionModifier_GetKeywordsForShader_d_67__Class**)(modloader::win::memory::resolve_rva(0x04771660));
    }
    namespace IUberAtlasExternal {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IUberAtlasExternal__Class** type_info = (::app::IUberAtlasExternal__Class**)(modloader::win::memory::resolve_rva(0x0476C098));
    }
    namespace UberShaderRuntimeRenderOrder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderRuntimeRenderOrder__Class** type_info = (::app::UberShaderRuntimeRenderOrder__Class**)(modloader::win::memory::resolve_rva(0x047783C8));
    }
    namespace UberShaderWorldHierarchyDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderWorldHierarchyDictionary__Class** type_info = (::app::UberShaderWorldHierarchyDictionary__Class**)(modloader::win::memory::resolve_rva(0x0470B8B0));
    }
    namespace PositionTurbulence_GenericTurbulence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PositionTurbulence_GenericTurbulence__Class** type_info = (::app::PositionTurbulence_GenericTurbulence__Class**)(modloader::win::memory::resolve_rva(0x04730200));
    }
    namespace TurbulenceManagerBinder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceManagerBinder__Class** type_info = (::app::TurbulenceManagerBinder__Class**)(modloader::win::memory::resolve_rva(0x04752C40));
    }
    namespace TurbulenceManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceManager__Class** type_info = (::app::TurbulenceManager__Class**)(modloader::win::memory::resolve_rva(0x0478DB70));
    }
    namespace ITurbulenceInfluencer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ITurbulenceInfluencer__Class** type_info = (::app::ITurbulenceInfluencer__Class**)(modloader::win::memory::resolve_rva(0x0472A0A8));
    }
    namespace TurbulenceStateDefinition_TurbulenceState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TurbulenceStateDefinition_TurbulenceState__Class** type_info = (::app::TurbulenceStateDefinition_TurbulenceState__Class**)(modloader::win::memory::resolve_rva(0x04786348));
    }
    namespace UberShaderProperties_TextureSuffixType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderProperties_TextureSuffixType__Enum__Class** type_info = (::app::UberShaderProperties_TextureSuffixType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04793DA8));
    }
    namespace VoidUberShaderRebindService {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VoidUberShaderRebindService__Class** type_info = (::app::VoidUberShaderRebindService__Class**)(modloader::win::memory::resolve_rva(0x0478DD78));
    }
    namespace UberShaderModifier_GetBaseVertexTextureNames_d_35 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class** type_info = (::app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class**)(modloader::win::memory::resolve_rva(0x04732310));
    }
    namespace UberMotionBlurInterestZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberMotionBlurInterestZone__Class** type_info = (::app::UberMotionBlurInterestZone__Class**)(modloader::win::memory::resolve_rva(0x04751CF8));
    }
    namespace UberMotionBlurInterestZone_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberMotionBlurInterestZone_c__Class** type_info = (::app::UberMotionBlurInterestZone_c__Class**)(modloader::win::memory::resolve_rva(0x0471CB60));
    }
    namespace UberUIPostProcess {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberUIPostProcess__Class** type_info = (::app::UberUIPostProcess__Class**)(modloader::win::memory::resolve_rva(0x04766868));
    }
    namespace UberPresetSerializedComponent_ReferenceDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_ReferenceDictionary__Class** type_info = (::app::UberPresetSerializedComponent_ReferenceDictionary__Class**)(modloader::win::memory::resolve_rva(0x04722598));
    }
    namespace UberPresetSerializedComponent_StringDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_StringDictionary__Class** type_info = (::app::UberPresetSerializedComponent_StringDictionary__Class**)(modloader::win::memory::resolve_rva(0x04756558));
    }
    namespace UberPresetSerializedComponent_FloatDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_FloatDictionary__Class** type_info = (::app::UberPresetSerializedComponent_FloatDictionary__Class**)(modloader::win::memory::resolve_rva(0x0472EE00));
    }
    namespace UberPresetSerializedComponent_IntDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_IntDictionary__Class** type_info = (::app::UberPresetSerializedComponent_IntDictionary__Class**)(modloader::win::memory::resolve_rva(0x04704990));
    }
    namespace UberPresetSerializedComponent_BoolDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_BoolDictionary__Class** type_info = (::app::UberPresetSerializedComponent_BoolDictionary__Class**)(modloader::win::memory::resolve_rva(0x0478BA80));
    }
    namespace UberPresetSerializedComponent_AnimationCurveDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_AnimationCurveDictionary__Class** type_info = (::app::UberPresetSerializedComponent_AnimationCurveDictionary__Class**)(modloader::win::memory::resolve_rva(0x04766FF0));
    }
    namespace UberPresetSerializedComponent_ColorDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_ColorDictionary__Class** type_info = (::app::UberPresetSerializedComponent_ColorDictionary__Class**)(modloader::win::memory::resolve_rva(0x04761D90));
    }
    namespace UberPresetSerializedComponent_QuaternionDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_QuaternionDictionary__Class** type_info = (::app::UberPresetSerializedComponent_QuaternionDictionary__Class**)(modloader::win::memory::resolve_rva(0x047552D0));
    }
    namespace UberPresetSerializedComponent_Vector2Dictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_Vector2Dictionary__Class** type_info = (::app::UberPresetSerializedComponent_Vector2Dictionary__Class**)(modloader::win::memory::resolve_rva(0x04740290));
    }
    namespace UberPresetSerializedComponent_Vector3Dictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_Vector3Dictionary__Class** type_info = (::app::UberPresetSerializedComponent_Vector3Dictionary__Class**)(modloader::win::memory::resolve_rva(0x0474BBD0));
    }
    namespace UberPresetSerializedComponent_Vector4Dictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPresetSerializedComponent_Vector4Dictionary__Class** type_info = (::app::UberPresetSerializedComponent_Vector4Dictionary__Class**)(modloader::win::memory::resolve_rva(0x0474E7F0));
    }
    namespace UberWaterCross {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterCross__Class** type_info = (::app::UberWaterCross__Class**)(modloader::win::memory::resolve_rva(0x04760690));
    }
    namespace UberWaterCross_CullingCategoryManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterCross_CullingCategoryManager__Class** type_info = (::app::UberWaterCross_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0471AF28));
    }
    namespace UberWaterEdge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterEdge__Class** type_info = (::app::UberWaterEdge__Class**)(modloader::win::memory::resolve_rva(0x047312F0));
    }
    namespace UberWaterEdge_CullingCategoryManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterEdge_CullingCategoryManager__Class** type_info = (::app::UberWaterEdge_CullingCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x0476D220));
    }
    namespace UberWaterReflectionView {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterReflectionView__Class** type_info = (::app::UberWaterReflectionView__Class**)(modloader::win::memory::resolve_rva(0x04776CC0));
    }
} // namespace app::classes::types
