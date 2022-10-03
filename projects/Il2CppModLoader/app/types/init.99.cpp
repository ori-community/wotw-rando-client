#include <Il2CppModLoader/app/types/Ambience_Processing.h>
#include <Il2CppModLoader/app/types/Attribute__Array__Array.h>
#include <Il2CppModLoader/app/types/EarlyZChildDebugger__Array.h>
#include <Il2CppModLoader/app/types/MoonProfilerManager_Recorders.h>
#include <Il2CppModLoader/app/types/NclConstants.h>
#include <Il2CppModLoader/app/types/NclUtilities.h>
#include <Il2CppModLoader/app/types/NegativeScaleFixer.h>
#include <Il2CppModLoader/app/types/NetConnectivityCheckerFactory.h>
#include <Il2CppModLoader/app/types/NightCrawlerBackAttackBranches__Enum.h>
#include <Il2CppModLoader/app/types/NightCrawlerChaseIntroBranches__Enum.h>
#include <Il2CppModLoader/app/types/NightCrawlerRetaliationBranches__Enum.h>
#include <Il2CppModLoader/app/types/Normalization.h>
#include <Il2CppModLoader/app/types/NormalizationTableUtil.h>
#include <Il2CppModLoader/app/types/NtlmSettings.h>
#include <Il2CppModLoader/app/types/OpCodeNames.h>
#include <Il2CppModLoader/app/types/Orbs_OrbDisplayText.h>
#include <Il2CppModLoader/app/types/P3D_Brush_SubtractiveBlend.h>
#include <Il2CppModLoader/app/types/P3D_Helper.h>
#include <Il2CppModLoader/app/types/ParameterizedStrings.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlBossEntity_AnimationDirections__Enum.h>
#include <Il2CppModLoader/app/types/PhraseRecognitionSystem.h>
#include <Il2CppModLoader/app/types/PhysicsUpdateHandlerManager_Temp.h>
#include <Il2CppModLoader/app/types/Platform.h>
#include <Il2CppModLoader/app/types/PlatformHelper.h>
#include <Il2CppModLoader/app/types/PlayFabDataAPI.h>
#include <Il2CppModLoader/app/types/PlayFabDeviceUtil.h>
#include <Il2CppModLoader/app/types/PlayFabEventsAPI.h>
#include <Il2CppModLoader/app/types/PlayFabIdfa.h>
#include <Il2CppModLoader/app/types/PlayFabProfilesAPI.h>
#include <Il2CppModLoader/app/types/PlayFabServerAPI.h>
#include <Il2CppModLoader/app/types/ReflectPropertyDescriptor__Array.h>
#include <Il2CppModLoader/app/types/Registry.h>
#include <Il2CppModLoader/app/types/RemoteAction.h>
#include <Il2CppModLoader/app/types/RemoteSettings.h>
#include <Il2CppModLoader/app/types/RenderPipelineManager.h>
#include <Il2CppModLoader/app/types/RenderTextureFormatSafe.h>
#include <Il2CppModLoader/app/types/RequestCacheManager.h>
#include <Il2CppModLoader/app/types/SDK.h>
#include <Il2CppModLoader/app/types/SceneFPSTest_ShaderID.h>
#include <Il2CppModLoader/app/types/SceneManager.h>
#include <Il2CppModLoader/app/types/ScenePreloading.h>
#include <Il2CppModLoader/app/types/ScenesManagerHelper.h>
#include <Il2CppModLoader/app/types/ScriptableRuntimeReflectionSystemSettings.h>
#include <Il2CppModLoader/app/types/SecurityBufferStruct.h>
#include <Il2CppModLoader/app/types/SendMouseEvents.h>
#include <Il2CppModLoader/app/types/SerializationEventsCache.h>
#include <Il2CppModLoader/app/types/ServerObjectSerializer.h>
#include <Il2CppModLoader/app/types/ShaderID_AtlasSpriteTexture.h>
#include <Il2CppModLoader/app/types/ShaderID_ColorAnimator.h>
#include <Il2CppModLoader/app/types/ShaderID_ContrastVignette.h>
#include <Il2CppModLoader/app/types/ShaderID_DistortionAnimator.h>
#include <Il2CppModLoader/app/types/ShaderID_GlobalAlphaCutoffMenuItem.h>
#include <Il2CppModLoader/app/types/ShaderID_HoldableRigidBody.h>
#include <Il2CppModLoader/app/types/ShaderID_MotionAbsorbCharacter.h>
#include <Il2CppModLoader/app/types/ShaderID_Negative.h>
#include <Il2CppModLoader/app/types/ShaderID_NightBerry.h>
#include <Il2CppModLoader/app/types/ShaderID_NightberryPlaceholder.h>
#include <Il2CppModLoader/app/types/ShaderID_Noise.h>
#include <Il2CppModLoader/app/types/ShaderID_NoiseAndGrain.h>
#include <Il2CppModLoader/app/types/ShaderID_NoiseEffect.h>
#include <Il2CppModLoader/app/types/ShaderID_OccludeMotionVectors.h>
#include <Il2CppModLoader/app/types/ShaderID_P3D_BrushPreview.h>
#include <Il2CppModLoader/app/types/ShaderID_P3D_TexturePreview.h>
#include <Il2CppModLoader/app/types/ShaderID_PerformanceTestManager.h>
#include <Il2CppModLoader/app/types/ShaderID_PhotoFilter.h>
#include <Il2CppModLoader/app/types/ShaderID_PixelMatrix.h>
#include <Il2CppModLoader/app/types/ShaderID_Pixelate.h>
#include <Il2CppModLoader/app/types/ShaderID_PostEffectsHelper.h>
#include <Il2CppModLoader/app/types/ShaderID_Posterize.h>
#include <Il2CppModLoader/app/types/ShaderID_RGBSplit.h>
#include <Il2CppModLoader/app/types/ShaderID_RadialBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_ReconstructionFilter.h>
#include <Il2CppModLoader/app/types/ShaderID_SCurveContrast.h>
#include <Il2CppModLoader/app/types/ShaderID_SMAA.h>
#include <Il2CppModLoader/app/types/ShaderID_SSAOEffect.h>
#include <Il2CppModLoader/app/types/ShaderID_SampleComparer.h>
#include <Il2CppModLoader/app/types/ShaderID_SceneScreenshot.h>
#include <Il2CppModLoader/app/types/ShaderID_SceneScreenshotManager.h>
#include <Il2CppModLoader/app/types/ShaderID_ScreenOverlay.h>
#include <Il2CppModLoader/app/types/ShaderID_ScreenSpaceAmbientObscurance.h>
#include <Il2CppModLoader/app/types/ShaderID_ScreenSpaceReflection.h>
#include <Il2CppModLoader/app/types/ShaderID_SeinController3D.h>
#include <Il2CppModLoader/app/types/ShaderID_SeinPositionAndDirectionTracker.h>
#include <Il2CppModLoader/app/types/ShaderID_SeinSpiritLeashAbility.h>
#include <Il2CppModLoader/app/types/ShaderID_ShadowsMidtonesHighlights.h>
#include <Il2CppModLoader/app/types/ShaderID_Sharpen.h>
#include <Il2CppModLoader/app/types/ShaderID_SimpleLocomotion.h>
#include <Il2CppModLoader/app/types/ShaderID_SmartSaturation.h>
#include <Il2CppModLoader/app/types/ShaderID_UberWaterReflection.h>
#include <Il2CppModLoader/app/types/ShaderKeyword_SMAA.h>
#include <Il2CppModLoader/app/types/ShaderTimeUtils.h>
#include <Il2CppModLoader/app/types/SmoothCurve__Array.h>
#include <Il2CppModLoader/app/types/Timeout.h>
#include <Il2CppModLoader/app/types/TrackingServices.h>
#include <Il2CppModLoader/app/types/TypeTranslator.h>
#include <Il2CppModLoader/app/types/UberTypeTracker.h>
#include <Il2CppModLoader/app/types/UberWaterReflectionView_Samplers.h>
#include <Il2CppModLoader/app/types/ValidateNames.h>
#include <Il2CppModLoader/app/types/WaterPoison.h>
#include <Il2CppModLoader/app/types/WebExceptionMapping.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NclConstants {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NclConstants__Class** type_info = (::app::NclConstants__Class**)(modloader::win::memory::resolve_rva(0x04710020));
    }
    namespace NclUtilities {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NclUtilities__Class** type_info = (::app::NclUtilities__Class**)(modloader::win::memory::resolve_rva(0x0473A048));
    }
    namespace NegativeScaleFixer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegativeScaleFixer__Class** type_info = (::app::NegativeScaleFixer__Class**)(modloader::win::memory::resolve_rva(0x04741C90));
    }
    namespace ShaderID_Negative {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Negative__Class** type_info = (::app::ShaderID_Negative__Class**)(modloader::win::memory::resolve_rva(0x04708D20));
    }
    namespace NetConnectivityCheckerFactory {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NetConnectivityCheckerFactory__Class** type_info = (::app::NetConnectivityCheckerFactory__Class**)(modloader::win::memory::resolve_rva(0x04788D08));
    }
    namespace WebExceptionMapping {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebExceptionMapping__Class** type_info = (::app::WebExceptionMapping__Class**)(modloader::win::memory::resolve_rva(0x04772298));
    }
    namespace RemoteAction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoteAction__Class** type_info = (::app::RemoteAction__Class**)(modloader::win::memory::resolve_rva(0x04736250));
    }
    namespace ShaderID_NightBerry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_NightBerry__Class** type_info = (::app::ShaderID_NightBerry__Class**)(modloader::win::memory::resolve_rva(0x047770A0));
    }
    namespace NightCrawlerBackAttackBranches__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerBackAttackBranches__Enum__Class** type_info = (::app::NightCrawlerBackAttackBranches__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470FF50));
    }
    namespace NightCrawlerChaseIntroBranches__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerChaseIntroBranches__Enum__Class** type_info = (::app::NightCrawlerChaseIntroBranches__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472C638));
    }
    namespace NightCrawlerRetaliationBranches__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NightCrawlerRetaliationBranches__Enum__Class** type_info = (::app::NightCrawlerRetaliationBranches__Enum__Class**)(modloader::win::memory::resolve_rva(0x04789018));
    }
    namespace ShaderID_NightberryPlaceholder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_NightberryPlaceholder__Class** type_info = (::app::ShaderID_NightberryPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x04774E70));
    }
    namespace ShaderID_NoiseAndGrain {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_NoiseAndGrain__Class** type_info = (::app::ShaderID_NoiseAndGrain__Class**)(modloader::win::memory::resolve_rva(0x04726BF0));
    }
    namespace ShaderID_NoiseEffect {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_NoiseEffect__Class** type_info = (::app::ShaderID_NoiseEffect__Class**)(modloader::win::memory::resolve_rva(0x0472D978));
    }
    namespace ShaderID_Noise {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Noise__Class** type_info = (::app::ShaderID_Noise__Class**)(modloader::win::memory::resolve_rva(0x0476A400));
    }
    namespace NormalizationTableUtil {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NormalizationTableUtil__Class** type_info = (::app::NormalizationTableUtil__Class**)(modloader::win::memory::resolve_rva(0x04739BB8));
    }
    namespace Normalization {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Normalization__Class** type_info = (::app::Normalization__Class**)(modloader::win::memory::resolve_rva(0x047682D8));
    }
    namespace NtlmSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NtlmSettings__Class** type_info = (::app::NtlmSettings__Class**)(modloader::win::memory::resolve_rva(0x04746D88));
    }
    namespace SerializationEventsCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationEventsCache__Class** type_info = (::app::SerializationEventsCache__Class**)(modloader::win::memory::resolve_rva(0x04762E00));
    }
    namespace ShaderID_OccludeMotionVectors {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_OccludeMotionVectors__Class** type_info = (::app::ShaderID_OccludeMotionVectors__Class**)(modloader::win::memory::resolve_rva(0x0476F160));
    }
    namespace OpCodeNames {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpCodeNames__Class** type_info = (::app::OpCodeNames__Class**)(modloader::win::memory::resolve_rva(0x04766728));
    }
    namespace Orbs_OrbDisplayText {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Orbs_OrbDisplayText__Class** type_info = (::app::Orbs_OrbDisplayText__Class**)(modloader::win::memory::resolve_rva(0x04723A18));
    }
    namespace ShaderID_P3D_BrushPreview {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_P3D_BrushPreview__Class** type_info = (::app::ShaderID_P3D_BrushPreview__Class**)(modloader::win::memory::resolve_rva(0x04790578));
    }
    namespace P3D_Brush_SubtractiveBlend {
        IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Brush_SubtractiveBlend__Class** type_info = (::app::P3D_Brush_SubtractiveBlend__Class**)(modloader::win::memory::resolve_rva(0x047567F8));
    }
    namespace P3D_Helper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Helper__Class** type_info = (::app::P3D_Helper__Class**)(modloader::win::memory::resolve_rva(0x04710400));
    }
    namespace ShaderID_P3D_TexturePreview {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_P3D_TexturePreview__Class** type_info = (::app::ShaderID_P3D_TexturePreview__Class**)(modloader::win::memory::resolve_rva(0x04745018));
    }
    namespace ParameterizedStrings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ParameterizedStrings__Class** type_info = (::app::ParameterizedStrings__Class**)(modloader::win::memory::resolve_rva(0x047008C8));
    }
    namespace EarlyZChildDebugger__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EarlyZChildDebugger__Array__Class** type_info = (::app::EarlyZChildDebugger__Array__Class**)(modloader::win::memory::resolve_rva(0x0471EA28));
    }
    namespace ShaderID_PerformanceTestManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_PerformanceTestManager__Class** type_info = (::app::ShaderID_PerformanceTestManager__Class**)(modloader::win::memory::resolve_rva(0x04715738));
    }
    namespace PetrifiedOwlBossEntity_AnimationDirections__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class** type_info = (::app::PetrifiedOwlBossEntity_AnimationDirections__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472B0B0));
    }
    namespace ShaderID_PhotoFilter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_PhotoFilter__Class** type_info = (::app::ShaderID_PhotoFilter__Class**)(modloader::win::memory::resolve_rva(0x04781270));
    }
    namespace SmoothCurve__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SmoothCurve__Array__Class** type_info = (::app::SmoothCurve__Array__Class**)(modloader::win::memory::resolve_rva(0x047547B8));
    }
    namespace PhraseRecognitionSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhraseRecognitionSystem__Class** type_info = (::app::PhraseRecognitionSystem__Class**)(modloader::win::memory::resolve_rva(0x04772628));
    }
    namespace PhysicsUpdateHandlerManager_Temp {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsUpdateHandlerManager_Temp__Class** type_info = (::app::PhysicsUpdateHandlerManager_Temp__Class**)(modloader::win::memory::resolve_rva(0x04705EA0));
    }
    namespace ShaderID_PixelMatrix {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_PixelMatrix__Class** type_info = (::app::ShaderID_PixelMatrix__Class**)(modloader::win::memory::resolve_rva(0x0470A748));
    }
    namespace ShaderID_Pixelate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Pixelate__Class** type_info = (::app::ShaderID_Pixelate__Class**)(modloader::win::memory::resolve_rva(0x04765770));
    }
    namespace ShaderID_UberWaterReflection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_UberWaterReflection__Class** type_info = (::app::ShaderID_UberWaterReflection__Class**)(modloader::win::memory::resolve_rva(0x0471A0B8));
    }
    namespace PlatformHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformHelper__Class** type_info = (::app::PlatformHelper__Class**)(modloader::win::memory::resolve_rva(0x0478D540));
    }
    namespace Platform {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Platform__Class** type_info = (::app::Platform__Class**)(modloader::win::memory::resolve_rva(0x0472A6C8));
    }
    namespace PlayFabDeviceUtil {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabDeviceUtil__Class** type_info = (::app::PlayFabDeviceUtil__Class**)(modloader::win::memory::resolve_rva(0x04748170));
    }
    namespace PlayFabDataAPI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabDataAPI__Class** type_info = (::app::PlayFabDataAPI__Class**)(modloader::win::memory::resolve_rva(0x0474C7E8));
    }
    namespace PlayFabIdfa {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabIdfa__Class** type_info = (::app::PlayFabIdfa__Class**)(modloader::win::memory::resolve_rva(0x0471B998));
    }
    namespace PlayFabServerAPI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabServerAPI__Class** type_info = (::app::PlayFabServerAPI__Class**)(modloader::win::memory::resolve_rva(0x04722760));
    }
    namespace PlayFabProfilesAPI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabProfilesAPI__Class** type_info = (::app::PlayFabProfilesAPI__Class**)(modloader::win::memory::resolve_rva(0x0476A4A0));
    }
    namespace PlayFabEventsAPI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabEventsAPI__Class** type_info = (::app::PlayFabEventsAPI__Class**)(modloader::win::memory::resolve_rva(0x0475CA38));
    }
    namespace ShaderID_PostEffectsHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_PostEffectsHelper__Class** type_info = (::app::ShaderID_PostEffectsHelper__Class**)(modloader::win::memory::resolve_rva(0x04746AB8));
    }
    namespace ShaderID_Posterize {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Posterize__Class** type_info = (::app::ShaderID_Posterize__Class**)(modloader::win::memory::resolve_rva(0x04762DC0));
    }
    namespace ScenePreloading {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScenePreloading__Class** type_info = (::app::ScenePreloading__Class**)(modloader::win::memory::resolve_rva(0x0471CEE0));
    }
    namespace ValidateNames {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ValidateNames__Class** type_info = (::app::ValidateNames__Class**)(modloader::win::memory::resolve_rva(0x047099C8));
    }
    namespace Ambience_Processing {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Ambience_Processing__Class** type_info = (::app::Ambience_Processing__Class**)(modloader::win::memory::resolve_rva(0x0472F5B8));
    }
    namespace ShaderID_RGBSplit {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_RGBSplit__Class** type_info = (::app::ShaderID_RGBSplit__Class**)(modloader::win::memory::resolve_rva(0x04751DD8));
    }
    namespace ShaderID_RadialBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_RadialBlur__Class** type_info = (::app::ShaderID_RadialBlur__Class**)(modloader::win::memory::resolve_rva(0x0472EFC8));
    }
    namespace ShaderID_ReconstructionFilter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ReconstructionFilter__Class** type_info = (::app::ShaderID_ReconstructionFilter__Class**)(modloader::win::memory::resolve_rva(0x04788F68));
    }
    namespace MoonProfilerManager_Recorders {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonProfilerManager_Recorders__Class** type_info = (::app::MoonProfilerManager_Recorders__Class**)(modloader::win::memory::resolve_rva(0x0477AD60));
    }
    namespace Attribute__Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Attribute__Array__Array__Class** type_info = (::app::Attribute__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04706918));
    }
    namespace ReflectPropertyDescriptor__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectPropertyDescriptor__Array__Class** type_info = (::app::ReflectPropertyDescriptor__Array__Class**)(modloader::win::memory::resolve_rva(0x04782550));
    }
    namespace TypeTranslator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeTranslator__Class** type_info = (::app::TypeTranslator__Class**)(modloader::win::memory::resolve_rva(0x04761B58));
    }
    namespace Timeout {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Timeout__Class** type_info = (::app::Timeout__Class**)(modloader::win::memory::resolve_rva(0x0473AF80));
    }
    namespace Registry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Registry__Class** type_info = (::app::Registry__Class**)(modloader::win::memory::resolve_rva(0x04791318));
    }
    namespace RemoteSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RemoteSettings__Class** type_info = (::app::RemoteSettings__Class**)(modloader::win::memory::resolve_rva(0x04715728));
    }
    namespace TrackingServices {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TrackingServices__Class** type_info = (::app::TrackingServices__Class**)(modloader::win::memory::resolve_rva(0x0478E518));
    }
    namespace RenderPipelineManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RenderPipelineManager__Class** type_info = (::app::RenderPipelineManager__Class**)(modloader::win::memory::resolve_rva(0x047063F8));
    }
    namespace RenderTextureFormatSafe {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RenderTextureFormatSafe__Class** type_info = (::app::RenderTextureFormatSafe__Class**)(modloader::win::memory::resolve_rva(0x04758FD0));
    }
    namespace ServerObjectSerializer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerObjectSerializer__Class** type_info = (::app::ServerObjectSerializer__Class**)(modloader::win::memory::resolve_rva(0x047166A0));
    }
    namespace RequestCacheManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RequestCacheManager__Class** type_info = (::app::RequestCacheManager__Class**)(modloader::win::memory::resolve_rva(0x04739250));
    }
    namespace ShaderID_SCurveContrast {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SCurveContrast__Class** type_info = (::app::ShaderID_SCurveContrast__Class**)(modloader::win::memory::resolve_rva(0x04751E78));
    }
    namespace SDK {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SDK__Class** type_info = (::app::SDK__Class**)(modloader::win::memory::resolve_rva(0x04787F60));
    }
    namespace ShaderID_SMAA {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SMAA__Class** type_info = (::app::ShaderID_SMAA__Class**)(modloader::win::memory::resolve_rva(0x04764140));
    }
    namespace ShaderKeyword_SMAA {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderKeyword_SMAA__Class** type_info = (::app::ShaderKeyword_SMAA__Class**)(modloader::win::memory::resolve_rva(0x04749250));
    }
    namespace ShaderID_SampleComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SampleComparer__Class** type_info = (::app::ShaderID_SampleComparer__Class**)(modloader::win::memory::resolve_rva(0x047568A0));
    }
    namespace UberWaterReflectionView_Samplers {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterReflectionView_Samplers__Class** type_info = (::app::UberWaterReflectionView_Samplers__Class**)(modloader::win::memory::resolve_rva(0x0475EF50));
    }
    namespace SceneFPSTest_ShaderID {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneFPSTest_ShaderID__Class** type_info = (::app::SceneFPSTest_ShaderID__Class**)(modloader::win::memory::resolve_rva(0x0470EAA8));
    }
    namespace SceneManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneManager__Class** type_info = (::app::SceneManager__Class**)(modloader::win::memory::resolve_rva(0x04717260));
    }
    namespace ScenesManagerHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScenesManagerHelper__Class** type_info = (::app::ScenesManagerHelper__Class**)(modloader::win::memory::resolve_rva(0x047202B8));
    }
    namespace ShaderID_ScreenOverlay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ScreenOverlay__Class** type_info = (::app::ShaderID_ScreenOverlay__Class**)(modloader::win::memory::resolve_rva(0x04783948));
    }
    namespace ShaderID_ScreenSpaceAmbientObscurance {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ScreenSpaceAmbientObscurance__Class** type_info = (::app::ShaderID_ScreenSpaceAmbientObscurance__Class**)(modloader::win::memory::resolve_rva(0x047095D8));
    }
    namespace ShaderID_SSAOEffect {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SSAOEffect__Class** type_info = (::app::ShaderID_SSAOEffect__Class**)(modloader::win::memory::resolve_rva(0x04736470));
    }
    namespace ShaderID_ScreenSpaceReflection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ScreenSpaceReflection__Class** type_info = (::app::ShaderID_ScreenSpaceReflection__Class**)(modloader::win::memory::resolve_rva(0x04771598));
    }
    namespace ScriptableRuntimeReflectionSystemSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScriptableRuntimeReflectionSystemSettings__Class** type_info = (::app::ScriptableRuntimeReflectionSystemSettings__Class**)(modloader::win::memory::resolve_rva(0x0475BB28));
    }
    namespace SecurityBufferStruct {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityBufferStruct__Class** type_info = (::app::SecurityBufferStruct__Class**)(modloader::win::memory::resolve_rva(0x0470DD68));
    }
    namespace ShaderID_SeinPositionAndDirectionTracker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SeinPositionAndDirectionTracker__Class** type_info = (::app::ShaderID_SeinPositionAndDirectionTracker__Class**)(modloader::win::memory::resolve_rva(0x04717BA8));
    }
    namespace WaterPoison {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WaterPoison__Class** type_info = (::app::WaterPoison__Class**)(modloader::win::memory::resolve_rva(0x04742078));
    }
    namespace SendMouseEvents {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SendMouseEvents__Class** type_info = (::app::SendMouseEvents__Class**)(modloader::win::memory::resolve_rva(0x04730C78));
    }
    namespace UberTypeTracker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberTypeTracker__Class** type_info = (::app::UberTypeTracker__Class**)(modloader::win::memory::resolve_rva(0x047090C0));
    }
    namespace ShaderTimeUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderTimeUtils__Class** type_info = (::app::ShaderTimeUtils__Class**)(modloader::win::memory::resolve_rva(0x047167D0));
    }
    namespace ShaderID_AtlasSpriteTexture {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AtlasSpriteTexture__Class** type_info = (::app::ShaderID_AtlasSpriteTexture__Class**)(modloader::win::memory::resolve_rva(0x04713CB8));
    }
    namespace ShaderID_ColorAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ColorAnimator__Class** type_info = (::app::ShaderID_ColorAnimator__Class**)(modloader::win::memory::resolve_rva(0x04724640));
    }
    namespace ShaderID_ContrastVignette {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ContrastVignette__Class** type_info = (::app::ShaderID_ContrastVignette__Class**)(modloader::win::memory::resolve_rva(0x047438C0));
    }
    namespace ShaderID_DistortionAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DistortionAnimator__Class** type_info = (::app::ShaderID_DistortionAnimator__Class**)(modloader::win::memory::resolve_rva(0x0478F798));
    }
    namespace ShaderID_GlobalAlphaCutoffMenuItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GlobalAlphaCutoffMenuItem__Class** type_info = (::app::ShaderID_GlobalAlphaCutoffMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04775EB0));
    }
    namespace ShaderID_HoldableRigidBody {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_HoldableRigidBody__Class** type_info = (::app::ShaderID_HoldableRigidBody__Class**)(modloader::win::memory::resolve_rva(0x04766EE8));
    }
    namespace ShaderID_MotionAbsorbCharacter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_MotionAbsorbCharacter__Class** type_info = (::app::ShaderID_MotionAbsorbCharacter__Class**)(modloader::win::memory::resolve_rva(0x04779978));
    }
    namespace ShaderID_SceneScreenshotManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SceneScreenshotManager__Class** type_info = (::app::ShaderID_SceneScreenshotManager__Class**)(modloader::win::memory::resolve_rva(0x0476FD18));
    }
    namespace ShaderID_SceneScreenshot {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SceneScreenshot__Class** type_info = (::app::ShaderID_SceneScreenshot__Class**)(modloader::win::memory::resolve_rva(0x047831D0));
    }
    namespace ShaderID_SeinController3D {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SeinController3D__Class** type_info = (::app::ShaderID_SeinController3D__Class**)(modloader::win::memory::resolve_rva(0x04786A08));
    }
    namespace ShaderID_SeinSpiritLeashAbility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SeinSpiritLeashAbility__Class** type_info = (::app::ShaderID_SeinSpiritLeashAbility__Class**)(modloader::win::memory::resolve_rva(0x04775A38));
    }
    namespace ShaderID_ShadowsMidtonesHighlights {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ShadowsMidtonesHighlights__Class** type_info = (::app::ShaderID_ShadowsMidtonesHighlights__Class**)(modloader::win::memory::resolve_rva(0x04785E90));
    }
    namespace ShaderID_Sharpen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Sharpen__Class** type_info = (::app::ShaderID_Sharpen__Class**)(modloader::win::memory::resolve_rva(0x0470A140));
    }
    namespace ShaderID_SimpleLocomotion {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SimpleLocomotion__Class** type_info = (::app::ShaderID_SimpleLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04757820));
    }
    namespace ShaderID_SmartSaturation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SmartSaturation__Class** type_info = (::app::ShaderID_SmartSaturation__Class**)(modloader::win::memory::resolve_rva(0x04705240));
    }
} // namespace app::classes::types
