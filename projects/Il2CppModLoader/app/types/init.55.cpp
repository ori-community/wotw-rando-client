#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/ILogger_1.h>
#include <Il2CppModLoader/app/types/PlayFabEventRouter.h>
#include <Il2CppModLoader/app/types/IEventPipeline.h>
#include <Il2CppModLoader/app/types/PluginContractKeyComparator.h>
#include <Il2CppModLoader/app/types/PluginManager.h>
#include <Il2CppModLoader/app/types/IPlayFabPlugin.h>
#include <Il2CppModLoader/app/types/ITransportPlugin.h>
#include <Il2CppModLoader/app/types/IOneDSTransportPlugin.h>
#include <Il2CppModLoader/app/types/EventBatchingStage.h>
#include <Il2CppModLoader/app/types/TitleEventBatch.h>
#include <Il2CppModLoader/app/types/EventBatchingStage_GetInputConsumingEnumerable_d_19.h>
#include <Il2CppModLoader/app/types/EventSendingStage.h>
#include <Il2CppModLoader/app/types/EventSendingStage_c.h>
#include <Il2CppModLoader/app/types/OneDSEventPipelineSettings.h>
#include <Il2CppModLoader/app/types/LogLevel__Enum_1.h>
#include <Il2CppModLoader/app/types/DebugLogger.h>
#include <Il2CppModLoader/app/types/HttpResponseObject.h>
#include <Il2CppModLoader/app/types/ISerializerPlugin.h>
#include <Il2CppModLoader/app/types/SimpleJsonInstance.h>
#include <Il2CppModLoader/app/types/PocoJsonSerializerStrategy.h>
#include <Il2CppModLoader/app/types/SimpleJsonInstance_PlayFabSimpleJsonCuztomization.h>
#include <Il2CppModLoader/app/types/JsonProperty_1.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_ConstructorDelegate.h>
#include <Il2CppModLoader/app/types/JsonArray.h>
#include <Il2CppModLoader/app/types/JsonObject.h>
#include <Il2CppModLoader/app/types/IJsonSerializerStrategy.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_GetDelegate.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_SetDelegate.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_1.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c_DisplayClass26_0.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c_DisplayClass30_0.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c_DisplayClass31_0_1.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c_DisplayClass34_0.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c_DisplayClass35_0.h>
#include <Il2CppModLoader/app/types/ScreenTimeTracker.h>
#include <Il2CppModLoader/app/types/PlayFabLoggerBase.h>
#include <Il2CppModLoader/app/types/PlayFabLogger.h>
#include <Il2CppModLoader/app/types/PlayFabLoggerBase_RegisterLogger_d_23.h>
#include <Il2CppModLoader/app/types/CallRequestContainer.h>
#include <Il2CppModLoader/app/types/OneDsUnityHttpPlugin.h>
#include <Il2CppModLoader/app/types/OneDsUnityHttpPlugin_c_DisplayClass1_0.h>
#include <Il2CppModLoader/app/types/OneDsUnityHttpPlugin_Post_d_1.h>
#include <Il2CppModLoader/app/types/OneDsWebRequestPlugin.h>
#include <Il2CppModLoader/app/types/OneDsWebRequestPlugin_c_DisplayClass0_0.h>
#include <Il2CppModLoader/app/types/OneDsWebRequestPlugin_c_DisplayClass0_1.h>
#include <Il2CppModLoader/app/types/ApiProcessingEventArgs.h>
#include <Il2CppModLoader/app/types/PlayFabHttp_ApiProcessErrorEvent.h>
#include <Il2CppModLoader/app/types/IPlayFabLogger.h>
#include <Il2CppModLoader/app/types/PlayFabHttp.h>
#include <Il2CppModLoader/app/types/IScreenTimeTracker.h>
#include <Il2CppModLoader/app/types/PlayFabHttp_SendScreenTimeEvents_d_19.h>
#include <Il2CppModLoader/app/types/PlayFabUnityHttp.h>
#include <Il2CppModLoader/app/types/PlayFabUnityHttp_SimpleCallCoroutine_d_18.h>
#include <Il2CppModLoader/app/types/PlayFabUnityHttp_Post_d_20.h>
#include <Il2CppModLoader/app/types/PlayFabWebRequest.h>
#include <Il2CppModLoader/app/types/PlayFabWebRequest_c_DisplayClass29_0.h>
#include <Il2CppModLoader/app/types/PlayFabWebRequest_c_DisplayClass30_0.h>
#include <Il2CppModLoader/app/types/PlayFabWebRequest_c_DisplayClass31_0.h>
#include <Il2CppModLoader/app/types/PlayFabWebRequest_c_DisplayClass38_0.h>
#include <Il2CppModLoader/app/types/PlayFabWebRequest_c_DisplayClass39_0.h>
#include <Il2CppModLoader/app/types/PlayFabEvents.h>
#include <Il2CppModLoader/app/types/PlayFabEvents_PlayFabErrorEvent.h>
#include <Il2CppModLoader/app/types/Water.h>
#include <Il2CppModLoader/app/types/Water3.h>
#include <Il2CppModLoader/app/types/Water3Manager.h>
#include <Il2CppModLoader/app/types/Water3UnderwaterEffect.h>
#include <Il2CppModLoader/app/types/Blur.h>
#include <Il2CppModLoader/app/types/RenderTexture__Array.h>
#include <Il2CppModLoader/app/types/CameraMotionBlur.h>
#include <Il2CppModLoader/app/types/DepthOfFieldDeprecated.h>
#include <Il2CppModLoader/app/types/NoiseAndGrain.h>
#include <Il2CppModLoader/app/types/Quads.h>
#include <Il2CppModLoader/app/types/Triangles.h>
#include <Il2CppModLoader/app/types/AmbientOcclusion_Settings.h>
#include <Il2CppModLoader/app/types/SMAA_QualitySettings.h>
#include <Il2CppModLoader/app/types/SMAA.h>
#include <Il2CppModLoader/app/types/SMAA_QualitySettings__Array.h>
#include <Il2CppModLoader/app/types/FXAA_Preset.h>
#include <Il2CppModLoader/app/types/FXAA.h>
#include <Il2CppModLoader/app/types/FXAA_Preset__Array.h>
#include <Il2CppModLoader/app/types/IAntiAliasing.h>
#include <Il2CppModLoader/app/types/RenderTextureUtility.h>
#include <Il2CppModLoader/app/types/DepthOfField_QualitySettings.h>
#include <Il2CppModLoader/app/types/DepthOfField_QualitySettings__Array.h>
#include <Il2CppModLoader/app/types/ScreenSpaceReflection_SSRSettings.h>
#include <Il2CppModLoader/app/types/ScreenSpaceReflection.h>
#include <Il2CppModLoader/app/types/CCFont_Char.h>
#include <Il2CppModLoader/app/types/CCText.h>
#include <Il2CppModLoader/app/types/GUIController.h>
#include <Il2CppModLoader/app/types/CCTextCylinderWrapper.h>
#include <Il2CppModLoader/app/types/CCTextTorusWrapper.h>
#include <Il2CppModLoader/app/types/AkAcousticSurface.h>
#include <Il2CppModLoader/app/types/AkAudioFormat.h>
#include <Il2CppModLoader/app/types/AkChannelConfig.h>
#include <Il2CppModLoader/app/types/AkAudioSourceChangeCallbackInfo.h>
#include <Il2CppModLoader/app/types/AkAuxSendValue.h>
#include <Il2CppModLoader/app/types/AkBankCallbackInfo.h>
#include <Il2CppModLoader/app/types/AKRESULT__Enum.h>
#include <Il2CppModLoader/app/types/AkTransform.h>
#include <Il2CppModLoader/app/types/AkDeviceSettings.h>

