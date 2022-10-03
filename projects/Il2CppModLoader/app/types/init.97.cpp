#include <Il2CppModLoader/app/types/Attacking_DamageDisplayText.h>
#include <Il2CppModLoader/app/types/CompatibilitySwitches.h>
#include <Il2CppModLoader/app/types/Console_WindowsConsole.h>
#include <Il2CppModLoader/app/types/ConstraintEvaluator.h>
#include <Il2CppModLoader/app/types/ConvertUtils.h>
#include <Il2CppModLoader/app/types/CrashContext.h>
#include <Il2CppModLoader/app/types/Crc32Helper.h>
#include <Il2CppModLoader/app/types/CrossSceneReference.h>
#include <Il2CppModLoader/app/types/CultureInfoConverter_CultureInfoMapper.h>
#include <Il2CppModLoader/app/types/DataPointIcon_Icons.h>
#include <Il2CppModLoader/app/types/DataViewManagerListItemTypeDescriptor__Array.h>
#include <Il2CppModLoader/app/types/DateTimeFormat.h>
#include <Il2CppModLoader/app/types/DateTimeParse.h>
#include <Il2CppModLoader/app/types/DateTimeParse_DS__Enum__Array.h>
#include <Il2CppModLoader/app/types/DateTimeParse_DS__Enum__Array__Array.h>
#include <Il2CppModLoader/app/types/DefaultControls.h>
#include <Il2CppModLoader/app/types/DelegateHelpers_1.h>
#include <Il2CppModLoader/app/types/DemoConfiguration.h>
#include <Il2CppModLoader/app/types/DictionaryHashHelpers.h>
#include <Il2CppModLoader/app/types/Diff.h>
#include <Il2CppModLoader/app/types/DiskBlurKernelGenerator.h>
#include <Il2CppModLoader/app/types/Dns.h>
#include <Il2CppModLoader/app/types/DynamicDataLinkUtils.h>
#include <Il2CppModLoader/app/types/EditorScene.h>
#include <Il2CppModLoader/app/types/EncodingHelper.h>
#include <Il2CppModLoader/app/types/EntityWeightResolver.h>
#include <Il2CppModLoader/app/types/EnumTools.h>
#include <Il2CppModLoader/app/types/EnumUtils.h>
#include <Il2CppModLoader/app/types/Environment.h>
#include <Il2CppModLoader/app/types/EventDescritorHelpers.h>
#include <Il2CppModLoader/app/types/EventId.h>
#include <Il2CppModLoader/app/types/FPSTestFields.h>
#include <Il2CppModLoader/app/types/FSharpUtils.h>
#include <Il2CppModLoader/app/types/FastEncoderStatics.h>
#include <Il2CppModLoader/app/types/File.h>
#include <Il2CppModLoader/app/types/FileLocations.h>
#include <Il2CppModLoader/app/types/FileProcessor.h>
#include <Il2CppModLoader/app/types/FontUpdateTracker.h>
#include <Il2CppModLoader/app/types/FormatProvider_Number.h>
#include <Il2CppModLoader/app/types/FrameProfilerPlayerLoopInjector.h>
#include <Il2CppModLoader/app/types/GUILayoutUtility.h>
#include <Il2CppModLoader/app/types/GUIStateObjects.h>
#include <Il2CppModLoader/app/types/GUITargetAttribute.h>
#include <Il2CppModLoader/app/types/HebrewNumber.h>
#include <Il2CppModLoader/app/types/HebrewNumber_HS__Enum__Array.h>
#include <Il2CppModLoader/app/types/HebrewNumber_HS__Enum__Array__Array.h>
#include <Il2CppModLoader/app/types/HebrewNumber_HebrewValue__Array.h>
#include <Il2CppModLoader/app/types/Input_Old.h>
#include <Il2CppModLoader/app/types/InternalConstants.h>
#include <Il2CppModLoader/app/types/JsonArrayAttribute.h>
#include <Il2CppModLoader/app/types/JsonDictionaryAttribute.h>
#include <Il2CppModLoader/app/types/OidGroup__Enum_1.h>
#include <Il2CppModLoader/app/types/OpCodes.h>
#include <Il2CppModLoader/app/types/PKCS1.h>
#include <Il2CppModLoader/app/types/PKCS1_1.h>
#include <Il2CppModLoader/app/types/Parser_DateTime.h>
#include <Il2CppModLoader/app/types/PersistencyTools.h>
#include <Il2CppModLoader/app/types/RectTransformUtility.h>
#include <Il2CppModLoader/app/types/Schedules.h>
#include <Il2CppModLoader/app/types/ShaderID.h>
#include <Il2CppModLoader/app/types/ShaderID_ContrastEnhance.h>
#include <Il2CppModLoader/app/types/ShaderID_ContrastGain.h>
#include <Il2CppModLoader/app/types/ShaderID_ContrastStretchEffect.h>
#include <Il2CppModLoader/app/types/ShaderID_Convolution3x3.h>
#include <Il2CppModLoader/app/types/ShaderID_CreaseShading.h>
#include <Il2CppModLoader/app/types/ShaderID_CrossStitch.h>
#include <Il2CppModLoader/app/types/ShaderID_CustomWater.h>
#include <Il2CppModLoader/app/types/ShaderID_DebugRenderer.h>
#include <Il2CppModLoader/app/types/ShaderID_DepthOfField.h>
#include <Il2CppModLoader/app/types/ShaderID_DepthOfFieldDeprecated.h>
#include <Il2CppModLoader/app/types/ShaderID_DepthOfField_1.h>
#include <Il2CppModLoader/app/types/ShaderID_DirectionalBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_Dithering.h>
#include <Il2CppModLoader/app/types/ShaderID_DoubleVision.h>
#include <Il2CppModLoader/app/types/ShaderID_DynamicLightSource.h>
#include <Il2CppModLoader/app/types/ShaderID_DynamicLightsManager.h>
#include <Il2CppModLoader/app/types/ShaderID_DynamicLookup.h>
#include <Il2CppModLoader/app/types/ShaderID_EdgeDetection.h>
#include <Il2CppModLoader/app/types/ShaderID_EnvironmentLightingModifier.h>
#include <Il2CppModLoader/app/types/ShaderID_EnvironmentShadingModifier.h>
#include <Il2CppModLoader/app/types/ShaderID_FBIKBoxing.h>
#include <Il2CppModLoader/app/types/ShaderID_FPSCharacter.h>
#include <Il2CppModLoader/app/types/ShaderID_FXAA.h>
#include <Il2CppModLoader/app/types/ShaderID_FastVignette.h>
#include <Il2CppModLoader/app/types/ShaderID_Fisheye.h>
#include <Il2CppModLoader/app/types/ShaderID_FoxEnemy2.h>
#include <Il2CppModLoader/app/types/ShaderID_FrameBlendingFilter.h>
#include <Il2CppModLoader/app/types/ShaderID_Frost.h>
#include <Il2CppModLoader/app/types/ShaderID_GUIController.h>
#include <Il2CppModLoader/app/types/ShaderID_SeinWorldState.h>
#include <Il2CppModLoader/app/types/ShaderKeyword.h>
#include <Il2CppModLoader/app/types/ShaderKeyword_FXAA.h>
#include <Il2CppModLoader/app/types/Shader_DefaultTextures.h>
#include <Il2CppModLoader/app/types/TypeInformation_1__Array.h>
#include <Il2CppModLoader/app/types/UberPostCacheIds.h>
#include <Il2CppModLoader/app/types/Utils.h>
#include <Il2CppModLoader/app/types/Utils_3.h>
#include <Il2CppModLoader/app/types/WebUtility.h>
#include <Il2CppModLoader/app/types/XboxControllerInput.h>
#include <Il2CppModLoader/app/types/XmlCustomFormatter.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Console_WindowsConsole {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Console_WindowsConsole__Class** type_info = (::app::Console_WindowsConsole__Class**)(modloader::win::memory::resolve_rva(0x04791E10));
    }
    namespace EncodingHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncodingHelper__Class** type_info = (::app::EncodingHelper__Class**)(modloader::win::memory::resolve_rva(0x04779208));
    }
    namespace EnumTools {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnumTools__Class** type_info = (::app::EnumTools__Class**)(modloader::win::memory::resolve_rva(0x04752638));
    }
    namespace ConstraintEvaluator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConstraintEvaluator__Class** type_info = (::app::ConstraintEvaluator__Class**)(modloader::win::memory::resolve_rva(0x04793188));
    }
    namespace ShaderID_ContrastEnhance {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ContrastEnhance__Class** type_info = (::app::ShaderID_ContrastEnhance__Class**)(modloader::win::memory::resolve_rva(0x047850E8));
    }
    namespace ShaderID_ContrastGain {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ContrastGain__Class** type_info = (::app::ShaderID_ContrastGain__Class**)(modloader::win::memory::resolve_rva(0x04707320));
    }
    namespace ShaderID_ContrastStretchEffect {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ContrastStretchEffect__Class** type_info = (::app::ShaderID_ContrastStretchEffect__Class**)(modloader::win::memory::resolve_rva(0x04788810));
    }
    namespace XboxControllerInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxControllerInput__Class** type_info = (::app::XboxControllerInput__Class**)(modloader::win::memory::resolve_rva(0x04740E38));
    }
    namespace ConvertUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConvertUtils__Class** type_info = (::app::ConvertUtils__Class**)(modloader::win::memory::resolve_rva(0x04737C60));
    }
    namespace TypeInformation_1__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeInformation_1__Array__Class** type_info = (::app::TypeInformation_1__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FE78));
    }
    namespace ShaderID_Convolution3x3 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Convolution3x3__Class** type_info = (::app::ShaderID_Convolution3x3__Class**)(modloader::win::memory::resolve_rva(0x047155D8));
    }
    namespace CrashContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CrashContext__Class** type_info = (::app::CrashContext__Class**)(modloader::win::memory::resolve_rva(0x04709B70));
    }
    namespace Crc32Helper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Crc32Helper__Class** type_info = (::app::Crc32Helper__Class**)(modloader::win::memory::resolve_rva(0x04747890));
    }
    namespace ShaderID_CreaseShading {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CreaseShading__Class** type_info = (::app::ShaderID_CreaseShading__Class**)(modloader::win::memory::resolve_rva(0x0476E400));
    }
    namespace CrossSceneReference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CrossSceneReference__Class** type_info = (::app::CrossSceneReference__Class**)(modloader::win::memory::resolve_rva(0x04718310));
    }
    namespace ShaderID_CrossStitch {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CrossStitch__Class** type_info = (::app::ShaderID_CrossStitch__Class**)(modloader::win::memory::resolve_rva(0x0478D8C0));
    }
    namespace CultureInfoConverter_CultureInfoMapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CultureInfoConverter_CultureInfoMapper__Class** type_info = (::app::CultureInfoConverter_CultureInfoMapper__Class**)(modloader::win::memory::resolve_rva(0x0473E4A0));
    }
    namespace ShaderID_CustomWater {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CustomWater__Class** type_info = (::app::ShaderID_CustomWater__Class**)(modloader::win::memory::resolve_rva(0x0476F508));
    }
    namespace Utils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Utils__Class** type_info = (::app::Utils__Class**)(modloader::win::memory::resolve_rva(0x047128A0));
    }
    namespace OidGroup__Enum_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OidGroup__Enum_1__Class** type_info = (::app::OidGroup__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x0474D788));
    }
    namespace Attacking_DamageDisplayText {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Attacking_DamageDisplayText__Class** type_info = (::app::Attacking_DamageDisplayText__Class**)(modloader::win::memory::resolve_rva(0x0478DC58));
    }
    namespace DataPointIcon_Icons {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataPointIcon_Icons__Class** type_info = (::app::DataPointIcon_Icons__Class**)(modloader::win::memory::resolve_rva(0x0470E6B8));
    }
    namespace Diff {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Diff__Class** type_info = (::app::Diff__Class**)(modloader::win::memory::resolve_rva(0x04702158));
    }
    namespace DataViewManagerListItemTypeDescriptor__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataViewManagerListItemTypeDescriptor__Array__Class** type_info = (::app::DataViewManagerListItemTypeDescriptor__Array__Class**)(modloader::win::memory::resolve_rva(0x0471FED8));
    }
    namespace HebrewNumber {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HebrewNumber__Class** type_info = (::app::HebrewNumber__Class**)(modloader::win::memory::resolve_rva(0x04795478));
    }
    namespace HebrewNumber_HebrewValue__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HebrewNumber_HebrewValue__Array__Class** type_info = (::app::HebrewNumber_HebrewValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04787860));
    }
    namespace HebrewNumber_HS__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HebrewNumber_HS__Enum__Array__Class** type_info = (::app::HebrewNumber_HS__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04704880));
    }
    namespace HebrewNumber_HS__Enum__Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HebrewNumber_HS__Enum__Array__Array__Class** type_info = (::app::HebrewNumber_HS__Enum__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x047889E8));
    }
    namespace DateTimeFormat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeFormat__Class** type_info = (::app::DateTimeFormat__Class**)(modloader::win::memory::resolve_rva(0x047110A8));
    }
    namespace DateTimeParse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeParse__Class** type_info = (::app::DateTimeParse__Class**)(modloader::win::memory::resolve_rva(0x04763740));
    }
    namespace DateTimeParse_DS__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeParse_DS__Enum__Array__Class** type_info = (::app::DateTimeParse_DS__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04741AF0));
    }
    namespace DateTimeParse_DS__Enum__Array__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeParse_DS__Enum__Array__Array__Class** type_info = (::app::DateTimeParse_DS__Enum__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04734F00));
    }
    namespace Parser_DateTime {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Parser_DateTime__Class** type_info = (::app::Parser_DateTime__Class**)(modloader::win::memory::resolve_rva(0x0471C8D0));
    }
    namespace Input_Old {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Input_Old__Class** type_info = (::app::Input_Old__Class**)(modloader::win::memory::resolve_rva(0x04714C38));
    }
    namespace ShaderID_DebugRenderer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DebugRenderer__Class** type_info = (::app::ShaderID_DebugRenderer__Class**)(modloader::win::memory::resolve_rva(0x0472C200));
    }
    namespace JsonArrayAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonArrayAttribute__Class** type_info = (::app::JsonArrayAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476DF58));
    }
    namespace JsonDictionaryAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonDictionaryAttribute__Class** type_info = (::app::JsonDictionaryAttribute__Class**)(modloader::win::memory::resolve_rva(0x04702FB8));
    }
    namespace DefaultControls {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultControls__Class** type_info = (::app::DefaultControls__Class**)(modloader::win::memory::resolve_rva(0x0477B0F8));
    }
    namespace Shader_DefaultTextures {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Shader_DefaultTextures__Class** type_info = (::app::Shader_DefaultTextures__Class**)(modloader::win::memory::resolve_rva(0x047925D8));
    }
    namespace InternalConstants {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalConstants__Class** type_info = (::app::InternalConstants__Class**)(modloader::win::memory::resolve_rva(0x04746788));
    }
    namespace DelegateHelpers_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DelegateHelpers_1__Class** type_info = (::app::DelegateHelpers_1__Class**)(modloader::win::memory::resolve_rva(0x0473C740));
    }
    namespace DemoConfiguration {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DemoConfiguration__Class** type_info = (::app::DemoConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04732FC0));
    }
    namespace ShaderID_DepthOfFieldDeprecated {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DepthOfFieldDeprecated__Class** type_info = (::app::ShaderID_DepthOfFieldDeprecated__Class**)(modloader::win::memory::resolve_rva(0x04798EB8));
    }
    namespace ShaderID_DepthOfField_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DepthOfField_1__Class** type_info = (::app::ShaderID_DepthOfField_1__Class**)(modloader::win::memory::resolve_rva(0x047087D0));
    }
    namespace ShaderID_DepthOfField {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DepthOfField__Class** type_info = (::app::ShaderID_DepthOfField__Class**)(modloader::win::memory::resolve_rva(0x0472DE78));
    }
    namespace PKCS1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS1__Class** type_info = (::app::PKCS1__Class**)(modloader::win::memory::resolve_rva(0x04730B18));
    }
    namespace PKCS1_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PKCS1_1__Class** type_info = (::app::PKCS1_1__Class**)(modloader::win::memory::resolve_rva(0x0473E048));
    }
    namespace DictionaryHashHelpers {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DictionaryHashHelpers__Class** type_info = (::app::DictionaryHashHelpers__Class**)(modloader::win::memory::resolve_rva(0x0475CEB8));
    }
    namespace ShaderID_DirectionalBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DirectionalBlur__Class** type_info = (::app::ShaderID_DirectionalBlur__Class**)(modloader::win::memory::resolve_rva(0x04798D70));
    }
    namespace FSharpUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FSharpUtils__Class** type_info = (::app::FSharpUtils__Class**)(modloader::win::memory::resolve_rva(0x0474E980));
    }
    namespace DiskBlurKernelGenerator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DiskBlurKernelGenerator__Class** type_info = (::app::DiskBlurKernelGenerator__Class**)(modloader::win::memory::resolve_rva(0x04708C30));
    }
    namespace ShaderID {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID__Class** type_info = (::app::ShaderID__Class**)(modloader::win::memory::resolve_rva(0x04783F98));
    }
    namespace ShaderID_Dithering {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Dithering__Class** type_info = (::app::ShaderID_Dithering__Class**)(modloader::win::memory::resolve_rva(0x04748750));
    }
    namespace Dns {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dns__Class** type_info = (::app::Dns__Class**)(modloader::win::memory::resolve_rva(0x047743C0));
    }
    namespace ShaderID_DoubleVision {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DoubleVision__Class** type_info = (::app::ShaderID_DoubleVision__Class**)(modloader::win::memory::resolve_rva(0x0478D578));
    }
    namespace RectTransformUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RectTransformUtility__Class** type_info = (::app::RectTransformUtility__Class**)(modloader::win::memory::resolve_rva(0x04772090));
    }
    namespace DynamicDataLinkUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicDataLinkUtils__Class** type_info = (::app::DynamicDataLinkUtils__Class**)(modloader::win::memory::resolve_rva(0x047524D8));
    }
    namespace ShaderID_DynamicLightSource {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DynamicLightSource__Class** type_info = (::app::ShaderID_DynamicLightSource__Class**)(modloader::win::memory::resolve_rva(0x04791BE0));
    }
    namespace ShaderID_DynamicLightsManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DynamicLightsManager__Class** type_info = (::app::ShaderID_DynamicLightsManager__Class**)(modloader::win::memory::resolve_rva(0x047427E0));
    }
    namespace ShaderID_DynamicLookup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DynamicLookup__Class** type_info = (::app::ShaderID_DynamicLookup__Class**)(modloader::win::memory::resolve_rva(0x04708AB0));
    }
    namespace OpCodes {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpCodes__Class** type_info = (::app::OpCodes__Class**)(modloader::win::memory::resolve_rva(0x04715BA8));
    }
    namespace ShaderID_EdgeDetection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_EdgeDetection__Class** type_info = (::app::ShaderID_EdgeDetection__Class**)(modloader::win::memory::resolve_rva(0x04763B88));
    }
    namespace EditorScene {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EditorScene__Class** type_info = (::app::EditorScene__Class**)(modloader::win::memory::resolve_rva(0x04722870));
    }
    namespace WebUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebUtility__Class** type_info = (::app::WebUtility__Class**)(modloader::win::memory::resolve_rva(0x04738F08));
    }
    namespace PersistencyTools {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PersistencyTools__Class** type_info = (::app::PersistencyTools__Class**)(modloader::win::memory::resolve_rva(0x0475DE70));
    }
    namespace EntityWeightResolver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityWeightResolver__Class** type_info = (::app::EntityWeightResolver__Class**)(modloader::win::memory::resolve_rva(0x04716FB8));
    }
    namespace XmlCustomFormatter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlCustomFormatter__Class** type_info = (::app::XmlCustomFormatter__Class**)(modloader::win::memory::resolve_rva(0x0475F888));
    }
    namespace EnumUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EnumUtils__Class** type_info = (::app::EnumUtils__Class**)(modloader::win::memory::resolve_rva(0x04700950));
    }
    namespace CompatibilitySwitches {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompatibilitySwitches__Class** type_info = (::app::CompatibilitySwitches__Class**)(modloader::win::memory::resolve_rva(0x04765E18));
    }
    namespace ShaderID_EnvironmentLightingModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_EnvironmentLightingModifier__Class** type_info = (::app::ShaderID_EnvironmentLightingModifier__Class**)(modloader::win::memory::resolve_rva(0x04785368));
    }
    namespace ShaderID_EnvironmentShadingModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_EnvironmentShadingModifier__Class** type_info = (::app::ShaderID_EnvironmentShadingModifier__Class**)(modloader::win::memory::resolve_rva(0x0476C1E8));
    }
    namespace Environment {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Environment__Class** type_info = (::app::Environment__Class**)(modloader::win::memory::resolve_rva(0x0478E510));
    }
    namespace EventDescritorHelpers {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EventDescritorHelpers__Class** type_info = (::app::EventDescritorHelpers__Class**)(modloader::win::memory::resolve_rva(0x04722428));
    }
    namespace EventId {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EventId__Class** type_info = (::app::EventId__Class**)(modloader::win::memory::resolve_rva(0x04797C38));
    }
    namespace ShaderID_SeinWorldState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_SeinWorldState__Class** type_info = (::app::ShaderID_SeinWorldState__Class**)(modloader::win::memory::resolve_rva(0x04788CB8));
    }
    namespace ShaderID_FBIKBoxing {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FBIKBoxing__Class** type_info = (::app::ShaderID_FBIKBoxing__Class**)(modloader::win::memory::resolve_rva(0x0475F200));
    }
    namespace ShaderID_FPSCharacter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FPSCharacter__Class** type_info = (::app::ShaderID_FPSCharacter__Class**)(modloader::win::memory::resolve_rva(0x0472E9B8));
    }
    namespace FPSTestFields {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FPSTestFields__Class** type_info = (::app::FPSTestFields__Class**)(modloader::win::memory::resolve_rva(0x0473D0A0));
    }
    namespace Utils_3 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Utils_3__Class** type_info = (::app::Utils_3__Class**)(modloader::win::memory::resolve_rva(0x04745DC8));
    }
    namespace ShaderID_FXAA {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FXAA__Class** type_info = (::app::ShaderID_FXAA__Class**)(modloader::win::memory::resolve_rva(0x04724440));
    }
    namespace ShaderKeyword_FXAA {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderKeyword_FXAA__Class** type_info = (::app::ShaderKeyword_FXAA__Class**)(modloader::win::memory::resolve_rva(0x04716D58));
    }
    namespace FastEncoderStatics {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FastEncoderStatics__Class** type_info = (::app::FastEncoderStatics__Class**)(modloader::win::memory::resolve_rva(0x04784C18));
    }
    namespace ShaderID_FastVignette {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FastVignette__Class** type_info = (::app::ShaderID_FastVignette__Class**)(modloader::win::memory::resolve_rva(0x04767148));
    }
    namespace FileLocations {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileLocations__Class** type_info = (::app::FileLocations__Class**)(modloader::win::memory::resolve_rva(0x047138D8));
    }
    namespace FileProcessor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileProcessor__Class** type_info = (::app::FileProcessor__Class**)(modloader::win::memory::resolve_rva(0x04763BC8));
    }
    namespace File {
        IL2CPP_MODLOADER_DLLEXPORT ::app::File__Class** type_info = (::app::File__Class**)(modloader::win::memory::resolve_rva(0x04738460));
    }
    namespace ShaderKeyword {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderKeyword__Class** type_info = (::app::ShaderKeyword__Class**)(modloader::win::memory::resolve_rva(0x04721378));
    }
    namespace UberPostCacheIds {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberPostCacheIds__Class** type_info = (::app::UberPostCacheIds__Class**)(modloader::win::memory::resolve_rva(0x0475E740));
    }
    namespace ShaderID_Fisheye {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Fisheye__Class** type_info = (::app::ShaderID_Fisheye__Class**)(modloader::win::memory::resolve_rva(0x04793F70));
    }
    namespace Schedules {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Schedules__Class** type_info = (::app::Schedules__Class**)(modloader::win::memory::resolve_rva(0x0476AE80));
    }
    namespace FontUpdateTracker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FontUpdateTracker__Class** type_info = (::app::FontUpdateTracker__Class**)(modloader::win::memory::resolve_rva(0x04774480));
    }
    namespace FormatProvider_Number {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FormatProvider_Number__Class** type_info = (::app::FormatProvider_Number__Class**)(modloader::win::memory::resolve_rva(0x04731B28));
    }
    namespace ShaderID_FoxEnemy2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FoxEnemy2__Class** type_info = (::app::ShaderID_FoxEnemy2__Class**)(modloader::win::memory::resolve_rva(0x04739CC0));
    }
    namespace ShaderID_FrameBlendingFilter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_FrameBlendingFilter__Class** type_info = (::app::ShaderID_FrameBlendingFilter__Class**)(modloader::win::memory::resolve_rva(0x04791BD0));
    }
    namespace FrameProfilerPlayerLoopInjector {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameProfilerPlayerLoopInjector__Class** type_info = (::app::FrameProfilerPlayerLoopInjector__Class**)(modloader::win::memory::resolve_rva(0x04709F18));
    }
    namespace ShaderID_Frost {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Frost__Class** type_info = (::app::ShaderID_Frost__Class**)(modloader::win::memory::resolve_rva(0x04790E58));
    }
    namespace ShaderID_GUIController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_GUIController__Class** type_info = (::app::ShaderID_GUIController__Class**)(modloader::win::memory::resolve_rva(0x0472D8D0));
    }
    namespace GUILayoutUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GUILayoutUtility__Class** type_info = (::app::GUILayoutUtility__Class**)(modloader::win::memory::resolve_rva(0x04751080));
    }
    namespace GUIStateObjects {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GUIStateObjects__Class** type_info = (::app::GUIStateObjects__Class**)(modloader::win::memory::resolve_rva(0x04705EC0));
    }
    namespace GUITargetAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GUITargetAttribute__Class** type_info = (::app::GUITargetAttribute__Class**)(modloader::win::memory::resolve_rva(0x0474BB50));
    }
} // namespace app::classes::types
