#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/MoonPhysics.h>
#include <Il2CppModLoader/app/types/Input_Dbg.h>
#include <Il2CppModLoader/app/types/StackTraceUtility.h>
#include <Il2CppModLoader/app/types/RemotingServices.h>
#include <Il2CppModLoader/app/types/ChannelServices.h>
#include <Il2CppModLoader/app/types/RemotingConfiguration.h>
#include <Il2CppModLoader/app/types/ActivationServices.h>
#include <Il2CppModLoader/app/types/ActiveTurtleShells.h>
#include <Il2CppModLoader/app/types/TypeExtensions.h>
#include <Il2CppModLoader/app/types/P3D_Brush_AdditiveBlend.h>
#include <Il2CppModLoader/app/types/Math.h>
#include <Il2CppModLoader/app/types/Adler.h>
#include <Il2CppModLoader/app/types/Optimization.h>
#include <Il2CppModLoader/app/types/OutputFolder_1.h>
#include <Il2CppModLoader/app/types/FindObjectsWrapper.h>
#include <Il2CppModLoader/app/types/HierarchyTesterSettings.h>
#include <Il2CppModLoader/app/types/MathUtilities.h>
#include <Il2CppModLoader/app/types/AkAudioInputManager.h>
#include <Il2CppModLoader/app/types/AkBankManager.h>
#include <Il2CppModLoader/app/types/AkCallbackManager.h>
#include <Il2CppModLoader/app/types/BitConverter.h>
#include <Il2CppModLoader/app/types/FuncCondition__Array.h>
#include <Il2CppModLoader/app/types/FuncCondition_1__Array.h>
#include <Il2CppModLoader/app/types/LocomotionUtils.h>
#include <Il2CppModLoader/app/types/P3D_Brush_AlphaBlend.h>
#include <Il2CppModLoader/app/types/P3D_Brush_AlphaErase.h>
#include <Il2CppModLoader/app/types/Scenes.h>
#include <Il2CppModLoader/app/types/Ambience.h>
#include <Il2CppModLoader/app/types/Wwise.h>
#include <Il2CppModLoader/app/types/IRtpcFeed.h>
#include <Il2CppModLoader/app/types/ShaderID_AmbientOcclusion.h>
#include <Il2CppModLoader/app/types/Warning.h>
#include <Il2CppModLoader/app/types/ShaderID_AmplifyColorBase.h>
#include <Il2CppModLoader/app/types/ShaderID_AnalogTV.h>
#include <Il2CppModLoader/app/types/AnalyticsBridge.h>
#include <Il2CppModLoader/app/types/AnalyticsSessionInfo.h>
#include <Il2CppModLoader/app/types/Utils_1.h>
#include <Il2CppModLoader/app/types/Math2d.h>
#include <Il2CppModLoader/app/types/GizmoHelper.h>
#include <Il2CppModLoader/app/types/Sound.h>
#include <Il2CppModLoader/app/types/ArtOptimizerSettings.h>
#include <Il2CppModLoader/app/types/OutputFolder.h>
#include <Il2CppModLoader/app/types/AnimationTransition_AnimationTransitionClipBoard.h>
#include <Il2CppModLoader/app/types/ShaderID_AnimatorController3rdPerson.h>
#include <Il2CppModLoader/app/types/ShaderID_Antialiasing.h>
#include <Il2CppModLoader/app/types/Application.h>
#include <Il2CppModLoader/app/types/BeforeRenderHelper.h>
#include <Il2CppModLoader/app/types/IDamageContext.h>
#include <Il2CppModLoader/app/types/ShaderID_AreaMapCanvas.h>
#include <Il2CppModLoader/app/types/ArtOptimizerGlobalSettings.h>
#include <Il2CppModLoader/app/types/ArtOptimizerHeuristics.h>
#include <Il2CppModLoader/app/types/ShaderTime.h>
#include <Il2CppModLoader/app/types/MonoCustomAttrs.h>
#include <Il2CppModLoader/app/types/Assert.h>
#include <Il2CppModLoader/app/types/Debugger.h>
#include <Il2CppModLoader/app/types/AsyncHelper.h>
#include <Il2CppModLoader/app/types/XAsyncBlock.h>
#include <Il2CppModLoader/app/types/Reporting.h>
#include <Il2CppModLoader/app/types/AsyncTaskCache.h>
#include <Il2CppModLoader/app/types/INotifyCompletion.h>
#include <Il2CppModLoader/app/types/ICriticalNotifyCompletion.h>
#include <Il2CppModLoader/app/types/AttackTokens.h>
#include <Il2CppModLoader/app/types/AttackTokenPriority__Enum__Array.h>
#include <Il2CppModLoader/app/types/AttributeHelperEngine.h>
#include <Il2CppModLoader/app/types/DisallowMultipleComponent__Array.h>
#include <Il2CppModLoader/app/types/ExecuteInEditMode__Array.h>
#include <Il2CppModLoader/app/types/RequireComponent__Array.h>
#include <Il2CppModLoader/app/types/XmlConvert.h>
#include <Il2CppModLoader/app/types/AudioExtensionManager.h>
#include <Il2CppModLoader/app/types/AudioSettings.h>
#include <Il2CppModLoader/app/types/ValidationHelper.h>
#include <Il2CppModLoader/app/types/TimelineCreationListenerExtensions.h>
#include <Il2CppModLoader/app/types/SceneLoadingTest.h>
#include <Il2CppModLoader/app/types/TeamCityHelper.h>
#include <Il2CppModLoader/app/types/Zones.h>
#include <Il2CppModLoader/app/types/ExecuteEvents.h>
#include <Il2CppModLoader/app/types/RaycasterManager.h>
#include <Il2CppModLoader/app/types/ShaderID_Beautify.h>
#include <Il2CppModLoader/app/types/BigIntegerCalculator.h>
#include <Il2CppModLoader/app/types/ShaderID_BilateralGaussianBlur.h>
#include <Il2CppModLoader/app/types/BinXmlDateTime.h>
#include <Il2CppModLoader/app/types/FormatterServices.h>
#include <Il2CppModLoader/app/types/BinaryCompatibility_1.h>
#include <Il2CppModLoader/app/types/BinaryCompatibility.h>
#include <Il2CppModLoader/app/types/Converter.h>
#include <Il2CppModLoader/app/types/TypeCode__Enum__Array.h>
#include <Il2CppModLoader/app/types/InternalPrimitiveTypeE__Enum__Array.h>
#include <Il2CppModLoader/app/types/ReflectionUtils.h>
#include <Il2CppModLoader/app/types/Operators.h>
#include <Il2CppModLoader/app/types/JsonTypeReflector.h>
#include <Il2CppModLoader/app/types/DynamicUtils_BinderWrapper.h>
#include <Il2CppModLoader/app/types/SecurityUtils.h>
#include <Il2CppModLoader/app/types/IBindingList.h>
#include <Il2CppModLoader/app/types/INotifyPropertyChanged.h>
#include <Il2CppModLoader/app/types/BipedNaming.h>
#include <Il2CppModLoader/app/types/Text_1__Array.h>
#include <Il2CppModLoader/app/types/Bits.h>
#include <Il2CppModLoader/app/types/ShaderID_BleachBypass.h>
#include <Il2CppModLoader/app/types/ShaderID_Blend.h>
#include <Il2CppModLoader/app/types/BlitTriExtensions.h>

