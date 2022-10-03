#include <Il2CppModLoader/app/types/AnalyticsBridge.h>
#include <Il2CppModLoader/app/types/AnalyticsSessionInfo.h>
#include <Il2CppModLoader/app/types/AnimationTransition_AnimationTransitionClipBoard.h>
#include <Il2CppModLoader/app/types/Application.h>
#include <Il2CppModLoader/app/types/ArtOptimizerGlobalSettings.h>
#include <Il2CppModLoader/app/types/ArtOptimizerHeuristics.h>
#include <Il2CppModLoader/app/types/ArtOptimizerSettings.h>
#include <Il2CppModLoader/app/types/Assert.h>
#include <Il2CppModLoader/app/types/AsyncHelper.h>
#include <Il2CppModLoader/app/types/AsyncTaskCache.h>
#include <Il2CppModLoader/app/types/AttackTokenPriority__Enum__Array.h>
#include <Il2CppModLoader/app/types/AttackTokens.h>
#include <Il2CppModLoader/app/types/AttributeHelperEngine.h>
#include <Il2CppModLoader/app/types/AudioExtensionManager.h>
#include <Il2CppModLoader/app/types/AudioSettings.h>
#include <Il2CppModLoader/app/types/BeforeRenderHelper.h>
#include <Il2CppModLoader/app/types/BigIntegerCalculator.h>
#include <Il2CppModLoader/app/types/BinXmlDateTime.h>
#include <Il2CppModLoader/app/types/BinaryCompatibility.h>
#include <Il2CppModLoader/app/types/BinaryCompatibility_1.h>
#include <Il2CppModLoader/app/types/BipedNaming.h>
#include <Il2CppModLoader/app/types/Bits.h>
#include <Il2CppModLoader/app/types/BlitTriExtensions.h>
#include <Il2CppModLoader/app/types/BrowserNative.h>
#include <Il2CppModLoader/app/types/BuilderInfo.h>
#include <Il2CppModLoader/app/types/ButtonIconUtility.h>
#include <Il2CppModLoader/app/types/CCDistanceMapGenerator.h>
#include <Il2CppModLoader/app/types/CCDistanceMapGenerator_Pixel__Array.h>
#include <Il2CppModLoader/app/types/CCStringBuilderUtility.h>
#include <Il2CppModLoader/app/types/CCText__Array.h>
#include <Il2CppModLoader/app/types/Converter.h>
#include <Il2CppModLoader/app/types/DateTimeUtils.h>
#include <Il2CppModLoader/app/types/Debugger.h>
#include <Il2CppModLoader/app/types/DisallowMultipleComponent__Array.h>
#include <Il2CppModLoader/app/types/DynamicUtils_BinderWrapper.h>
#include <Il2CppModLoader/app/types/ExecuteEvents.h>
#include <Il2CppModLoader/app/types/ExecuteInEditMode__Array.h>
#include <Il2CppModLoader/app/types/FormatterServices.h>
#include <Il2CppModLoader/app/types/GizmoHelper.h>
#include <Il2CppModLoader/app/types/InternalPrimitiveTypeE__Enum__Array.h>
#include <Il2CppModLoader/app/types/JsonTypeReflector.h>
#include <Il2CppModLoader/app/types/KeyMappings.h>
#include <Il2CppModLoader/app/types/Math2d.h>
#include <Il2CppModLoader/app/types/MonoCustomAttrs.h>
#include <Il2CppModLoader/app/types/Operators.h>
#include <Il2CppModLoader/app/types/OutputFolder.h>
#include <Il2CppModLoader/app/types/PhysicsUtils.h>
#include <Il2CppModLoader/app/types/RaycasterManager.h>
#include <Il2CppModLoader/app/types/ReflectionUtils.h>
#include <Il2CppModLoader/app/types/Reporting.h>
#include <Il2CppModLoader/app/types/RequireComponent__Array.h>
#include <Il2CppModLoader/app/types/SceneLoadingTest.h>
#include <Il2CppModLoader/app/types/SecurityUtils.h>
#include <Il2CppModLoader/app/types/ShaderID_AmplifyColorBase.h>
#include <Il2CppModLoader/app/types/ShaderID_AnalogTV.h>
#include <Il2CppModLoader/app/types/ShaderID_AnimatorController3rdPerson.h>
#include <Il2CppModLoader/app/types/ShaderID_Antialiasing.h>
#include <Il2CppModLoader/app/types/ShaderID_AreaMapCanvas.h>
#include <Il2CppModLoader/app/types/ShaderID_Beautify.h>
#include <Il2CppModLoader/app/types/ShaderID_BilateralGaussianBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_BleachBypass.h>
#include <Il2CppModLoader/app/types/ShaderID_Blend.h>
#include <Il2CppModLoader/app/types/ShaderID_Bloom.h>
#include <Il2CppModLoader/app/types/ShaderID_BloomAndFlares.h>
#include <Il2CppModLoader/app/types/ShaderID_BloomOptimized.h>
#include <Il2CppModLoader/app/types/ShaderID_Bloom_1.h>
#include <Il2CppModLoader/app/types/ShaderID_BlurOptimized.h>
#include <Il2CppModLoader/app/types/ShaderID_BrightnessContrastGamma.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_AnalogTV.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_BleachBypass.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_BrightnessContrastGamma.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_ChannelMixer.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_DoubleVision.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_FastVignette.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Frost.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Grayscale.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_HueSaturationValue.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Led.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Levels.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_PhotoFilter.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Pixelate.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Posterize.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_RadialBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Threshold.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Vibrance.h>
#include <Il2CppModLoader/app/types/ShaderTime.h>
#include <Il2CppModLoader/app/types/Sound.h>
#include <Il2CppModLoader/app/types/Statics.h>
#include <Il2CppModLoader/app/types/TeamCityHelper.h>
#include <Il2CppModLoader/app/types/Text_1__Array.h>
#include <Il2CppModLoader/app/types/TimelineCreationListenerExtensions.h>
#include <Il2CppModLoader/app/types/TimelineHelper.h>
#include <Il2CppModLoader/app/types/TimelineSolver.h>
#include <Il2CppModLoader/app/types/TransformExtensions.h>
#include <Il2CppModLoader/app/types/TypeCode__Enum__Array.h>
#include <Il2CppModLoader/app/types/Utils_1.h>
#include <Il2CppModLoader/app/types/ValidationHelper.h>
#include <Il2CppModLoader/app/types/XAsyncBlock.h>
#include <Il2CppModLoader/app/types/XmlConvert.h>
#include <Il2CppModLoader/app/types/Zones.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_AmplifyColorBase {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AmplifyColorBase__Class** type_info = (::app::ShaderID_AmplifyColorBase__Class**)(modloader::win::memory::resolve_rva(0x0472A158));
    }
    namespace ShaderID_AnalogTV {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AnalogTV__Class** type_info = (::app::ShaderID_AnalogTV__Class**)(modloader::win::memory::resolve_rva(0x0470DE10));
    }
    namespace AnalyticsBridge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnalyticsBridge__Class** type_info = (::app::AnalyticsBridge__Class**)(modloader::win::memory::resolve_rva(0x04790678));
    }
    namespace AnalyticsSessionInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnalyticsSessionInfo__Class** type_info = (::app::AnalyticsSessionInfo__Class**)(modloader::win::memory::resolve_rva(0x047668F0));
    }
    namespace Utils_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Utils_1__Class** type_info = (::app::Utils_1__Class**)(modloader::win::memory::resolve_rva(0x04732778));
    }
    namespace Math2d {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Math2d__Class** type_info = (::app::Math2d__Class**)(modloader::win::memory::resolve_rva(0x0477A3C8));
    }
    namespace GizmoHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GizmoHelper__Class** type_info = (::app::GizmoHelper__Class**)(modloader::win::memory::resolve_rva(0x04766318));
    }
    namespace Sound {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Sound__Class** type_info = (::app::Sound__Class**)(modloader::win::memory::resolve_rva(0x04769F88));
    }
    namespace ArtOptimizerSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizerSettings__Class** type_info = (::app::ArtOptimizerSettings__Class**)(modloader::win::memory::resolve_rva(0x0473EFD8));
    }
    namespace OutputFolder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OutputFolder__Class** type_info = (::app::OutputFolder__Class**)(modloader::win::memory::resolve_rva(0x04748788));
    }
    namespace AnimationTransition_AnimationTransitionClipBoard {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTransition_AnimationTransitionClipBoard__Class** type_info = (::app::AnimationTransition_AnimationTransitionClipBoard__Class**)(modloader::win::memory::resolve_rva(0x0472D9A0));
    }
    namespace ShaderID_AnimatorController3rdPerson {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AnimatorController3rdPerson__Class** type_info = (::app::ShaderID_AnimatorController3rdPerson__Class**)(modloader::win::memory::resolve_rva(0x04774580));
    }
    namespace ShaderID_Antialiasing {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Antialiasing__Class** type_info = (::app::ShaderID_Antialiasing__Class**)(modloader::win::memory::resolve_rva(0x0478F148));
    }
    namespace Application {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Application__Class** type_info = (::app::Application__Class**)(modloader::win::memory::resolve_rva(0x04786260));
    }
    namespace BeforeRenderHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BeforeRenderHelper__Class** type_info = (::app::BeforeRenderHelper__Class**)(modloader::win::memory::resolve_rva(0x0478AF08));
    }
    namespace ShaderID_AreaMapCanvas {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AreaMapCanvas__Class** type_info = (::app::ShaderID_AreaMapCanvas__Class**)(modloader::win::memory::resolve_rva(0x0475B0B0));
    }
    namespace ArtOptimizerGlobalSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizerGlobalSettings__Class** type_info = (::app::ArtOptimizerGlobalSettings__Class**)(modloader::win::memory::resolve_rva(0x047813C8));
    }
    namespace ArtOptimizerHeuristics {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizerHeuristics__Class** type_info = (::app::ArtOptimizerHeuristics__Class**)(modloader::win::memory::resolve_rva(0x04741620));
    }
    namespace ShaderTime {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderTime__Class** type_info = (::app::ShaderTime__Class**)(modloader::win::memory::resolve_rva(0x047761E8));
    }
    namespace MonoCustomAttrs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MonoCustomAttrs__Class** type_info = (::app::MonoCustomAttrs__Class**)(modloader::win::memory::resolve_rva(0x04719648));
    }
    namespace Assert {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Assert__Class** type_info = (::app::Assert__Class**)(modloader::win::memory::resolve_rva(0x0478C688));
    }
    namespace Debugger {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Debugger__Class** type_info = (::app::Debugger__Class**)(modloader::win::memory::resolve_rva(0x047891B8));
    }
    namespace AsyncHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncHelper__Class** type_info = (::app::AsyncHelper__Class**)(modloader::win::memory::resolve_rva(0x047164B8));
    }
    namespace XAsyncBlock {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XAsyncBlock__Class** type_info = (::app::XAsyncBlock__Class**)(modloader::win::memory::resolve_rva(0x0478C3B8));
    }
    namespace Reporting {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Reporting__Class** type_info = (::app::Reporting__Class**)(modloader::win::memory::resolve_rva(0x04749770));
    }
    namespace AsyncTaskCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncTaskCache__Class** type_info = (::app::AsyncTaskCache__Class**)(modloader::win::memory::resolve_rva(0x047170C8));
    }
    namespace AttackTokens {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AttackTokens__Class** type_info = (::app::AttackTokens__Class**)(modloader::win::memory::resolve_rva(0x04754A80));
    }
    namespace AttackTokenPriority__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AttackTokenPriority__Enum__Array__Class** type_info = (::app::AttackTokenPriority__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0470A990));
    }
    namespace AttributeHelperEngine {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AttributeHelperEngine__Class** type_info = (::app::AttributeHelperEngine__Class**)(modloader::win::memory::resolve_rva(0x0477B880));
    }
    namespace DisallowMultipleComponent__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DisallowMultipleComponent__Array__Class** type_info = (::app::DisallowMultipleComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x0475E828));
    }
    namespace ExecuteInEditMode__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExecuteInEditMode__Array__Class** type_info = (::app::ExecuteInEditMode__Array__Class**)(modloader::win::memory::resolve_rva(0x04797220));
    }
    namespace RequireComponent__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RequireComponent__Array__Class** type_info = (::app::RequireComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x047888C8));
    }
    namespace XmlConvert {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XmlConvert__Class** type_info = (::app::XmlConvert__Class**)(modloader::win::memory::resolve_rva(0x04740AE0));
    }
    namespace AudioExtensionManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AudioExtensionManager__Class** type_info = (::app::AudioExtensionManager__Class**)(modloader::win::memory::resolve_rva(0x04762B28));
    }
    namespace AudioSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AudioSettings__Class** type_info = (::app::AudioSettings__Class**)(modloader::win::memory::resolve_rva(0x0472FE88));
    }
    namespace ValidationHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ValidationHelper__Class** type_info = (::app::ValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x0472CE08));
    }
    namespace TimelineCreationListenerExtensions {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineCreationListenerExtensions__Class** type_info = (::app::TimelineCreationListenerExtensions__Class**)(modloader::win::memory::resolve_rva(0x0473D820));
    }
    namespace SceneLoadingTest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingTest__Class** type_info = (::app::SceneLoadingTest__Class**)(modloader::win::memory::resolve_rva(0x04789990));
    }
    namespace TeamCityHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TeamCityHelper__Class** type_info = (::app::TeamCityHelper__Class**)(modloader::win::memory::resolve_rva(0x0471ACD8));
    }
    namespace Zones {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Zones__Class** type_info = (::app::Zones__Class**)(modloader::win::memory::resolve_rva(0x04735F60));
    }
    namespace ExecuteEvents {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExecuteEvents__Class** type_info = (::app::ExecuteEvents__Class**)(modloader::win::memory::resolve_rva(0x04755FD0));
    }
    namespace RaycasterManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RaycasterManager__Class** type_info = (::app::RaycasterManager__Class**)(modloader::win::memory::resolve_rva(0x0471A7F0));
    }
    namespace ShaderID_Beautify {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Beautify__Class** type_info = (::app::ShaderID_Beautify__Class**)(modloader::win::memory::resolve_rva(0x0471E060));
    }
    namespace BigIntegerCalculator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BigIntegerCalculator__Class** type_info = (::app::BigIntegerCalculator__Class**)(modloader::win::memory::resolve_rva(0x04755270));
    }
    namespace ShaderID_BilateralGaussianBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BilateralGaussianBlur__Class** type_info = (::app::ShaderID_BilateralGaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x04729E78));
    }
    namespace BinXmlDateTime {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinXmlDateTime__Class** type_info = (::app::BinXmlDateTime__Class**)(modloader::win::memory::resolve_rva(0x04742740));
    }
    namespace FormatterServices {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FormatterServices__Class** type_info = (::app::FormatterServices__Class**)(modloader::win::memory::resolve_rva(0x04738670));
    }
    namespace BinaryCompatibility_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCompatibility_1__Class** type_info = (::app::BinaryCompatibility_1__Class**)(modloader::win::memory::resolve_rva(0x047284D0));
    }
    namespace BinaryCompatibility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCompatibility__Class** type_info = (::app::BinaryCompatibility__Class**)(modloader::win::memory::resolve_rva(0x0476A5E0));
    }
    namespace Converter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Converter__Class** type_info = (::app::Converter__Class**)(modloader::win::memory::resolve_rva(0x0470AC18));
    }
    namespace TypeCode__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TypeCode__Enum__Array__Class** type_info = (::app::TypeCode__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04744D38));
    }
    namespace InternalPrimitiveTypeE__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalPrimitiveTypeE__Enum__Array__Class** type_info = (::app::InternalPrimitiveTypeE__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04739AB0));
    }
    namespace ReflectionUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils__Class** type_info = (::app::ReflectionUtils__Class**)(modloader::win::memory::resolve_rva(0x0476A7F0));
    }
    namespace Operators {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Operators__Class** type_info = (::app::Operators__Class**)(modloader::win::memory::resolve_rva(0x04783638));
    }
    namespace JsonTypeReflector {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonTypeReflector__Class** type_info = (::app::JsonTypeReflector__Class**)(modloader::win::memory::resolve_rva(0x04728D20));
    }
    namespace DynamicUtils_BinderWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicUtils_BinderWrapper__Class** type_info = (::app::DynamicUtils_BinderWrapper__Class**)(modloader::win::memory::resolve_rva(0x04744358));
    }
    namespace SecurityUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityUtils__Class** type_info = (::app::SecurityUtils__Class**)(modloader::win::memory::resolve_rva(0x047482F0));
    }
    namespace BipedNaming {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BipedNaming__Class** type_info = (::app::BipedNaming__Class**)(modloader::win::memory::resolve_rva(0x0474BC10));
    }
    namespace Text_1__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Text_1__Array__Class** type_info = (::app::Text_1__Array__Class**)(modloader::win::memory::resolve_rva(0x047455E0));
    }
    namespace Bits {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Bits__Class** type_info = (::app::Bits__Class**)(modloader::win::memory::resolve_rva(0x0471CF78));
    }
    namespace ShaderID_BleachBypass {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BleachBypass__Class** type_info = (::app::ShaderID_BleachBypass__Class**)(modloader::win::memory::resolve_rva(0x04746408));
    }
    namespace ShaderID_Blend {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Blend__Class** type_info = (::app::ShaderID_Blend__Class**)(modloader::win::memory::resolve_rva(0x0470E7F8));
    }
    namespace BlitTriExtensions {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BlitTriExtensions__Class** type_info = (::app::BlitTriExtensions__Class**)(modloader::win::memory::resolve_rva(0x0471F510));
    }
    namespace PhysicsUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsUtils__Class** type_info = (::app::PhysicsUtils__Class**)(modloader::win::memory::resolve_rva(0x04793708));
    }
    namespace ShaderID_BloomAndFlares {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BloomAndFlares__Class** type_info = (::app::ShaderID_BloomAndFlares__Class**)(modloader::win::memory::resolve_rva(0x04798FA8));
    }
    namespace ShaderID_BloomOptimized {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BloomOptimized__Class** type_info = (::app::ShaderID_BloomOptimized__Class**)(modloader::win::memory::resolve_rva(0x0474D718));
    }
    namespace ShaderID_Bloom {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Bloom__Class** type_info = (::app::ShaderID_Bloom__Class**)(modloader::win::memory::resolve_rva(0x04711720));
    }
    namespace ShaderID_Bloom_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Bloom_1__Class** type_info = (::app::ShaderID_Bloom_1__Class**)(modloader::win::memory::resolve_rva(0x0470DC90));
    }
    namespace ShaderID_BlurOptimized {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BlurOptimized__Class** type_info = (::app::ShaderID_BlurOptimized__Class**)(modloader::win::memory::resolve_rva(0x047665B8));
    }
    namespace Statics {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Statics__Class** type_info = (::app::Statics__Class**)(modloader::win::memory::resolve_rva(0x04758118));
    }
    namespace TransformExtensions {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransformExtensions__Class** type_info = (::app::TransformExtensions__Class**)(modloader::win::memory::resolve_rva(0x04767B98));
    }
    namespace TimelineSolver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineSolver__Class** type_info = (::app::TimelineSolver__Class**)(modloader::win::memory::resolve_rva(0x047204B8));
    }
    namespace TimelineHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineHelper__Class** type_info = (::app::TimelineHelper__Class**)(modloader::win::memory::resolve_rva(0x0475CE50));
    }
    namespace ShaderID_BrightnessContrastGamma {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BrightnessContrastGamma__Class** type_info = (::app::ShaderID_BrightnessContrastGamma__Class**)(modloader::win::memory::resolve_rva(0x04739790));
    }
    namespace BrowserNative {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative__Class** type_info = (::app::BrowserNative__Class**)(modloader::win::memory::resolve_rva(0x0474FB30));
    }
    namespace KeyMappings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KeyMappings__Class** type_info = (::app::KeyMappings__Class**)(modloader::win::memory::resolve_rva(0x0473C698));
    }
    namespace DateTimeUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeUtils__Class** type_info = (::app::DateTimeUtils__Class**)(modloader::win::memory::resolve_rva(0x047259A8));
    }
    namespace BuilderInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderInfo__Class** type_info = (::app::BuilderInfo__Class**)(modloader::win::memory::resolve_rva(0x04741450));
    }
    namespace ButtonIconUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ButtonIconUtility__Class** type_info = (::app::ButtonIconUtility__Class**)(modloader::win::memory::resolve_rva(0x0475BC10));
    }
    namespace CCDistanceMapGenerator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CCDistanceMapGenerator__Class** type_info = (::app::CCDistanceMapGenerator__Class**)(modloader::win::memory::resolve_rva(0x0477FD38));
    }
    namespace CCDistanceMapGenerator_Pixel__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CCDistanceMapGenerator_Pixel__Array__Class** type_info = (::app::CCDistanceMapGenerator_Pixel__Array__Class**)(modloader::win::memory::resolve_rva(0x0477BD60));
    }
    namespace CCText__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CCText__Array__Class** type_info = (::app::CCText__Array__Class**)(modloader::win::memory::resolve_rva(0x04739A10));
    }
    namespace CCStringBuilderUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CCStringBuilderUtility__Class** type_info = (::app::CCStringBuilderUtility__Class**)(modloader::win::memory::resolve_rva(0x0472DE58));
    }
    namespace ShaderID_CC_AnalogTV {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_AnalogTV__Class** type_info = (::app::ShaderID_CC_AnalogTV__Class**)(modloader::win::memory::resolve_rva(0x04757100));
    }
    namespace ShaderID_CC_BleachBypass {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_BleachBypass__Class** type_info = (::app::ShaderID_CC_BleachBypass__Class**)(modloader::win::memory::resolve_rva(0x0473C378));
    }
    namespace ShaderID_CC_BrightnessContrastGamma {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_BrightnessContrastGamma__Class** type_info = (::app::ShaderID_CC_BrightnessContrastGamma__Class**)(modloader::win::memory::resolve_rva(0x04789C98));
    }
    namespace ShaderID_CC_ChannelMixer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_ChannelMixer__Class** type_info = (::app::ShaderID_CC_ChannelMixer__Class**)(modloader::win::memory::resolve_rva(0x04730B08));
    }
    namespace ShaderID_CC_DoubleVision {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_DoubleVision__Class** type_info = (::app::ShaderID_CC_DoubleVision__Class**)(modloader::win::memory::resolve_rva(0x04730F00));
    }
    namespace ShaderID_CC_FastVignette {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_FastVignette__Class** type_info = (::app::ShaderID_CC_FastVignette__Class**)(modloader::win::memory::resolve_rva(0x04778BC8));
    }
    namespace ShaderID_CC_Frost {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Frost__Class** type_info = (::app::ShaderID_CC_Frost__Class**)(modloader::win::memory::resolve_rva(0x0475A8D8));
    }
    namespace ShaderID_CC_Grayscale {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Grayscale__Class** type_info = (::app::ShaderID_CC_Grayscale__Class**)(modloader::win::memory::resolve_rva(0x047756A0));
    }
    namespace ShaderID_CC_HueSaturationValue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_HueSaturationValue__Class** type_info = (::app::ShaderID_CC_HueSaturationValue__Class**)(modloader::win::memory::resolve_rva(0x0472CD08));
    }
    namespace ShaderID_CC_Led {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Led__Class** type_info = (::app::ShaderID_CC_Led__Class**)(modloader::win::memory::resolve_rva(0x047449B8));
    }
    namespace ShaderID_CC_Levels {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Levels__Class** type_info = (::app::ShaderID_CC_Levels__Class**)(modloader::win::memory::resolve_rva(0x0477F8A0));
    }
    namespace ShaderID_CC_PhotoFilter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_PhotoFilter__Class** type_info = (::app::ShaderID_CC_PhotoFilter__Class**)(modloader::win::memory::resolve_rva(0x04726790));
    }
    namespace ShaderID_CC_Pixelate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Pixelate__Class** type_info = (::app::ShaderID_CC_Pixelate__Class**)(modloader::win::memory::resolve_rva(0x0476C6B0));
    }
    namespace ShaderID_CC_Posterize {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Posterize__Class** type_info = (::app::ShaderID_CC_Posterize__Class**)(modloader::win::memory::resolve_rva(0x0473A7F8));
    }
    namespace ShaderID_CC_RadialBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_RadialBlur__Class** type_info = (::app::ShaderID_CC_RadialBlur__Class**)(modloader::win::memory::resolve_rva(0x0478F3E8));
    }
    namespace ShaderID_CC_Threshold {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Threshold__Class** type_info = (::app::ShaderID_CC_Threshold__Class**)(modloader::win::memory::resolve_rva(0x04797128));
    }
    namespace ShaderID_CC_Vibrance {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Vibrance__Class** type_info = (::app::ShaderID_CC_Vibrance__Class**)(modloader::win::memory::resolve_rva(0x0471F8C8));
    }
} // namespace app::classes::types
