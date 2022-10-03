#include <Il2CppModLoader/app/types/DateTimeConstantAttribute__Array.h>
#include <Il2CppModLoader/app/types/DecimalConstantAttribute__Array.h>
#include <Il2CppModLoader/app/types/ExitGUIException.h>
#include <Il2CppModLoader/app/types/GUIUtility.h>
#include <Il2CppModLoader/app/types/GameFolders.h>
#include <Il2CppModLoader/app/types/GameObjectLayer.h>
#include <Il2CppModLoader/app/types/GarbageCollector.h>
#include <Il2CppModLoader/app/types/GenericCastManagerFlags.h>
#include <Il2CppModLoader/app/types/GizmoSystem.h>
#include <Il2CppModLoader/app/types/GlobalLog.h>
#include <Il2CppModLoader/app/types/GoThroughPlatformManager.h>
#include <Il2CppModLoader/app/types/GraphicsExt.h>
#include <Il2CppModLoader/app/types/HashHelpers.h>
#include <Il2CppModLoader/app/types/HeaderInfo__Array.h>
#include <Il2CppModLoader/app/types/HideFlagsExtensions.h>
#include <Il2CppModLoader/app/types/HitStopManager.h>
#include <Il2CppModLoader/app/types/HtmlTernaryTree.h>
#include <Il2CppModLoader/app/types/HttpListenerContext__Array.h>
#include <Il2CppModLoader/app/types/ImmutableCollectionsUtils.h>
#include <Il2CppModLoader/app/types/InWaterMode__Enum.h>
#include <Il2CppModLoader/app/types/InputTracking.h>
#include <Il2CppModLoader/app/types/InputTriangle__Array.h>
#include <Il2CppModLoader/app/types/InternalInflateConstants.h>
#include <Il2CppModLoader/app/types/InternalRemotingServices.h>
#include <Il2CppModLoader/app/types/Internal_SubsystemDescriptors.h>
#include <Il2CppModLoader/app/types/Internal_SubsystemInstances.h>
#include <Il2CppModLoader/app/types/JSONParser.h>
#include <Il2CppModLoader/app/types/JavaScriptUtils.h>
#include <Il2CppModLoader/app/types/JsonConvert.h>
#include <Il2CppModLoader/app/types/KeyBuilder.h>
#include <Il2CppModLoader/app/types/KeyBuilder_1.h>
#include <Il2CppModLoader/app/types/LayoutUtility.h>
#include <Il2CppModLoader/app/types/LeaderboardFilters.h>
#include <Il2CppModLoader/app/types/LocalAppContextSwitches.h>
#include <Il2CppModLoader/app/types/MSCompatUnicodeTableUtil.h>
#include <Il2CppModLoader/app/types/MathfInternal.h>
#include <Il2CppModLoader/app/types/MemoryProfiler.h>
#include <Il2CppModLoader/app/types/MeshValidator.h>
#include <Il2CppModLoader/app/types/MessageParserUtility.h>
#include <Il2CppModLoader/app/types/MetaballDefs.h>
#include <Il2CppModLoader/app/types/MoonProfilerManager.h>
#include <Il2CppModLoader/app/types/MoonReferenceValidator.h>
#include <Il2CppModLoader/app/types/MoonRenderContext_Samplers.h>
#include <Il2CppModLoader/app/types/MoonRenderPipelineView_Samplers.h>
#include <Il2CppModLoader/app/types/MoonTelemetryLogger.h>
#include <Il2CppModLoader/app/types/NativeInputSystem.h>
#include <Il2CppModLoader/app/types/NavMesh.h>
#include <Il2CppModLoader/app/types/NavigationSettings.h>
#include <Il2CppModLoader/app/types/P3D_Brush_LightPaintAdditive.h>
#include <Il2CppModLoader/app/types/P3D_Brush_LightPaintBlur.h>
#include <Il2CppModLoader/app/types/P3D_Brush_LightPaintErase.h>
#include <Il2CppModLoader/app/types/P3D_Brush_LightPaintSubtractive.h>
#include <Il2CppModLoader/app/types/Parser_MD5.h>
#include <Il2CppModLoader/app/types/PerfTestTimer__Array.h>
#include <Il2CppModLoader/app/types/PlayFabClientAPI.h>
#include <Il2CppModLoader/app/types/PlayFabSendingProxy.h>
#include <Il2CppModLoader/app/types/PlayFabSettings.h>
#include <Il2CppModLoader/app/types/PlayFabSimpleJson.h>
#include <Il2CppModLoader/app/types/PlayFabUtil.h>
#include <Il2CppModLoader/app/types/ProfilerExt.h>
#include <Il2CppModLoader/app/types/RenderTarget_Samplers.h>
#include <Il2CppModLoader/app/types/ReplayValidator.h>
#include <Il2CppModLoader/app/types/ShaderID_GaussianBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_Glitch.h>
#include <Il2CppModLoader/app/types/ShaderID_GlobalDebugQuadScaleMenuItem.h>
#include <Il2CppModLoader/app/types/ShaderID_GlobalFog.h>
#include <Il2CppModLoader/app/types/ShaderID_GradientRamp.h>
#include <Il2CppModLoader/app/types/ShaderID_GradientRampDynamic.h>
#include <Il2CppModLoader/app/types/ShaderID_GrainyBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_Grayscale.h>
#include <Il2CppModLoader/app/types/ShaderID_GrayscaleEffect.h>
#include <Il2CppModLoader/app/types/ShaderID_Halftone.h>
#include <Il2CppModLoader/app/types/ShaderID_HueFocus.h>
#include <Il2CppModLoader/app/types/ShaderID_HueSaturationValue.h>
#include <Il2CppModLoader/app/types/ShaderID_ImageEffects.h>
#include <Il2CppModLoader/app/types/ShaderID_Kuwahara.h>
#include <Il2CppModLoader/app/types/ShaderID_Led.h>
#include <Il2CppModLoader/app/types/ShaderID_LensAberrations.h>
#include <Il2CppModLoader/app/types/ShaderID_LensDistortionBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_Letterbox.h>
#include <Il2CppModLoader/app/types/ShaderID_Levels.h>
#include <Il2CppModLoader/app/types/ShaderID_LoFiPalette.h>
#include <Il2CppModLoader/app/types/ShaderID_LookupFilter.h>
#include <Il2CppModLoader/app/types/ShaderID_LookupFilter3D.h>
#include <Il2CppModLoader/app/types/ShaderID_MotionBlur.h>
#include <Il2CppModLoader/app/types/ShaderKeyword_LensAberrations.h>
#include <Il2CppModLoader/app/types/ShaderKeyword_LightCanvas.h>
#include <Il2CppModLoader/app/types/SoundComposition_1.h>
#include <Il2CppModLoader/app/types/SpriteAtlasManager.h>
#include <Il2CppModLoader/app/types/StencilMaterial.h>
#include <Il2CppModLoader/app/types/SubsystemManager.h>
#include <Il2CppModLoader/app/types/Tests.h>
#include <Il2CppModLoader/app/types/UberShaderProperties.h>
#include <Il2CppModLoader/app/types/UberSwarmPOIManager.h>
#include <Il2CppModLoader/app/types/UberWaterControl_Simulation.h>
#include <Il2CppModLoader/app/types/UnsafeNclNativeMethods_HttpApi.h>
#include <Il2CppModLoader/app/types/UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID.h>
#include <Il2CppModLoader/app/types/UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID.h>
#include <Il2CppModLoader/app/types/UriHelper.h>
#include <Il2CppModLoader/app/types/WebUtility_HtmlEntities.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GUIUtility__Class** type_info = (::app::GUIUtility__Class**)(modloader::win::memory::resolve_rva(0x0475E6E0));
    }
    namespace ExitGUIException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExitGUIException__Class** type_info = (::app::ExitGUIException__Class**)(modloader::win::memory::resolve_rva(0x04721908));
    }
    namespace PlayFabClientAPI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabClientAPI__Class** type_info = (::app::PlayFabClientAPI__Class**)(modloader::win::memory::resolve_rva(0x04791658));
    }
    namespace GameFolders {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameFolders__Class** type_info = (::app::GameFolders__Class**)(modloader::win::memory::resolve_rva(0x0474BB48));
    }
    namespace SoundComposition_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoundComposition_1__Class** type_info = (::app::SoundComposition_1__Class**)(modloader::win::memory::resolve_rva(0x04728CD8));
    }
    namespace GameObjectLayer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameObjectLayer__Class** type_info = (::app::GameObjectLayer__Class**)(modloader::win::memory::resolve_rva(0x04776338));
    }
    namespace GarbageCollector {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GarbageCollector__Class** type_info = (::app::GarbageCollector__Class**)(modloader::win::memory::resolve_rva(0x047924B8));
    }
    namespace ShaderID_GaussianBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GaussianBlur__Class** type_info = (::app::ShaderID_GaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x047380F8));
    }
    namespace GenericCastManagerFlags {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GenericCastManagerFlags__Class** type_info = (::app::GenericCastManagerFlags__Class**)(modloader::win::memory::resolve_rva(0x047445C0));
    }
    namespace InputTriangle__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputTriangle__Array__Class** type_info = (::app::InputTriangle__Array__Class**)(modloader::win::memory::resolve_rva(0x0471B5E0));
    }
    namespace GizmoSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GizmoSystem__Class** type_info = (::app::GizmoSystem__Class**)(modloader::win::memory::resolve_rva(0x0470DA98));
    }
    namespace ShaderID_Glitch {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Glitch__Class** type_info = (::app::ShaderID_Glitch__Class**)(modloader::win::memory::resolve_rva(0x04792388));
    }
    namespace ShaderID_GlobalDebugQuadScaleMenuItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GlobalDebugQuadScaleMenuItem__Class** type_info = (::app::ShaderID_GlobalDebugQuadScaleMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047338A8));
    }
    namespace ShaderID_GlobalFog {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GlobalFog__Class** type_info = (::app::ShaderID_GlobalFog__Class**)(modloader::win::memory::resolve_rva(0x04761D38));
    }
    namespace GlobalLog {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GlobalLog__Class** type_info = (::app::GlobalLog__Class**)(modloader::win::memory::resolve_rva(0x0476C8A8));
    }
    namespace GoThroughPlatformManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GoThroughPlatformManager__Class** type_info = (::app::GoThroughPlatformManager__Class**)(modloader::win::memory::resolve_rva(0x0471ECD8));
    }
    namespace ShaderID_GradientRampDynamic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GradientRampDynamic__Class** type_info = (::app::ShaderID_GradientRampDynamic__Class**)(modloader::win::memory::resolve_rva(0x0471F658));
    }
    namespace ShaderID_GradientRamp {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GradientRamp__Class** type_info = (::app::ShaderID_GradientRamp__Class**)(modloader::win::memory::resolve_rva(0x04749EF8));
    }
    namespace ShaderID_GrainyBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GrainyBlur__Class** type_info = (::app::ShaderID_GrainyBlur__Class**)(modloader::win::memory::resolve_rva(0x0473DF50));
    }
    namespace GraphicsExt {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GraphicsExt__Class** type_info = (::app::GraphicsExt__Class**)(modloader::win::memory::resolve_rva(0x047254E0));
    }
    namespace ShaderID_GrayscaleEffect {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GrayscaleEffect__Class** type_info = (::app::ShaderID_GrayscaleEffect__Class**)(modloader::win::memory::resolve_rva(0x04731768));
    }
    namespace ShaderID_Grayscale {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Grayscale__Class** type_info = (::app::ShaderID_Grayscale__Class**)(modloader::win::memory::resolve_rva(0x0473E550));
    }
    namespace UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID__Class** type_info = (::app::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID__Class**)(modloader::win::memory::resolve_rva(0x04760320));
    }
    namespace UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class** type_info = (::app::UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID__Class**)(modloader::win::memory::resolve_rva(0x04784878));
    }
    namespace UnsafeNclNativeMethods_HttpApi {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnsafeNclNativeMethods_HttpApi__Class** type_info = (::app::UnsafeNclNativeMethods_HttpApi__Class**)(modloader::win::memory::resolve_rva(0x04702C40));
    }
    namespace ShaderID_Halftone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Halftone__Class** type_info = (::app::ShaderID_Halftone__Class**)(modloader::win::memory::resolve_rva(0x04731848));
    }
    namespace HashHelpers {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HashHelpers__Class** type_info = (::app::HashHelpers__Class**)(modloader::win::memory::resolve_rva(0x04732D20));
    }
    namespace HeaderInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HeaderInfo__Array__Class** type_info = (::app::HeaderInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0470FE80));
    }
    namespace HideFlagsExtensions {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HideFlagsExtensions__Class** type_info = (::app::HideFlagsExtensions__Class**)(modloader::win::memory::resolve_rva(0x0472C2D8));
    }
    namespace Tests {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tests__Class** type_info = (::app::Tests__Class**)(modloader::win::memory::resolve_rva(0x04740C18));
    }
    namespace PerfTestTimer__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PerfTestTimer__Array__Class** type_info = (::app::PerfTestTimer__Array__Class**)(modloader::win::memory::resolve_rva(0x04791640));
    }
    namespace HitStopManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HitStopManager__Class** type_info = (::app::HitStopManager__Class**)(modloader::win::memory::resolve_rva(0x0470B158));
    }
    namespace HtmlTernaryTree {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HtmlTernaryTree__Class** type_info = (::app::HtmlTernaryTree__Class**)(modloader::win::memory::resolve_rva(0x04793600));
    }
    namespace WebUtility_HtmlEntities {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebUtility_HtmlEntities__Class** type_info = (::app::WebUtility_HtmlEntities__Class**)(modloader::win::memory::resolve_rva(0x047707F8));
    }
    namespace HttpListenerContext__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerContext__Array__Class** type_info = (::app::HttpListenerContext__Array__Class**)(modloader::win::memory::resolve_rva(0x04709098));
    }
    namespace ShaderID_HueFocus {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_HueFocus__Class** type_info = (::app::ShaderID_HueFocus__Class**)(modloader::win::memory::resolve_rva(0x047494E0));
    }
    namespace ShaderID_HueSaturationValue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_HueSaturationValue__Class** type_info = (::app::ShaderID_HueSaturationValue__Class**)(modloader::win::memory::resolve_rva(0x04713860));
    }
    namespace ShaderID_ImageEffects {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ImageEffects__Class** type_info = (::app::ShaderID_ImageEffects__Class**)(modloader::win::memory::resolve_rva(0x0472DE48));
    }
    namespace SpriteAtlasManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SpriteAtlasManager__Class** type_info = (::app::SpriteAtlasManager__Class**)(modloader::win::memory::resolve_rva(0x0477F1D0));
    }
    namespace ImmutableCollectionsUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ImmutableCollectionsUtils__Class** type_info = (::app::ImmutableCollectionsUtils__Class**)(modloader::win::memory::resolve_rva(0x0475CCA0));
    }
    namespace InWaterMode__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InWaterMode__Enum__Class** type_info = (::app::InWaterMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477D188));
    }
    namespace InternalInflateConstants {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalInflateConstants__Class** type_info = (::app::InternalInflateConstants__Class**)(modloader::win::memory::resolve_rva(0x047359F8));
    }
    namespace InputTracking {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputTracking__Class** type_info = (::app::InputTracking__Class**)(modloader::win::memory::resolve_rva(0x047088D0));
    }
    namespace InternalRemotingServices {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalRemotingServices__Class** type_info = (::app::InternalRemotingServices__Class**)(modloader::win::memory::resolve_rva(0x04760088));
    }
    namespace Internal_SubsystemDescriptors {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Internal_SubsystemDescriptors__Class** type_info = (::app::Internal_SubsystemDescriptors__Class**)(modloader::win::memory::resolve_rva(0x04727370));
    }
    namespace SubsystemManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SubsystemManager__Class** type_info = (::app::SubsystemManager__Class**)(modloader::win::memory::resolve_rva(0x0475A6B8));
    }
    namespace Internal_SubsystemInstances {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Internal_SubsystemInstances__Class** type_info = (::app::Internal_SubsystemInstances__Class**)(modloader::win::memory::resolve_rva(0x047022B0));
    }
    namespace UriHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UriHelper__Class** type_info = (::app::UriHelper__Class**)(modloader::win::memory::resolve_rva(0x04756FF0));
    }
    namespace JSONParser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JSONParser__Class** type_info = (::app::JSONParser__Class**)(modloader::win::memory::resolve_rva(0x04795250));
    }
    namespace JsonConvert {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonConvert__Class** type_info = (::app::JsonConvert__Class**)(modloader::win::memory::resolve_rva(0x04756980));
    }
    namespace JavaScriptUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JavaScriptUtils__Class** type_info = (::app::JavaScriptUtils__Class**)(modloader::win::memory::resolve_rva(0x047222B0));
    }
    namespace PlayFabSimpleJson {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabSimpleJson__Class** type_info = (::app::PlayFabSimpleJson__Class**)(modloader::win::memory::resolve_rva(0x04732E90));
    }
    namespace KeyBuilder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KeyBuilder__Class** type_info = (::app::KeyBuilder__Class**)(modloader::win::memory::resolve_rva(0x047588C8));
    }
    namespace KeyBuilder_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KeyBuilder_1__Class** type_info = (::app::KeyBuilder_1__Class**)(modloader::win::memory::resolve_rva(0x04795D78));
    }
    namespace ShaderID_Kuwahara {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Kuwahara__Class** type_info = (::app::ShaderID_Kuwahara__Class**)(modloader::win::memory::resolve_rva(0x04733908));
    }
    namespace LayoutUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LayoutUtility__Class** type_info = (::app::LayoutUtility__Class**)(modloader::win::memory::resolve_rva(0x04799B80));
    }
    namespace ReplayValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReplayValidator__Class** type_info = (::app::ReplayValidator__Class**)(modloader::win::memory::resolve_rva(0x0477E970));
    }
    namespace LeaderboardFilters {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardFilters__Class** type_info = (::app::LeaderboardFilters__Class**)(modloader::win::memory::resolve_rva(0x047613A8));
    }
    namespace ShaderID_Led {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Led__Class** type_info = (::app::ShaderID_Led__Class**)(modloader::win::memory::resolve_rva(0x0475FE88));
    }
    namespace ShaderKeyword_LensAberrations {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderKeyword_LensAberrations__Class** type_info = (::app::ShaderKeyword_LensAberrations__Class**)(modloader::win::memory::resolve_rva(0x047194C8));
    }
    namespace ShaderID_LensAberrations {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_LensAberrations__Class** type_info = (::app::ShaderID_LensAberrations__Class**)(modloader::win::memory::resolve_rva(0x04782AF8));
    }
    namespace ShaderID_LensDistortionBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_LensDistortionBlur__Class** type_info = (::app::ShaderID_LensDistortionBlur__Class**)(modloader::win::memory::resolve_rva(0x0472B0B8));
    }
    namespace ShaderID_Letterbox {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Letterbox__Class** type_info = (::app::ShaderID_Letterbox__Class**)(modloader::win::memory::resolve_rva(0x047155E0));
    }
    namespace ShaderID_Levels {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Levels__Class** type_info = (::app::ShaderID_Levels__Class**)(modloader::win::memory::resolve_rva(0x0478A4E8));
    }
    namespace ShaderKeyword_LightCanvas {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderKeyword_LightCanvas__Class** type_info = (::app::ShaderKeyword_LightCanvas__Class**)(modloader::win::memory::resolve_rva(0x04771F28));
    }
    namespace P3D_Brush_LightPaintAdditive {
        IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Brush_LightPaintAdditive__Class** type_info = (::app::P3D_Brush_LightPaintAdditive__Class**)(modloader::win::memory::resolve_rva(0x047862A8));
    }
    namespace P3D_Brush_LightPaintBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Brush_LightPaintBlur__Class** type_info = (::app::P3D_Brush_LightPaintBlur__Class**)(modloader::win::memory::resolve_rva(0x0473A590));
    }
    namespace P3D_Brush_LightPaintErase {
        IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Brush_LightPaintErase__Class** type_info = (::app::P3D_Brush_LightPaintErase__Class**)(modloader::win::memory::resolve_rva(0x04753740));
    }
    namespace P3D_Brush_LightPaintSubtractive {
        IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Brush_LightPaintSubtractive__Class** type_info = (::app::P3D_Brush_LightPaintSubtractive__Class**)(modloader::win::memory::resolve_rva(0x0478D2C0));
    }
    namespace ShaderID_LoFiPalette {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_LoFiPalette__Class** type_info = (::app::ShaderID_LoFiPalette__Class**)(modloader::win::memory::resolve_rva(0x04756570));
    }
    namespace PlayFabSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabSettings__Class** type_info = (::app::PlayFabSettings__Class**)(modloader::win::memory::resolve_rva(0x04715CF0));
    }
    namespace PlayFabUtil {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabUtil__Class** type_info = (::app::PlayFabUtil__Class**)(modloader::win::memory::resolve_rva(0x0471F3B0));
    }
    namespace ShaderID_LookupFilter3D {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_LookupFilter3D__Class** type_info = (::app::ShaderID_LookupFilter3D__Class**)(modloader::win::memory::resolve_rva(0x04767C90));
    }
    namespace ShaderID_LookupFilter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_LookupFilter__Class** type_info = (::app::ShaderID_LookupFilter__Class**)(modloader::win::memory::resolve_rva(0x04736CE0));
    }
    namespace Parser_MD5 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Parser_MD5__Class** type_info = (::app::Parser_MD5__Class**)(modloader::win::memory::resolve_rva(0x0473A000));
    }
    namespace MSCompatUnicodeTableUtil {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MSCompatUnicodeTableUtil__Class** type_info = (::app::MSCompatUnicodeTableUtil__Class**)(modloader::win::memory::resolve_rva(0x047066C0));
    }
    namespace StencilMaterial {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StencilMaterial__Class** type_info = (::app::StencilMaterial__Class**)(modloader::win::memory::resolve_rva(0x047454E8));
    }
    namespace MathfInternal {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MathfInternal__Class** type_info = (::app::MathfInternal__Class**)(modloader::win::memory::resolve_rva(0x04777E00));
    }
    namespace LocalAppContextSwitches {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocalAppContextSwitches__Class** type_info = (::app::LocalAppContextSwitches__Class**)(modloader::win::memory::resolve_rva(0x04728E48));
    }
    namespace MemoryProfiler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryProfiler__Class** type_info = (::app::MemoryProfiler__Class**)(modloader::win::memory::resolve_rva(0x04792890));
    }
    namespace MeshValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MeshValidator__Class** type_info = (::app::MeshValidator__Class**)(modloader::win::memory::resolve_rva(0x04784FA8));
    }
    namespace MessageParserUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MessageParserUtility__Class** type_info = (::app::MessageParserUtility__Class**)(modloader::win::memory::resolve_rva(0x0475FBD8));
    }
    namespace MetaballDefs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MetaballDefs__Class** type_info = (::app::MetaballDefs__Class**)(modloader::win::memory::resolve_rva(0x04770130));
    }
    namespace DecimalConstantAttribute__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DecimalConstantAttribute__Array__Class** type_info = (::app::DecimalConstantAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x047997D0));
    }
    namespace DateTimeConstantAttribute__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeConstantAttribute__Array__Class** type_info = (::app::DateTimeConstantAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x04734AE8));
    }
    namespace MoonProfilerManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonProfilerManager__Class** type_info = (::app::MoonProfilerManager__Class**)(modloader::win::memory::resolve_rva(0x047376F8));
    }
    namespace MoonReferenceValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonReferenceValidator__Class** type_info = (::app::MoonReferenceValidator__Class**)(modloader::win::memory::resolve_rva(0x0477B238));
    }
    namespace ProfilerExt {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ProfilerExt__Class** type_info = (::app::ProfilerExt__Class**)(modloader::win::memory::resolve_rva(0x04791310));
    }
    namespace MoonRenderPipelineView_Samplers {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonRenderPipelineView_Samplers__Class** type_info = (::app::MoonRenderPipelineView_Samplers__Class**)(modloader::win::memory::resolve_rva(0x04790FC0));
    }
    namespace MoonRenderContext_Samplers {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonRenderContext_Samplers__Class** type_info = (::app::MoonRenderContext_Samplers__Class**)(modloader::win::memory::resolve_rva(0x04704ED0));
    }
    namespace RenderTarget_Samplers {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RenderTarget_Samplers__Class** type_info = (::app::RenderTarget_Samplers__Class**)(modloader::win::memory::resolve_rva(0x0478FBF0));
    }
    namespace UberWaterControl_Simulation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberWaterControl_Simulation__Class** type_info = (::app::UberWaterControl_Simulation__Class**)(modloader::win::memory::resolve_rva(0x047084B0));
    }
    namespace UberShaderProperties {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderProperties__Class** type_info = (::app::UberShaderProperties__Class**)(modloader::win::memory::resolve_rva(0x047039E8));
    }
    namespace UberSwarmPOIManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberSwarmPOIManager__Class** type_info = (::app::UberSwarmPOIManager__Class**)(modloader::win::memory::resolve_rva(0x047748D0));
    }
    namespace MoonTelemetryLogger {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTelemetryLogger__Class** type_info = (::app::MoonTelemetryLogger__Class**)(modloader::win::memory::resolve_rva(0x047374E8));
    }
    namespace PlayFabSendingProxy {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabSendingProxy__Class** type_info = (::app::PlayFabSendingProxy__Class**)(modloader::win::memory::resolve_rva(0x04731A20));
    }
    namespace ShaderID_MotionBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_MotionBlur__Class** type_info = (::app::ShaderID_MotionBlur__Class**)(modloader::win::memory::resolve_rva(0x0474B480));
    }
    namespace NativeInputSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NativeInputSystem__Class** type_info = (::app::NativeInputSystem__Class**)(modloader::win::memory::resolve_rva(0x04721910));
    }
    namespace NavMesh {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NavMesh__Class** type_info = (::app::NavMesh__Class**)(modloader::win::memory::resolve_rva(0x04721E38));
    }
    namespace NavigationSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NavigationSettings__Class** type_info = (::app::NavigationSettings__Class**)(modloader::win::memory::resolve_rva(0x0471F438));
    }
} // namespace app::classes::types