namespace app::classes::types {
    namespace MoonPhysics { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonPhysics__Class** type_info = (::app::MoonPhysics__Class**)(modloader::win::memory::resolve_rva(0x04749638)); }
    namespace Input_Dbg { IL2CPP_MODLOADER_DLLEXPORT ::app::Input_Dbg__Class** type_info = (::app::Input_Dbg__Class**)(modloader::win::memory::resolve_rva(0x0475DD18)); }
    namespace StackTraceUtility { IL2CPP_MODLOADER_DLLEXPORT ::app::StackTraceUtility__Class** type_info = (::app::StackTraceUtility__Class**)(modloader::win::memory::resolve_rva(0x04731658)); }
    namespace RemotingServices { IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingServices__Class** type_info = (::app::RemotingServices__Class**)(modloader::win::memory::resolve_rva(0x04714440)); }
    namespace ChannelServices { IL2CPP_MODLOADER_DLLEXPORT ::app::ChannelServices__Class** type_info = (::app::ChannelServices__Class**)(modloader::win::memory::resolve_rva(0x04733900)); }
    namespace RemotingConfiguration { IL2CPP_MODLOADER_DLLEXPORT ::app::RemotingConfiguration__Class** type_info = (::app::RemotingConfiguration__Class**)(modloader::win::memory::resolve_rva(0x0470C880)); }
    namespace ActivationServices { IL2CPP_MODLOADER_DLLEXPORT ::app::ActivationServices__Class** type_info = (::app::ActivationServices__Class**)(modloader::win::memory::resolve_rva(0x04772740)); }
    namespace ActiveTurtleShells { IL2CPP_MODLOADER_DLLEXPORT ::app::ActiveTurtleShells__Class** type_info = (::app::ActiveTurtleShells__Class**)(modloader::win::memory::resolve_rva(0x0475F308)); }
    namespace TypeExtensions { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeExtensions__Class** type_info = (::app::TypeExtensions__Class**)(modloader::win::memory::resolve_rva(0x0477EB38)); }
    namespace P3D_Brush_AdditiveBlend { IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Brush_AdditiveBlend__Class** type_info = (::app::P3D_Brush_AdditiveBlend__Class**)(modloader::win::memory::resolve_rva(0x04771850)); }
    namespace Math { IL2CPP_MODLOADER_DLLEXPORT ::app::Math__Class** type_info = (::app::Math__Class**)(modloader::win::memory::resolve_rva(0x0477BBA0)); }
    namespace Adler { IL2CPP_MODLOADER_DLLEXPORT ::app::Adler__Class** type_info = (::app::Adler__Class**)(modloader::win::memory::resolve_rva(0x04704C78)); }
    namespace Optimization { IL2CPP_MODLOADER_DLLEXPORT ::app::Optimization__Class** type_info = (::app::Optimization__Class**)(modloader::win::memory::resolve_rva(0x0473BD20)); }
    namespace OutputFolder_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::OutputFolder_1__Class** type_info = (::app::OutputFolder_1__Class**)(modloader::win::memory::resolve_rva(0x047410E8)); }
    namespace FindObjectsWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::FindObjectsWrapper__Class** type_info = (::app::FindObjectsWrapper__Class**)(modloader::win::memory::resolve_rva(0x04702C58)); }
    namespace HierarchyTesterSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyTesterSettings__Class** type_info = (::app::HierarchyTesterSettings__Class**)(modloader::win::memory::resolve_rva(0x047137A0)); }
    namespace MathUtilities { IL2CPP_MODLOADER_DLLEXPORT ::app::MathUtilities__Class** type_info = (::app::MathUtilities__Class**)(modloader::win::memory::resolve_rva(0x04770DA0)); }
    namespace AkAudioInputManager { IL2CPP_MODLOADER_DLLEXPORT ::app::AkAudioInputManager__Class** type_info = (::app::AkAudioInputManager__Class**)(modloader::win::memory::resolve_rva(0x04727670)); }
    namespace AkBankManager { IL2CPP_MODLOADER_DLLEXPORT ::app::AkBankManager__Class** type_info = (::app::AkBankManager__Class**)(modloader::win::memory::resolve_rva(0x0477A940)); }
    namespace AkCallbackManager { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCallbackManager__Class** type_info = (::app::AkCallbackManager__Class**)(modloader::win::memory::resolve_rva(0x0470BF28)); }
    namespace BitConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::BitConverter__Class** type_info = (::app::BitConverter__Class**)(modloader::win::memory::resolve_rva(0x0475F448)); }
    namespace FuncCondition__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FuncCondition__Array__Class** type_info = (::app::FuncCondition__Array__Class**)(modloader::win::memory::resolve_rva(0x0473CA10)); }
    namespace FuncCondition_1__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::FuncCondition_1__Array__Class** type_info = (::app::FuncCondition_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04719E68)); }
    namespace LocomotionUtils { IL2CPP_MODLOADER_DLLEXPORT ::app::LocomotionUtils__Class** type_info = (::app::LocomotionUtils__Class**)(modloader::win::memory::resolve_rva(0x04749800)); }
    namespace P3D_Brush_AlphaBlend { IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Brush_AlphaBlend__Class** type_info = (::app::P3D_Brush_AlphaBlend__Class**)(modloader::win::memory::resolve_rva(0x04716A00)); }
    namespace P3D_Brush_AlphaErase { IL2CPP_MODLOADER_DLLEXPORT ::app::P3D_Brush_AlphaErase__Class** type_info = (::app::P3D_Brush_AlphaErase__Class**)(modloader::win::memory::resolve_rva(0x047194A0)); }
    namespace Scenes { IL2CPP_MODLOADER_DLLEXPORT ::app::Scenes__Class** type_info = (::app::Scenes__Class**)(modloader::win::memory::resolve_rva(0x04715A30)); }
    namespace Ambience { IL2CPP_MODLOADER_DLLEXPORT ::app::Ambience__Class** type_info = (::app::Ambience__Class**)(modloader::win::memory::resolve_rva(0x04743718)); }
    namespace Wwise { IL2CPP_MODLOADER_DLLEXPORT ::app::Wwise__Class** type_info = (::app::Wwise__Class**)(modloader::win::memory::resolve_rva(0x04776290)); }
    namespace IRtpcFeed { IL2CPP_MODLOADER_DLLEXPORT ::app::IRtpcFeed__Class** type_info = (::app::IRtpcFeed__Class**)(modloader::win::memory::resolve_rva(0x0478E628)); }
    namespace ShaderID_AmbientOcclusion { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AmbientOcclusion__Class** type_info = (::app::ShaderID_AmbientOcclusion__Class**)(modloader::win::memory::resolve_rva(0x047957F8)); }
    namespace Warning { IL2CPP_MODLOADER_DLLEXPORT ::app::Warning__Class** type_info = (::app::Warning__Class**)(modloader::win::memory::resolve_rva(0x04774F90)); }
    namespace ShaderID_AmplifyColorBase { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AmplifyColorBase__Class** type_info = (::app::ShaderID_AmplifyColorBase__Class**)(modloader::win::memory::resolve_rva(0x0472A158)); }
    namespace ShaderID_AnalogTV { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AnalogTV__Class** type_info = (::app::ShaderID_AnalogTV__Class**)(modloader::win::memory::resolve_rva(0x0470DE10)); }
    namespace AnalyticsBridge { IL2CPP_MODLOADER_DLLEXPORT ::app::AnalyticsBridge__Class** type_info = (::app::AnalyticsBridge__Class**)(modloader::win::memory::resolve_rva(0x04790678)); }
    namespace AnalyticsSessionInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AnalyticsSessionInfo__Class** type_info = (::app::AnalyticsSessionInfo__Class**)(modloader::win::memory::resolve_rva(0x047668F0)); }
    namespace Utils_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Utils_1__Class** type_info = (::app::Utils_1__Class**)(modloader::win::memory::resolve_rva(0x04732778)); }
    namespace Math2d { IL2CPP_MODLOADER_DLLEXPORT ::app::Math2d__Class** type_info = (::app::Math2d__Class**)(modloader::win::memory::resolve_rva(0x0477A3C8)); }
    namespace GizmoHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::GizmoHelper__Class** type_info = (::app::GizmoHelper__Class**)(modloader::win::memory::resolve_rva(0x04766318)); }
    namespace Sound { IL2CPP_MODLOADER_DLLEXPORT ::app::Sound__Class** type_info = (::app::Sound__Class**)(modloader::win::memory::resolve_rva(0x04769F88)); }
    namespace ArtOptimizerSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizerSettings__Class** type_info = (::app::ArtOptimizerSettings__Class**)(modloader::win::memory::resolve_rva(0x0473EFD8)); }
    namespace OutputFolder { IL2CPP_MODLOADER_DLLEXPORT ::app::OutputFolder__Class** type_info = (::app::OutputFolder__Class**)(modloader::win::memory::resolve_rva(0x04748788)); }
    namespace AnimationTransition_AnimationTransitionClipBoard { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTransition_AnimationTransitionClipBoard__Class** type_info = (::app::AnimationTransition_AnimationTransitionClipBoard__Class**)(modloader::win::memory::resolve_rva(0x0472D9A0)); }
    namespace ShaderID_AnimatorController3rdPerson { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AnimatorController3rdPerson__Class** type_info = (::app::ShaderID_AnimatorController3rdPerson__Class**)(modloader::win::memory::resolve_rva(0x04774580)); }
    namespace ShaderID_Antialiasing { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Antialiasing__Class** type_info = (::app::ShaderID_Antialiasing__Class**)(modloader::win::memory::resolve_rva(0x0478F148)); }
    namespace Application { IL2CPP_MODLOADER_DLLEXPORT ::app::Application__Class** type_info = (::app::Application__Class**)(modloader::win::memory::resolve_rva(0x04786260)); }
    namespace BeforeRenderHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::BeforeRenderHelper__Class** type_info = (::app::BeforeRenderHelper__Class**)(modloader::win::memory::resolve_rva(0x0478AF08)); }
    namespace IDamageContext { IL2CPP_MODLOADER_DLLEXPORT ::app::IDamageContext__Class** type_info = (::app::IDamageContext__Class**)(modloader::win::memory::resolve_rva(0x04721098)); }
    namespace ShaderID_AreaMapCanvas { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_AreaMapCanvas__Class** type_info = (::app::ShaderID_AreaMapCanvas__Class**)(modloader::win::memory::resolve_rva(0x0475B0B0)); }
    namespace ArtOptimizerGlobalSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizerGlobalSettings__Class** type_info = (::app::ArtOptimizerGlobalSettings__Class**)(modloader::win::memory::resolve_rva(0x047813C8)); }
    namespace ArtOptimizerHeuristics { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizerHeuristics__Class** type_info = (::app::ArtOptimizerHeuristics__Class**)(modloader::win::memory::resolve_rva(0x04741620)); }
    namespace ShaderTime { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderTime__Class** type_info = (::app::ShaderTime__Class**)(modloader::win::memory::resolve_rva(0x047761E8)); }
    namespace MonoCustomAttrs { IL2CPP_MODLOADER_DLLEXPORT ::app::MonoCustomAttrs__Class** type_info = (::app::MonoCustomAttrs__Class**)(modloader::win::memory::resolve_rva(0x04719648)); }
    namespace Assert { IL2CPP_MODLOADER_DLLEXPORT ::app::Assert__Class** type_info = (::app::Assert__Class**)(modloader::win::memory::resolve_rva(0x0478C688)); }
    namespace Debugger { IL2CPP_MODLOADER_DLLEXPORT ::app::Debugger__Class** type_info = (::app::Debugger__Class**)(modloader::win::memory::resolve_rva(0x047891B8)); }
    namespace AsyncHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncHelper__Class** type_info = (::app::AsyncHelper__Class**)(modloader::win::memory::resolve_rva(0x047164B8)); }
    namespace XAsyncBlock { IL2CPP_MODLOADER_DLLEXPORT ::app::XAsyncBlock__Class** type_info = (::app::XAsyncBlock__Class**)(modloader::win::memory::resolve_rva(0x0478C3B8)); }
    namespace Reporting { IL2CPP_MODLOADER_DLLEXPORT ::app::Reporting__Class** type_info = (::app::Reporting__Class**)(modloader::win::memory::resolve_rva(0x04749770)); }
    namespace AsyncTaskCache { IL2CPP_MODLOADER_DLLEXPORT ::app::AsyncTaskCache__Class** type_info = (::app::AsyncTaskCache__Class**)(modloader::win::memory::resolve_rva(0x047170C8)); }
    namespace INotifyCompletion { IL2CPP_MODLOADER_DLLEXPORT ::app::INotifyCompletion__Class** type_info = (::app::INotifyCompletion__Class**)(modloader::win::memory::resolve_rva(0x0476BB68)); }
    namespace ICriticalNotifyCompletion { IL2CPP_MODLOADER_DLLEXPORT ::app::ICriticalNotifyCompletion__Class** type_info = (::app::ICriticalNotifyCompletion__Class**)(modloader::win::memory::resolve_rva(0x047642A0)); }
    namespace AttackTokens { IL2CPP_MODLOADER_DLLEXPORT ::app::AttackTokens__Class** type_info = (::app::AttackTokens__Class**)(modloader::win::memory::resolve_rva(0x04754A80)); }
    namespace AttackTokenPriority__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AttackTokenPriority__Enum__Array__Class** type_info = (::app::AttackTokenPriority__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0470A990)); }
    namespace AttributeHelperEngine { IL2CPP_MODLOADER_DLLEXPORT ::app::AttributeHelperEngine__Class** type_info = (::app::AttributeHelperEngine__Class**)(modloader::win::memory::resolve_rva(0x0477B880)); }
    namespace DisallowMultipleComponent__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DisallowMultipleComponent__Array__Class** type_info = (::app::DisallowMultipleComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x0475E828)); }
    namespace ExecuteInEditMode__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ExecuteInEditMode__Array__Class** type_info = (::app::ExecuteInEditMode__Array__Class**)(modloader::win::memory::resolve_rva(0x04797220)); }
    namespace RequireComponent__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RequireComponent__Array__Class** type_info = (::app::RequireComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x047888C8)); }
    namespace XmlConvert { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlConvert__Class** type_info = (::app::XmlConvert__Class**)(modloader::win::memory::resolve_rva(0x04740AE0)); }
    namespace AudioExtensionManager { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioExtensionManager__Class** type_info = (::app::AudioExtensionManager__Class**)(modloader::win::memory::resolve_rva(0x04762B28)); }
    namespace AudioSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioSettings__Class** type_info = (::app::AudioSettings__Class**)(modloader::win::memory::resolve_rva(0x0472FE88)); }
    namespace ValidationHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::ValidationHelper__Class** type_info = (::app::ValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x0472CE08)); }
    namespace TimelineCreationListenerExtensions { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineCreationListenerExtensions__Class** type_info = (::app::TimelineCreationListenerExtensions__Class**)(modloader::win::memory::resolve_rva(0x0473D820)); }
    namespace SceneLoadingTest { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingTest__Class** type_info = (::app::SceneLoadingTest__Class**)(modloader::win::memory::resolve_rva(0x04789990)); }
    namespace TeamCityHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::TeamCityHelper__Class** type_info = (::app::TeamCityHelper__Class**)(modloader::win::memory::resolve_rva(0x0471ACD8)); }
    namespace Zones { IL2CPP_MODLOADER_DLLEXPORT ::app::Zones__Class** type_info = (::app::Zones__Class**)(modloader::win::memory::resolve_rva(0x04735F60)); }
    namespace ExecuteEvents { IL2CPP_MODLOADER_DLLEXPORT ::app::ExecuteEvents__Class** type_info = (::app::ExecuteEvents__Class**)(modloader::win::memory::resolve_rva(0x04755FD0)); }
    namespace RaycasterManager { IL2CPP_MODLOADER_DLLEXPORT ::app::RaycasterManager__Class** type_info = (::app::RaycasterManager__Class**)(modloader::win::memory::resolve_rva(0x0471A7F0)); }
    namespace ShaderID_Beautify { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Beautify__Class** type_info = (::app::ShaderID_Beautify__Class**)(modloader::win::memory::resolve_rva(0x0471E060)); }
    namespace BigIntegerCalculator { IL2CPP_MODLOADER_DLLEXPORT ::app::BigIntegerCalculator__Class** type_info = (::app::BigIntegerCalculator__Class**)(modloader::win::memory::resolve_rva(0x04755270)); }
    namespace ShaderID_BilateralGaussianBlur { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BilateralGaussianBlur__Class** type_info = (::app::ShaderID_BilateralGaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x04729E78)); }
    namespace BinXmlDateTime { IL2CPP_MODLOADER_DLLEXPORT ::app::BinXmlDateTime__Class** type_info = (::app::BinXmlDateTime__Class**)(modloader::win::memory::resolve_rva(0x04742740)); }
    namespace FormatterServices { IL2CPP_MODLOADER_DLLEXPORT ::app::FormatterServices__Class** type_info = (::app::FormatterServices__Class**)(modloader::win::memory::resolve_rva(0x04738670)); }
    namespace BinaryCompatibility_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCompatibility_1__Class** type_info = (::app::BinaryCompatibility_1__Class**)(modloader::win::memory::resolve_rva(0x047284D0)); }
    namespace BinaryCompatibility { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryCompatibility__Class** type_info = (::app::BinaryCompatibility__Class**)(modloader::win::memory::resolve_rva(0x0476A5E0)); }
    namespace Converter { IL2CPP_MODLOADER_DLLEXPORT ::app::Converter__Class** type_info = (::app::Converter__Class**)(modloader::win::memory::resolve_rva(0x0470AC18)); }
    namespace TypeCode__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeCode__Enum__Array__Class** type_info = (::app::TypeCode__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04744D38)); }
    namespace InternalPrimitiveTypeE__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalPrimitiveTypeE__Enum__Array__Class** type_info = (::app::InternalPrimitiveTypeE__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04739AB0)); }
    namespace ReflectionUtils { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils__Class** type_info = (::app::ReflectionUtils__Class**)(modloader::win::memory::resolve_rva(0x0476A7F0)); }
    namespace Operators { IL2CPP_MODLOADER_DLLEXPORT ::app::Operators__Class** type_info = (::app::Operators__Class**)(modloader::win::memory::resolve_rva(0x04783638)); }
    namespace JsonTypeReflector { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonTypeReflector__Class** type_info = (::app::JsonTypeReflector__Class**)(modloader::win::memory::resolve_rva(0x04728D20)); }
    namespace DynamicUtils_BinderWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicUtils_BinderWrapper__Class** type_info = (::app::DynamicUtils_BinderWrapper__Class**)(modloader::win::memory::resolve_rva(0x04744358)); }
    namespace SecurityUtils { IL2CPP_MODLOADER_DLLEXPORT ::app::SecurityUtils__Class** type_info = (::app::SecurityUtils__Class**)(modloader::win::memory::resolve_rva(0x047482F0)); }
    namespace IBindingList { IL2CPP_MODLOADER_DLLEXPORT ::app::IBindingList__Class** type_info = (::app::IBindingList__Class**)(modloader::win::memory::resolve_rva(0x04724480)); }
    namespace INotifyPropertyChanged { IL2CPP_MODLOADER_DLLEXPORT ::app::INotifyPropertyChanged__Class** type_info = (::app::INotifyPropertyChanged__Class**)(modloader::win::memory::resolve_rva(0x04746A80)); }
    namespace BipedNaming { IL2CPP_MODLOADER_DLLEXPORT ::app::BipedNaming__Class** type_info = (::app::BipedNaming__Class**)(modloader::win::memory::resolve_rva(0x0474BC10)); }
    namespace Text_1__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Text_1__Array__Class** type_info = (::app::Text_1__Array__Class**)(modloader::win::memory::resolve_rva(0x047455E0)); }
    namespace Bits { IL2CPP_MODLOADER_DLLEXPORT ::app::Bits__Class** type_info = (::app::Bits__Class**)(modloader::win::memory::resolve_rva(0x0471CF78)); }
    namespace ShaderID_BleachBypass { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BleachBypass__Class** type_info = (::app::ShaderID_BleachBypass__Class**)(modloader::win::memory::resolve_rva(0x04746408)); }
    namespace ShaderID_Blend { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Blend__Class** type_info = (::app::ShaderID_Blend__Class**)(modloader::win::memory::resolve_rva(0x0470E7F8)); }
    namespace BlitTriExtensions { IL2CPP_MODLOADER_DLLEXPORT ::app::BlitTriExtensions__Class** type_info = (::app::BlitTriExtensions__Class**)(modloader::win::memory::resolve_rva(0x0471F510)); }
}
