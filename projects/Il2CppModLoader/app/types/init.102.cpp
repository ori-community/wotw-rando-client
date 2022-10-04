#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/InternalConstants.h>
#include <Il2CppModLoader/app/types/DelegateHelpers_1.h>
#include <Il2CppModLoader/app/types/DemoConfiguration.h>
#include <Il2CppModLoader/app/types/ShaderID_DepthOfFieldDeprecated.h>
#include <Il2CppModLoader/app/types/ShaderID_DepthOfField_1.h>
#include <Il2CppModLoader/app/types/ShaderID_DepthOfField.h>
#include <Il2CppModLoader/app/types/PKCS1.h>
#include <Il2CppModLoader/app/types/PKCS1_1.h>
#include <Il2CppModLoader/app/types/IPolymorphicSerializationTypeMapContributor.h>
#include <Il2CppModLoader/app/types/IFormatter.h>
#include <Il2CppModLoader/app/types/DictionaryHashHelpers.h>
#include <Il2CppModLoader/app/types/ShaderID_DirectionalBlur.h>
#include <Il2CppModLoader/app/types/FSharpUtils.h>
#include <Il2CppModLoader/app/types/DiskBlurKernelGenerator.h>
#include <Il2CppModLoader/app/types/ShaderID.h>
#include <Il2CppModLoader/app/types/ShaderID_Dithering.h>
#include <Il2CppModLoader/app/types/Dns.h>
#include <Il2CppModLoader/app/types/ShaderID_DoubleVision.h>
#include <Il2CppModLoader/app/types/RectTransformUtility.h>
#include <Il2CppModLoader/app/types/IDtdParserAdapterV1.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils.h>
#include <Il2CppModLoader/app/types/ShaderID_DynamicLightSource.h>
#include <Il2CppModLoader/app/types/ShaderID_DynamicLightsManager.h>
#include <Il2CppModLoader/app/types/ShaderID_DynamicLookup.h>
#include <Il2CppModLoader/app/types/IContributeDynamicSink.h>
#include <Il2CppModLoader/app/types/OpCodes.h>
#include <Il2CppModLoader/app/types/ShaderID_EdgeDetection.h>
#include <Il2CppModLoader/app/types/EditorScene.h>
#include <Il2CppModLoader/app/types/WebUtility.h>
#include <Il2CppModLoader/app/types/ILocomotionMovementProcessor.h>
#include <Il2CppModLoader/app/types/PersistencyTools.h>
#include <Il2CppModLoader/app/types/IEntityHighlight.h>
#include <Il2CppModLoader/app/types/EntityWeightResolver.h>
#include <Il2CppModLoader/app/types/ILocomotionBehaviour.h>
#include <Il2CppModLoader/app/types/XmlCustomFormatter.h>
#include <Il2CppModLoader/app/types/EnumUtils.h>
#include <Il2CppModLoader/app/types/CompatibilitySwitches.h>
#include <Il2CppModLoader/app/types/ShaderID_EnvironmentLightingModifier.h>
#include <Il2CppModLoader/app/types/ShaderID_EnvironmentShadingModifier.h>
#include <Il2CppModLoader/app/types/Environment.h>
#include <Il2CppModLoader/app/types/EventDescritorHelpers.h>
#include <Il2CppModLoader/app/types/EventId.h>
#include <Il2CppModLoader/app/types/ShaderID_SeinWorldState.h>
#include <Il2CppModLoader/app/types/ShaderID_FBIKBoxing.h>
#include <Il2CppModLoader/app/types/ShaderID_FPSCharacter.h>
#include <Il2CppModLoader/app/types/FPSTestFields.h>
#include <Il2CppModLoader/app/types/Utils_3.h>
#include <Il2CppModLoader/app/types/ShaderID_FXAA.h>
#include <Il2CppModLoader/app/types/ShaderKeyword_FXAA.h>
#include <Il2CppModLoader/app/types/FastEncoderStatics.h>
#include <Il2CppModLoader/app/types/ShaderID_FastVignette.h>
#include <Il2CppModLoader/app/types/FileLocations.h>
#include <Il2CppModLoader/app/types/FileProcessor.h>
#include <Il2CppModLoader/app/types/IMeshFormat.h>
#include <Il2CppModLoader/app/types/IPolygonFormat.h>
#include <Il2CppModLoader/app/types/ICloseEx.h>
#include <Il2CppModLoader/app/types/File.h>
#include <Il2CppModLoader/app/types/ShaderKeyword.h>
#include <Il2CppModLoader/app/types/UberPostCacheIds.h>
#include <Il2CppModLoader/app/types/ShaderID_Fisheye.h>
#include <Il2CppModLoader/app/types/Schedules.h>
#include <Il2CppModLoader/app/types/IFloatUberState.h>
#include <Il2CppModLoader/app/types/FontUpdateTracker.h>
#include <Il2CppModLoader/app/types/FormatProvider_Number.h>
#include <Il2CppModLoader/app/types/ShaderID_FoxEnemy2.h>
#include <Il2CppModLoader/app/types/ShaderID_FrameBlendingFilter.h>
#include <Il2CppModLoader/app/types/INewFrameCaptureAgent.h>
#include <Il2CppModLoader/app/types/FrameProfilerPlayerLoopInjector.h>
#include <Il2CppModLoader/app/types/ShaderID_Frost.h>
#include <Il2CppModLoader/app/types/ShaderID_GUIController.h>
#include <Il2CppModLoader/app/types/GUILayoutUtility.h>
#include <Il2CppModLoader/app/types/GUIStateObjects.h>
#include <Il2CppModLoader/app/types/GUITargetAttribute.h>
#include <Il2CppModLoader/app/types/GUIUtility.h>
#include <Il2CppModLoader/app/types/ExitGUIException.h>
#include <Il2CppModLoader/app/types/PlayFabClientAPI.h>
#include <Il2CppModLoader/app/types/GameFolders.h>
#include <Il2CppModLoader/app/types/SoundComposition_1.h>
#include <Il2CppModLoader/app/types/GameObjectLayer.h>
#include <Il2CppModLoader/app/types/GarbageCollector.h>
#include <Il2CppModLoader/app/types/ShaderID_GaussianBlur.h>
#include <Il2CppModLoader/app/types/GenericCastManagerFlags.h>
#include <Il2CppModLoader/app/types/InputTriangle__Array.h>
#include <Il2CppModLoader/app/types/IGlobalRecordingTableReceiver.h>
#include <Il2CppModLoader/app/types/GizmoSystem.h>
#include <Il2CppModLoader/app/types/ShaderID_Glitch.h>
#include <Il2CppModLoader/app/types/IBrigthnessContributionAgentWithUpdate.h>
#include <Il2CppModLoader/app/types/ShaderID_GlobalDebugQuadScaleMenuItem.h>
#include <Il2CppModLoader/app/types/ShaderID_GlobalFog.h>
#include <Il2CppModLoader/app/types/GlobalLog.h>
#include <Il2CppModLoader/app/types/GoThroughPlatformManager.h>
#include <Il2CppModLoader/app/types/ShaderID_GradientRampDynamic.h>
#include <Il2CppModLoader/app/types/ShaderID_GradientRamp.h>
#include <Il2CppModLoader/app/types/ShaderID_GrainyBlur.h>
#include <Il2CppModLoader/app/types/IMeshModifier.h>
#include <Il2CppModLoader/app/types/ICanvasRaycastFilter.h>
#include <Il2CppModLoader/app/types/IMaterialModifier.h>
#include <Il2CppModLoader/app/types/GraphicsExt.h>
#include <Il2CppModLoader/app/types/ShaderID_GrayscaleEffect.h>
#include <Il2CppModLoader/app/types/ShaderID_Grayscale.h>