namespace app::classes::types {
    namespace ILogger_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ILogger_1__Class** type_info = (::app::ILogger_1__Class**)(modloader::win::memory::resolve_rva(0x047644E8)); }
    namespace PlayFabEventRouter { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabEventRouter__Class** type_info = (::app::PlayFabEventRouter__Class**)(modloader::win::memory::resolve_rva(0x0478D590)); }
    namespace IEventPipeline { IL2CPP_MODLOADER_DLLEXPORT ::app::IEventPipeline__Class** type_info = (::app::IEventPipeline__Class**)(modloader::win::memory::resolve_rva(0x0472F1F8)); }
    namespace PluginContractKeyComparator { IL2CPP_MODLOADER_DLLEXPORT ::app::PluginContractKeyComparator__Class** type_info = (::app::PluginContractKeyComparator__Class**)(modloader::win::memory::resolve_rva(0x0475DD20)); }
    namespace PluginManager { IL2CPP_MODLOADER_DLLEXPORT ::app::PluginManager__Class** type_info = (::app::PluginManager__Class**)(modloader::win::memory::resolve_rva(0x0470D3A8)); }
    namespace IPlayFabPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::IPlayFabPlugin__Class** type_info = (::app::IPlayFabPlugin__Class**)(modloader::win::memory::resolve_rva(0x047257C0)); }
    namespace ITransportPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::ITransportPlugin__Class** type_info = (::app::ITransportPlugin__Class**)(modloader::win::memory::resolve_rva(0x04724460)); }
    namespace IOneDSTransportPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::IOneDSTransportPlugin__Class** type_info = (::app::IOneDSTransportPlugin__Class**)(modloader::win::memory::resolve_rva(0x04704B50)); }
    namespace EventBatchingStage { IL2CPP_MODLOADER_DLLEXPORT ::app::EventBatchingStage__Class** type_info = (::app::EventBatchingStage__Class**)(modloader::win::memory::resolve_rva(0x0471DC90)); }
    namespace TitleEventBatch { IL2CPP_MODLOADER_DLLEXPORT ::app::TitleEventBatch__Class** type_info = (::app::TitleEventBatch__Class**)(modloader::win::memory::resolve_rva(0x04794F48)); }
    namespace EventBatchingStage_GetInputConsumingEnumerable_d_19 { IL2CPP_MODLOADER_DLLEXPORT ::app::EventBatchingStage_GetInputConsumingEnumerable_d_19__Class** type_info = (::app::EventBatchingStage_GetInputConsumingEnumerable_d_19__Class**)(modloader::win::memory::resolve_rva(0x0478A5C8)); }
    namespace EventSendingStage { IL2CPP_MODLOADER_DLLEXPORT ::app::EventSendingStage__Class** type_info = (::app::EventSendingStage__Class**)(modloader::win::memory::resolve_rva(0x04745988)); }
    namespace EventSendingStage_c { IL2CPP_MODLOADER_DLLEXPORT ::app::EventSendingStage_c__Class** type_info = (::app::EventSendingStage_c__Class**)(modloader::win::memory::resolve_rva(0x0476F0B8)); }
    namespace OneDSEventPipelineSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::OneDSEventPipelineSettings__Class** type_info = (::app::OneDSEventPipelineSettings__Class**)(modloader::win::memory::resolve_rva(0x04777830)); }
    namespace LogLevel__Enum_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::LogLevel__Enum_1__Class** type_info = (::app::LogLevel__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x0478ACF8)); }
    namespace DebugLogger { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugLogger__Class** type_info = (::app::DebugLogger__Class**)(modloader::win::memory::resolve_rva(0x0478B4D0)); }
    namespace HttpResponseObject { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpResponseObject__Class** type_info = (::app::HttpResponseObject__Class**)(modloader::win::memory::resolve_rva(0x04717E38)); }
    namespace ISerializerPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::ISerializerPlugin__Class** type_info = (::app::ISerializerPlugin__Class**)(modloader::win::memory::resolve_rva(0x04737D48)); }
    namespace SimpleJsonInstance { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleJsonInstance__Class** type_info = (::app::SimpleJsonInstance__Class**)(modloader::win::memory::resolve_rva(0x047035B8)); }
    namespace PocoJsonSerializerStrategy { IL2CPP_MODLOADER_DLLEXPORT ::app::PocoJsonSerializerStrategy__Class** type_info = (::app::PocoJsonSerializerStrategy__Class**)(modloader::win::memory::resolve_rva(0x0472E0B8)); }
    namespace SimpleJsonInstance_PlayFabSimpleJsonCuztomization { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class** type_info = (::app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class**)(modloader::win::memory::resolve_rva(0x0473F168)); }
    namespace JsonProperty_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonProperty_1__Class** type_info = (::app::JsonProperty_1__Class**)(modloader::win::memory::resolve_rva(0x04793FB8)); }
    namespace ReflectionUtils_ConstructorDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_ConstructorDelegate__Class** type_info = (::app::ReflectionUtils_ConstructorDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472B570)); }
    namespace JsonArray { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonArray__Class** type_info = (::app::JsonArray__Class**)(modloader::win::memory::resolve_rva(0x047263B8)); }
    namespace JsonObject { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonObject__Class** type_info = (::app::JsonObject__Class**)(modloader::win::memory::resolve_rva(0x04771490)); }
    namespace IJsonSerializerStrategy { IL2CPP_MODLOADER_DLLEXPORT ::app::IJsonSerializerStrategy__Class** type_info = (::app::IJsonSerializerStrategy__Class**)(modloader::win::memory::resolve_rva(0x0474BBA8)); }
    namespace ReflectionUtils_GetDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_GetDelegate__Class** type_info = (::app::ReflectionUtils_GetDelegate__Class**)(modloader::win::memory::resolve_rva(0x04774DB8)); }
    namespace ReflectionUtils_SetDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_SetDelegate__Class** type_info = (::app::ReflectionUtils_SetDelegate__Class**)(modloader::win::memory::resolve_rva(0x04763568)); }
    namespace ReflectionUtils_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_1__Class** type_info = (::app::ReflectionUtils_1__Class**)(modloader::win::memory::resolve_rva(0x0475B630)); }
    namespace ReflectionUtils_c_DisplayClass26_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c_DisplayClass26_0__Class** type_info = (::app::ReflectionUtils_c_DisplayClass26_0__Class**)(modloader::win::memory::resolve_rva(0x04702EA0)); }
    namespace ReflectionUtils_c_DisplayClass30_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c_DisplayClass30_0__Class** type_info = (::app::ReflectionUtils_c_DisplayClass30_0__Class**)(modloader::win::memory::resolve_rva(0x047975D8)); }
    namespace ReflectionUtils_c_DisplayClass31_0_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c_DisplayClass31_0_1__Class** type_info = (::app::ReflectionUtils_c_DisplayClass31_0_1__Class**)(modloader::win::memory::resolve_rva(0x04774FC0)); }
    namespace ReflectionUtils_c_DisplayClass34_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c_DisplayClass34_0__Class** type_info = (::app::ReflectionUtils_c_DisplayClass34_0__Class**)(modloader::win::memory::resolve_rva(0x0474B6B0)); }
    namespace ReflectionUtils_c_DisplayClass35_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c_DisplayClass35_0__Class** type_info = (::app::ReflectionUtils_c_DisplayClass35_0__Class**)(modloader::win::memory::resolve_rva(0x04789998)); }
    namespace ScreenTimeTracker { IL2CPP_MODLOADER_DLLEXPORT ::app::ScreenTimeTracker__Class** type_info = (::app::ScreenTimeTracker__Class**)(modloader::win::memory::resolve_rva(0x04772620)); }
    namespace PlayFabLoggerBase { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabLoggerBase__Class** type_info = (::app::PlayFabLoggerBase__Class**)(modloader::win::memory::resolve_rva(0x047084A8)); }
    namespace PlayFabLogger { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabLogger__Class** type_info = (::app::PlayFabLogger__Class**)(modloader::win::memory::resolve_rva(0x047297B0)); }
    namespace PlayFabLoggerBase_RegisterLogger_d_23 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabLoggerBase_RegisterLogger_d_23__Class** type_info = (::app::PlayFabLoggerBase_RegisterLogger_d_23__Class**)(modloader::win::memory::resolve_rva(0x04732C50)); }
    namespace CallRequestContainer { IL2CPP_MODLOADER_DLLEXPORT ::app::CallRequestContainer__Class** type_info = (::app::CallRequestContainer__Class**)(modloader::win::memory::resolve_rva(0x04743E68)); }
    namespace OneDsUnityHttpPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::OneDsUnityHttpPlugin__Class** type_info = (::app::OneDsUnityHttpPlugin__Class**)(modloader::win::memory::resolve_rva(0x04792548)); }
    namespace OneDsUnityHttpPlugin_c_DisplayClass1_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::OneDsUnityHttpPlugin_c_DisplayClass1_0__Class** type_info = (::app::OneDsUnityHttpPlugin_c_DisplayClass1_0__Class**)(modloader::win::memory::resolve_rva(0x04752548)); }
    namespace OneDsUnityHttpPlugin_Post_d_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::OneDsUnityHttpPlugin_Post_d_1__Class** type_info = (::app::OneDsUnityHttpPlugin_Post_d_1__Class**)(modloader::win::memory::resolve_rva(0x0477F828)); }
    namespace OneDsWebRequestPlugin { IL2CPP_MODLOADER_DLLEXPORT ::app::OneDsWebRequestPlugin__Class** type_info = (::app::OneDsWebRequestPlugin__Class**)(modloader::win::memory::resolve_rva(0x04763448)); }
    namespace OneDsWebRequestPlugin_c_DisplayClass0_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::OneDsWebRequestPlugin_c_DisplayClass0_0__Class** type_info = (::app::OneDsWebRequestPlugin_c_DisplayClass0_0__Class**)(modloader::win::memory::resolve_rva(0x04772288)); }
    namespace OneDsWebRequestPlugin_c_DisplayClass0_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::OneDsWebRequestPlugin_c_DisplayClass0_1__Class** type_info = (::app::OneDsWebRequestPlugin_c_DisplayClass0_1__Class**)(modloader::win::memory::resolve_rva(0x04715CF8)); }
    namespace ApiProcessingEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::ApiProcessingEventArgs__Class** type_info = (::app::ApiProcessingEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0478DE40)); }
    namespace PlayFabHttp_ApiProcessErrorEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabHttp_ApiProcessErrorEvent__Class** type_info = (::app::PlayFabHttp_ApiProcessErrorEvent__Class**)(modloader::win::memory::resolve_rva(0x04764EB0)); }
    namespace IPlayFabLogger { IL2CPP_MODLOADER_DLLEXPORT ::app::IPlayFabLogger__Class** type_info = (::app::IPlayFabLogger__Class**)(modloader::win::memory::resolve_rva(0x04752F10)); }
    namespace PlayFabHttp { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabHttp__Class** type_info = (::app::PlayFabHttp__Class**)(modloader::win::memory::resolve_rva(0x0478C1F0)); }
    namespace IScreenTimeTracker { IL2CPP_MODLOADER_DLLEXPORT ::app::IScreenTimeTracker__Class** type_info = (::app::IScreenTimeTracker__Class**)(modloader::win::memory::resolve_rva(0x0478DB20)); }
    namespace PlayFabHttp_SendScreenTimeEvents_d_19 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabHttp_SendScreenTimeEvents_d_19__Class** type_info = (::app::PlayFabHttp_SendScreenTimeEvents_d_19__Class**)(modloader::win::memory::resolve_rva(0x04793128)); }
    namespace PlayFabUnityHttp { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabUnityHttp__Class** type_info = (::app::PlayFabUnityHttp__Class**)(modloader::win::memory::resolve_rva(0x04746EC0)); }
    namespace PlayFabUnityHttp_SimpleCallCoroutine_d_18 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabUnityHttp_SimpleCallCoroutine_d_18__Class** type_info = (::app::PlayFabUnityHttp_SimpleCallCoroutine_d_18__Class**)(modloader::win::memory::resolve_rva(0x0475A088)); }
    namespace PlayFabUnityHttp_Post_d_20 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabUnityHttp_Post_d_20__Class** type_info = (::app::PlayFabUnityHttp_Post_d_20__Class**)(modloader::win::memory::resolve_rva(0x0477BD08)); }
    namespace PlayFabWebRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabWebRequest__Class** type_info = (::app::PlayFabWebRequest__Class**)(modloader::win::memory::resolve_rva(0x047652B8)); }
    namespace PlayFabWebRequest_c_DisplayClass29_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabWebRequest_c_DisplayClass29_0__Class** type_info = (::app::PlayFabWebRequest_c_DisplayClass29_0__Class**)(modloader::win::memory::resolve_rva(0x047625E8)); }
    namespace PlayFabWebRequest_c_DisplayClass30_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabWebRequest_c_DisplayClass30_0__Class** type_info = (::app::PlayFabWebRequest_c_DisplayClass30_0__Class**)(modloader::win::memory::resolve_rva(0x04761AC8)); }
    namespace PlayFabWebRequest_c_DisplayClass31_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabWebRequest_c_DisplayClass31_0__Class** type_info = (::app::PlayFabWebRequest_c_DisplayClass31_0__Class**)(modloader::win::memory::resolve_rva(0x0472C630)); }
    namespace PlayFabWebRequest_c_DisplayClass38_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabWebRequest_c_DisplayClass38_0__Class** type_info = (::app::PlayFabWebRequest_c_DisplayClass38_0__Class**)(modloader::win::memory::resolve_rva(0x0472A500)); }
    namespace PlayFabWebRequest_c_DisplayClass39_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabWebRequest_c_DisplayClass39_0__Class** type_info = (::app::PlayFabWebRequest_c_DisplayClass39_0__Class**)(modloader::win::memory::resolve_rva(0x0471E250)); }
    namespace PlayFabEvents { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabEvents__Class** type_info = (::app::PlayFabEvents__Class**)(modloader::win::memory::resolve_rva(0x0470D410)); }
    namespace PlayFabEvents_PlayFabErrorEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabEvents_PlayFabErrorEvent__Class** type_info = (::app::PlayFabEvents_PlayFabErrorEvent__Class**)(modloader::win::memory::resolve_rva(0x0476F6E0)); }
    namespace Water { IL2CPP_MODLOADER_DLLEXPORT ::app::Water__Class** type_info = (::app::Water__Class**)(modloader::win::memory::resolve_rva(0x04782AF0)); }
    namespace Water3 { IL2CPP_MODLOADER_DLLEXPORT ::app::Water3__Class** type_info = (::app::Water3__Class**)(modloader::win::memory::resolve_rva(0x047639A8)); }
    namespace Water3Manager { IL2CPP_MODLOADER_DLLEXPORT ::app::Water3Manager__Class** type_info = (::app::Water3Manager__Class**)(modloader::win::memory::resolve_rva(0x0477C1B0)); }
    namespace Water3UnderwaterEffect { IL2CPP_MODLOADER_DLLEXPORT ::app::Water3UnderwaterEffect__Class** type_info = (::app::Water3UnderwaterEffect__Class**)(modloader::win::memory::resolve_rva(0x04777708)); }
    namespace Blur { IL2CPP_MODLOADER_DLLEXPORT ::app::Blur__Class** type_info = (::app::Blur__Class**)(modloader::win::memory::resolve_rva(0x04731E78)); }
    namespace RenderTexture__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RenderTexture__Array__Class** type_info = (::app::RenderTexture__Array__Class**)(modloader::win::memory::resolve_rva(0x04767310)); }
    namespace CameraMotionBlur { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraMotionBlur__Class** type_info = (::app::CameraMotionBlur__Class**)(modloader::win::memory::resolve_rva(0x04704C98)); }
    namespace DepthOfFieldDeprecated { IL2CPP_MODLOADER_DLLEXPORT ::app::DepthOfFieldDeprecated__Class** type_info = (::app::DepthOfFieldDeprecated__Class**)(modloader::win::memory::resolve_rva(0x0470BB70)); }
    namespace NoiseAndGrain { IL2CPP_MODLOADER_DLLEXPORT ::app::NoiseAndGrain__Class** type_info = (::app::NoiseAndGrain__Class**)(modloader::win::memory::resolve_rva(0x04740118)); }
    namespace Quads { IL2CPP_MODLOADER_DLLEXPORT ::app::Quads__Class** type_info = (::app::Quads__Class**)(modloader::win::memory::resolve_rva(0x047611E8)); }
    namespace Triangles { IL2CPP_MODLOADER_DLLEXPORT ::app::Triangles__Class** type_info = (::app::Triangles__Class**)(modloader::win::memory::resolve_rva(0x04734E80)); }
    namespace AmbientOcclusion_Settings { IL2CPP_MODLOADER_DLLEXPORT ::app::AmbientOcclusion_Settings__Class** type_info = (::app::AmbientOcclusion_Settings__Class**)(modloader::win::memory::resolve_rva(0x0471AA30)); }
    namespace SMAA_QualitySettings { IL2CPP_MODLOADER_DLLEXPORT ::app::SMAA_QualitySettings__Class** type_info = (::app::SMAA_QualitySettings__Class**)(modloader::win::memory::resolve_rva(0x04777208)); }
    namespace SMAA { IL2CPP_MODLOADER_DLLEXPORT ::app::SMAA__Class** type_info = (::app::SMAA__Class**)(modloader::win::memory::resolve_rva(0x047826B8)); }
    namespace SMAA_QualitySettings__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SMAA_QualitySettings__Array__Class** type_info = (::app::SMAA_QualitySettings__Array__Class**)(modloader::win::memory::resolve_rva(0x04724410)); }
    namespace FXAA_Preset { IL2CPP_MODLOADER_DLLEXPORT ::app::FXAA_Preset__Class** type_info = (::app::FXAA_Preset__Class**)(modloader::win::memory::resolve_rva(0x04747438)); }
    namespace FXAA { IL2CPP_MODLOADER_DLLEXPORT ::app::FXAA__Class** type_info = (::app::FXAA__Class**)(modloader::win::memory::resolve_rva(0x04790228)); }
    namespace FXAA_Preset__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FXAA_Preset__Array__Class** type_info = (::app::FXAA_Preset__Array__Class**)(modloader::win::memory::resolve_rva(0x0477D228)); }
    namespace IAntiAliasing { IL2CPP_MODLOADER_DLLEXPORT ::app::IAntiAliasing__Class** type_info = (::app::IAntiAliasing__Class**)(modloader::win::memory::resolve_rva(0x04722D48)); }
    namespace RenderTextureUtility { IL2CPP_MODLOADER_DLLEXPORT ::app::RenderTextureUtility__Class** type_info = (::app::RenderTextureUtility__Class**)(modloader::win::memory::resolve_rva(0x0476E200)); }
    namespace DepthOfField_QualitySettings { IL2CPP_MODLOADER_DLLEXPORT ::app::DepthOfField_QualitySettings__Class** type_info = (::app::DepthOfField_QualitySettings__Class**)(modloader::win::memory::resolve_rva(0x047421D8)); }
    namespace DepthOfField_QualitySettings__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DepthOfField_QualitySettings__Array__Class** type_info = (::app::DepthOfField_QualitySettings__Array__Class**)(modloader::win::memory::resolve_rva(0x047049F8)); }
    namespace ScreenSpaceReflection_SSRSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::ScreenSpaceReflection_SSRSettings__Class** type_info = (::app::ScreenSpaceReflection_SSRSettings__Class**)(modloader::win::memory::resolve_rva(0x047338A0)); }
    namespace ScreenSpaceReflection { IL2CPP_MODLOADER_DLLEXPORT ::app::ScreenSpaceReflection__Class** type_info = (::app::ScreenSpaceReflection__Class**)(modloader::win::memory::resolve_rva(0x047733A0)); }
    namespace CCFont_Char { IL2CPP_MODLOADER_DLLEXPORT ::app::CCFont_Char__Class** type_info = (::app::CCFont_Char__Class**)(modloader::win::memory::resolve_rva(0x047074C8)); }
    namespace CCText { IL2CPP_MODLOADER_DLLEXPORT ::app::CCText__Class** type_info = (::app::CCText__Class**)(modloader::win::memory::resolve_rva(0x04787F38)); }
    namespace GUIController { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIController__Class** type_info = (::app::GUIController__Class**)(modloader::win::memory::resolve_rva(0x047238C8)); }
    namespace CCTextCylinderWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::CCTextCylinderWrapper__Class** type_info = (::app::CCTextCylinderWrapper__Class**)(modloader::win::memory::resolve_rva(0x047829E0)); }
    namespace CCTextTorusWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::CCTextTorusWrapper__Class** type_info = (::app::CCTextTorusWrapper__Class**)(modloader::win::memory::resolve_rva(0x0476B2B0)); }
    namespace AkAcousticSurface { IL2CPP_MODLOADER_DLLEXPORT ::app::AkAcousticSurface__Class** type_info = (::app::AkAcousticSurface__Class**)(modloader::win::memory::resolve_rva(0x0471BFE8)); }
    namespace AkAudioFormat { IL2CPP_MODLOADER_DLLEXPORT ::app::AkAudioFormat__Class** type_info = (::app::AkAudioFormat__Class**)(modloader::win::memory::resolve_rva(0x04768700)); }
    namespace AkChannelConfig { IL2CPP_MODLOADER_DLLEXPORT ::app::AkChannelConfig__Class** type_info = (::app::AkChannelConfig__Class**)(modloader::win::memory::resolve_rva(0x04756568)); }
    namespace AkAudioSourceChangeCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkAudioSourceChangeCallbackInfo__Class** type_info = (::app::AkAudioSourceChangeCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0478B700)); }
    namespace AkAuxSendValue { IL2CPP_MODLOADER_DLLEXPORT ::app::AkAuxSendValue__Class** type_info = (::app::AkAuxSendValue__Class**)(modloader::win::memory::resolve_rva(0x047902F8)); }
    namespace AkBankCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkBankCallbackInfo__Class** type_info = (::app::AkBankCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04720E10)); }
    namespace AKRESULT__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AKRESULT__Enum__Class** type_info = (::app::AKRESULT__Enum__Class**)(modloader::win::memory::resolve_rva(0x047037E0)); }
    namespace AkTransform { IL2CPP_MODLOADER_DLLEXPORT ::app::AkTransform__Class** type_info = (::app::AkTransform__Class**)(modloader::win::memory::resolve_rva(0x047077A0)); }
    namespace AkDeviceSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkDeviceSettings__Class** type_info = (::app::AkDeviceSettings__Class**)(modloader::win::memory::resolve_rva(0x04705110)); }
}