namespace app::classes::types {
    namespace InternalConstants { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalConstants__Class** type_info = (::app::InternalConstants__Class**)(modloader::win::memory::resolve_rva(0x04746788)); }
    namespace DelegateHelpers_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::DelegateHelpers_1__Class** type_info = (::app::DelegateHelpers_1__Class**)(modloader::win::memory::resolve_rva(0x0473C740)); }
    namespace DemoConfiguration { IL2CPP_MODLOADER_DLLEXPORT ::app::DemoConfiguration__Class** type_info = (::app::DemoConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04732FC0)); }
    namespace ShaderID_DepthOfFieldDeprecated { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DepthOfFieldDeprecated__Class** type_info = (::app::ShaderID_DepthOfFieldDeprecated__Class**)(modloader::win::memory::resolve_rva(0x04798EB8)); }
    namespace ShaderID_DepthOfField_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DepthOfField_1__Class** type_info = (::app::ShaderID_DepthOfField_1__Class**)(modloader::win::memory::resolve_rva(0x047087D0)); }
    namespace ShaderID_DepthOfField { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DepthOfField__Class** type_info = (::app::ShaderID_DepthOfField__Class**)(modloader::win::memory::resolve_rva(0x0472DE78)); }
    namespace PKCS1 { IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS1__Class** type_info = (::app::PKCS1__Class**)(modloader::win::memory::resolve_rva(0x04730B18)); }
    namespace PKCS1_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS1_1__Class** type_info = (::app::PKCS1_1__Class**)(modloader::win::memory::resolve_rva(0x0473E048)); }
    namespace IPolymorphicSerializationTypeMapContributor { IL2CPP_MODLOADER_DLLEXPORT ::app::IPolymorphicSerializationTypeMapContributor__Class** type_info = (::app::IPolymorphicSerializationTypeMapContributor__Class**)(modloader::win::memory::resolve_rva(0x047351C0)); }
    namespace IFormatter { IL2CPP_MODLOADER_DLLEXPORT ::app::IFormatter__Class** type_info = (::app::IFormatter__Class**)(modloader::win::memory::resolve_rva(0x0478C7B0)); }
    namespace DictionaryHashHelpers { IL2CPP_MODLOADER_DLLEXPORT ::app::DictionaryHashHelpers__Class** type_info = (::app::DictionaryHashHelpers__Class**)(modloader::win::memory::resolve_rva(0x0475CEB8)); }
    namespace ShaderID_DirectionalBlur { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DirectionalBlur__Class** type_info = (::app::ShaderID_DirectionalBlur__Class**)(modloader::win::memory::resolve_rva(0x04798D70)); }
    namespace FSharpUtils { IL2CPP_MODLOADER_DLLEXPORT ::app::FSharpUtils__Class** type_info = (::app::FSharpUtils__Class**)(modloader::win::memory::resolve_rva(0x0474E980)); }
    namespace DiskBlurKernelGenerator { IL2CPP_MODLOADER_DLLEXPORT ::app::DiskBlurKernelGenerator__Class** type_info = (::app::DiskBlurKernelGenerator__Class**)(modloader::win::memory::resolve_rva(0x04708C30)); }
    namespace ShaderID { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID__Class** type_info = (::app::ShaderID__Class**)(modloader::win::memory::resolve_rva(0x04783F98)); }
    namespace ShaderID_Dithering { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Dithering__Class** type_info = (::app::ShaderID_Dithering__Class**)(modloader::win::memory::resolve_rva(0x04748750)); }
    namespace Dns { IL2CPP_MODLOADER_DLLEXPORT ::app::Dns__Class** type_info = (::app::Dns__Class**)(modloader::win::memory::resolve_rva(0x047743C0)); }
    namespace ShaderID_DoubleVision { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DoubleVision__Class** type_info = (::app::ShaderID_DoubleVision__Class**)(modloader::win::memory::resolve_rva(0x0478D578)); }
    namespace RectTransformUtility { IL2CPP_MODLOADER_DLLEXPORT ::app::RectTransformUtility__Class** type_info = (::app::RectTransformUtility__Class**)(modloader::win::memory::resolve_rva(0x04772090)); }
    namespace IDtdParserAdapterV1 { IL2CPP_MODLOADER_DLLEXPORT ::app::IDtdParserAdapterV1__Class** type_info = (::app::IDtdParserAdapterV1__Class**)(modloader::win::memory::resolve_rva(0x0473F958)); }
    namespace DynamicDataLinkUtils { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils__Class** type_info = (::app::DynamicDataLinkUtils__Class**)(modloader::win::memory::resolve_rva(0x047524D8)); }
    namespace ShaderID_DynamicLightSource { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DynamicLightSource__Class** type_info = (::app::ShaderID_DynamicLightSource__Class**)(modloader::win::memory::resolve_rva(0x04791BE0)); }
    namespace ShaderID_DynamicLightsManager { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DynamicLightsManager__Class** type_info = (::app::ShaderID_DynamicLightsManager__Class**)(modloader::win::memory::resolve_rva(0x047427E0)); }
    namespace ShaderID_DynamicLookup { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DynamicLookup__Class** type_info = (::app::ShaderID_DynamicLookup__Class**)(modloader::win::memory::resolve_rva(0x04708AB0)); }
    namespace IContributeDynamicSink { IL2CPP_MODLOADER_DLLEXPORT ::app::IContributeDynamicSink__Class** type_info = (::app::IContributeDynamicSink__Class**)(modloader::win::memory::resolve_rva(0x04775970)); }
    namespace OpCodes { IL2CPP_MODLOADER_DLLEXPORT ::app::OpCodes__Class** type_info = (::app::OpCodes__Class**)(modloader::win::memory::resolve_rva(0x04715BA8)); }
    namespace ShaderID_EdgeDetection { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_EdgeDetection__Class** type_info = (::app::ShaderID_EdgeDetection__Class**)(modloader::win::memory::resolve_rva(0x04763B88)); }
    namespace EditorScene { IL2CPP_MODLOADER_DLLEXPORT ::app::EditorScene__Class** type_info = (::app::EditorScene__Class**)(modloader::win::memory::resolve_rva(0x04722870)); }
    namespace WebUtility { IL2CPP_MODLOADER_DLLEXPORT ::app::WebUtility__Class** type_info = (::app::WebUtility__Class**)(modloader::win::memory::resolve_rva(0x04738F08)); }
    namespace ILocomotionMovementProcessor { IL2CPP_MODLOADER_DLLEXPORT ::app::ILocomotionMovementProcessor__Class** type_info = (::app::ILocomotionMovementProcessor__Class**)(modloader::win::memory::resolve_rva(0x0475A8D0)); }
    namespace PersistencyTools { IL2CPP_MODLOADER_DLLEXPORT ::app::PersistencyTools__Class** type_info = (::app::PersistencyTools__Class**)(modloader::win::memory::resolve_rva(0x0475DE70)); }
    namespace IEntityHighlight { IL2CPP_MODLOADER_DLLEXPORT ::app::IEntityHighlight__Class** type_info = (::app::IEntityHighlight__Class**)(modloader::win::memory::resolve_rva(0x04753518)); }
    namespace EntityWeightResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityWeightResolver__Class** type_info = (::app::EntityWeightResolver__Class**)(modloader::win::memory::resolve_rva(0x04716FB8)); }
    namespace ILocomotionBehaviour { IL2CPP_MODLOADER_DLLEXPORT ::app::ILocomotionBehaviour__Class** type_info = (::app::ILocomotionBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047757C8)); }
    namespace XmlCustomFormatter { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlCustomFormatter__Class** type_info = (::app::XmlCustomFormatter__Class**)(modloader::win::memory::resolve_rva(0x0475F888)); }
    namespace EnumUtils { IL2CPP_MODLOADER_DLLEXPORT ::app::EnumUtils__Class** type_info = (::app::EnumUtils__Class**)(modloader::win::memory::resolve_rva(0x04700950)); }
    namespace CompatibilitySwitches { IL2CPP_MODLOADER_DLLEXPORT ::app::CompatibilitySwitches__Class** type_info = (::app::CompatibilitySwitches__Class**)(modloader::win::memory::resolve_rva(0x04765E18)); }
    namespace ShaderID_EnvironmentLightingModifier { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_EnvironmentLightingModifier__Class** type_info = (::app::ShaderID_EnvironmentLightingModifier__Class**)(modloader::win::memory::resolve_rva(0x04785368)); }
    namespace ShaderID_EnvironmentShadingModifier { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_EnvironmentShadingModifier__Class** type_info = (::app::ShaderID_EnvironmentShadingModifier__Class**)(modloader::win::memory::resolve_rva(0x0476C1E8)); }
    namespace Environment { IL2CPP_MODLOADER_DLLEXPORT ::app::Environment__Class** type_info = (::app::Environment__Class**)(modloader::win::memory::resolve_rva(0x0478E510)); }
    namespace EventDescritorHelpers { IL2CPP_MODLOADER_DLLEXPORT ::app::EventDescritorHelpers__Class** type_info = (::app::EventDescritorHelpers__Class**)(modloader::win::memory::resolve_rva(0x04722428)); }
    namespace EventId { IL2CPP_MODLOADER_DLLEXPORT ::app::EventId__Class** type_info = (::app::EventId__Class**)(modloader::win::memory::resolve_rva(0x04797C38)); }
    namespace ShaderID_SeinWorldState { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SeinWorldState__Class** type_info = (::app::ShaderID_SeinWorldState__Class**)(modloader::win::memory::resolve_rva(0x04788CB8)); }
    namespace ShaderID_FBIKBoxing { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FBIKBoxing__Class** type_info = (::app::ShaderID_FBIKBoxing__Class**)(modloader::win::memory::resolve_rva(0x0475F200)); }
    namespace ShaderID_FPSCharacter { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FPSCharacter__Class** type_info = (::app::ShaderID_FPSCharacter__Class**)(modloader::win::memory::resolve_rva(0x0472E9B8)); }
    namespace FPSTestFields { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSTestFields__Class** type_info = (::app::FPSTestFields__Class**)(modloader::win::memory::resolve_rva(0x0473D0A0)); }
    namespace Utils_3 { IL2CPP_MODLOADER_DLLEXPORT ::app::Utils_3__Class** type_info = (::app::Utils_3__Class**)(modloader::win::memory::resolve_rva(0x04745DC8)); }
    namespace ShaderID_FXAA { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FXAA__Class** type_info = (::app::ShaderID_FXAA__Class**)(modloader::win::memory::resolve_rva(0x04724440)); }
    namespace ShaderKeyword_FXAA { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderKeyword_FXAA__Class** type_info = (::app::ShaderKeyword_FXAA__Class**)(modloader::win::memory::resolve_rva(0x04716D58)); }
    namespace FastEncoderStatics { IL2CPP_MODLOADER_DLLEXPORT ::app::FastEncoderStatics__Class** type_info = (::app::FastEncoderStatics__Class**)(modloader::win::memory::resolve_rva(0x04784C18)); }
    namespace ShaderID_FastVignette { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FastVignette__Class** type_info = (::app::ShaderID_FastVignette__Class**)(modloader::win::memory::resolve_rva(0x04767148)); }
    namespace FileLocations { IL2CPP_MODLOADER_DLLEXPORT ::app::FileLocations__Class** type_info = (::app::FileLocations__Class**)(modloader::win::memory::resolve_rva(0x047138D8)); }
    namespace FileProcessor { IL2CPP_MODLOADER_DLLEXPORT ::app::FileProcessor__Class** type_info = (::app::FileProcessor__Class**)(modloader::win::memory::resolve_rva(0x04763BC8)); }
    namespace IMeshFormat { IL2CPP_MODLOADER_DLLEXPORT ::app::IMeshFormat__Class** type_info = (::app::IMeshFormat__Class**)(modloader::win::memory::resolve_rva(0x0470AD60)); }
    namespace IPolygonFormat { IL2CPP_MODLOADER_DLLEXPORT ::app::IPolygonFormat__Class** type_info = (::app::IPolygonFormat__Class**)(modloader::win::memory::resolve_rva(0x04750590)); }
    namespace ICloseEx { IL2CPP_MODLOADER_DLLEXPORT ::app::ICloseEx__Class** type_info = (::app::ICloseEx__Class**)(modloader::win::memory::resolve_rva(0x04739788)); }
    namespace File { IL2CPP_MODLOADER_DLLEXPORT ::app::File__Class** type_info = (::app::File__Class**)(modloader::win::memory::resolve_rva(0x04738460)); }
    namespace ShaderKeyword { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderKeyword__Class** type_info = (::app::ShaderKeyword__Class**)(modloader::win::memory::resolve_rva(0x04721378)); }
    namespace UberPostCacheIds { IL2CPP_MODLOADER_DLLEXPORT ::app::UberPostCacheIds__Class** type_info = (::app::UberPostCacheIds__Class**)(modloader::win::memory::resolve_rva(0x0475E740)); }
    namespace ShaderID_Fisheye { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Fisheye__Class** type_info = (::app::ShaderID_Fisheye__Class**)(modloader::win::memory::resolve_rva(0x04793F70)); }
    namespace Schedules { IL2CPP_MODLOADER_DLLEXPORT ::app::Schedules__Class** type_info = (::app::Schedules__Class**)(modloader::win::memory::resolve_rva(0x0476AE80)); }
    namespace IFloatUberState { IL2CPP_MODLOADER_DLLEXPORT ::app::IFloatUberState__Class** type_info = (::app::IFloatUberState__Class**)(modloader::win::memory::resolve_rva(0x0470EB68)); }
    namespace FontUpdateTracker { IL2CPP_MODLOADER_DLLEXPORT ::app::FontUpdateTracker__Class** type_info = (::app::FontUpdateTracker__Class**)(modloader::win::memory::resolve_rva(0x04774480)); }
    namespace FormatProvider_Number { IL2CPP_MODLOADER_DLLEXPORT ::app::FormatProvider_Number__Class** type_info = (::app::FormatProvider_Number__Class**)(modloader::win::memory::resolve_rva(0x04731B28)); }
    namespace ShaderID_FoxEnemy2 { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FoxEnemy2__Class** type_info = (::app::ShaderID_FoxEnemy2__Class**)(modloader::win::memory::resolve_rva(0x04739CC0)); }
    namespace ShaderID_FrameBlendingFilter { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FrameBlendingFilter__Class** type_info = (::app::ShaderID_FrameBlendingFilter__Class**)(modloader::win::memory::resolve_rva(0x04791BD0)); }
    namespace INewFrameCaptureAgent { IL2CPP_MODLOADER_DLLEXPORT ::app::INewFrameCaptureAgent__Class** type_info = (::app::INewFrameCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0474F838)); }
    namespace FrameProfilerPlayerLoopInjector { IL2CPP_MODLOADER_DLLEXPORT ::app::FrameProfilerPlayerLoopInjector__Class** type_info = (::app::FrameProfilerPlayerLoopInjector__Class**)(modloader::win::memory::resolve_rva(0x04709F18)); }
    namespace ShaderID_Frost { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Frost__Class** type_info = (::app::ShaderID_Frost__Class**)(modloader::win::memory::resolve_rva(0x04790E58)); }
    namespace ShaderID_GUIController { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GUIController__Class** type_info = (::app::ShaderID_GUIController__Class**)(modloader::win::memory::resolve_rva(0x0472D8D0)); }
    namespace GUILayoutUtility { IL2CPP_MODLOADER_DLLEXPORT ::app::GUILayoutUtility__Class** type_info = (::app::GUILayoutUtility__Class**)(modloader::win::memory::resolve_rva(0x04751080)); }
    namespace GUIStateObjects { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIStateObjects__Class** type_info = (::app::GUIStateObjects__Class**)(modloader::win::memory::resolve_rva(0x04705EC0)); }
    namespace GUITargetAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::GUITargetAttribute__Class** type_info = (::app::GUITargetAttribute__Class**)(modloader::win::memory::resolve_rva(0x0474BB50)); }
    namespace GUIUtility { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIUtility__Class** type_info = (::app::GUIUtility__Class**)(modloader::win::memory::resolve_rva(0x0475E6E0)); }
    namespace ExitGUIException { IL2CPP_MODLOADER_DLLEXPORT ::app::ExitGUIException__Class** type_info = (::app::ExitGUIException__Class**)(modloader::win::memory::resolve_rva(0x04721908)); }
    namespace PlayFabClientAPI { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabClientAPI__Class** type_info = (::app::PlayFabClientAPI__Class**)(modloader::win::memory::resolve_rva(0x04791658)); }
    namespace GameFolders { IL2CPP_MODLOADER_DLLEXPORT ::app::GameFolders__Class** type_info = (::app::GameFolders__Class**)(modloader::win::memory::resolve_rva(0x0474BB48)); }
    namespace SoundComposition_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundComposition_1__Class** type_info = (::app::SoundComposition_1__Class**)(modloader::win::memory::resolve_rva(0x04728CD8)); }
    namespace GameObjectLayer { IL2CPP_MODLOADER_DLLEXPORT ::app::GameObjectLayer__Class** type_info = (::app::GameObjectLayer__Class**)(modloader::win::memory::resolve_rva(0x04776338)); }
    namespace GarbageCollector { IL2CPP_MODLOADER_DLLEXPORT ::app::GarbageCollector__Class** type_info = (::app::GarbageCollector__Class**)(modloader::win::memory::resolve_rva(0x047924B8)); }
    namespace ShaderID_GaussianBlur { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GaussianBlur__Class** type_info = (::app::ShaderID_GaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x047380F8)); }
    namespace GenericCastManagerFlags { IL2CPP_MODLOADER_DLLEXPORT ::app::GenericCastManagerFlags__Class** type_info = (::app::GenericCastManagerFlags__Class**)(modloader::win::memory::resolve_rva(0x047445C0)); }
    namespace InputTriangle__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::InputTriangle__Array__Class** type_info = (::app::InputTriangle__Array__Class**)(modloader::win::memory::resolve_rva(0x0471B5E0)); }
    namespace IGlobalRecordingTableReceiver { IL2CPP_MODLOADER_DLLEXPORT ::app::IGlobalRecordingTableReceiver__Class** type_info = (::app::IGlobalRecordingTableReceiver__Class**)(modloader::win::memory::resolve_rva(0x04744108)); }
    namespace GizmoSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::GizmoSystem__Class** type_info = (::app::GizmoSystem__Class**)(modloader::win::memory::resolve_rva(0x0470DA98)); }
    namespace ShaderID_Glitch { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Glitch__Class** type_info = (::app::ShaderID_Glitch__Class**)(modloader::win::memory::resolve_rva(0x04792388)); }
    namespace IBrigthnessContributionAgentWithUpdate { IL2CPP_MODLOADER_DLLEXPORT ::app::IBrigthnessContributionAgentWithUpdate__Class** type_info = (::app::IBrigthnessContributionAgentWithUpdate__Class**)(modloader::win::memory::resolve_rva(0x0477E980)); }
    namespace ShaderID_GlobalDebugQuadScaleMenuItem { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GlobalDebugQuadScaleMenuItem__Class** type_info = (::app::ShaderID_GlobalDebugQuadScaleMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047338A8)); }
    namespace ShaderID_GlobalFog { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GlobalFog__Class** type_info = (::app::ShaderID_GlobalFog__Class**)(modloader::win::memory::resolve_rva(0x04761D38)); }
    namespace GlobalLog { IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalLog__Class** type_info = (::app::GlobalLog__Class**)(modloader::win::memory::resolve_rva(0x0476C8A8)); }
    namespace GoThroughPlatformManager { IL2CPP_MODLOADER_DLLEXPORT ::app::GoThroughPlatformManager__Class** type_info = (::app::GoThroughPlatformManager__Class**)(modloader::win::memory::resolve_rva(0x0471ECD8)); }
    namespace ShaderID_GradientRampDynamic { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GradientRampDynamic__Class** type_info = (::app::ShaderID_GradientRampDynamic__Class**)(modloader::win::memory::resolve_rva(0x0471F658)); }
    namespace ShaderID_GradientRamp { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GradientRamp__Class** type_info = (::app::ShaderID_GradientRamp__Class**)(modloader::win::memory::resolve_rva(0x04749EF8)); }
    namespace ShaderID_GrainyBlur { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GrainyBlur__Class** type_info = (::app::ShaderID_GrainyBlur__Class**)(modloader::win::memory::resolve_rva(0x0473DF50)); }
    namespace IMeshModifier { IL2CPP_MODLOADER_DLLEXPORT ::app::IMeshModifier__Class** type_info = (::app::IMeshModifier__Class**)(modloader::win::memory::resolve_rva(0x0476CB08)); }
    namespace ICanvasRaycastFilter { IL2CPP_MODLOADER_DLLEXPORT ::app::ICanvasRaycastFilter__Class** type_info = (::app::ICanvasRaycastFilter__Class**)(modloader::win::memory::resolve_rva(0x04706988)); }
    namespace IMaterialModifier { IL2CPP_MODLOADER_DLLEXPORT ::app::IMaterialModifier__Class** type_info = (::app::IMaterialModifier__Class**)(modloader::win::memory::resolve_rva(0x047981E0)); }
    namespace GraphicsExt { IL2CPP_MODLOADER_DLLEXPORT ::app::GraphicsExt__Class** type_info = (::app::GraphicsExt__Class**)(modloader::win::memory::resolve_rva(0x047254E0)); }
    namespace ShaderID_GrayscaleEffect { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GrayscaleEffect__Class** type_info = (::app::ShaderID_GrayscaleEffect__Class**)(modloader::win::memory::resolve_rva(0x04731768)); }
    namespace ShaderID_Grayscale { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Grayscale__Class** type_info = (::app::ShaderID_Grayscale__Class**)(modloader::win::memory::resolve_rva(0x0473E550)); }
}
