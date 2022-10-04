#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/AppContextSwitches.h>
#include <Il2CppModLoader/app/types/LightCanvas_LightCanvasGuidManager.h>
#include <Il2CppModLoader/app/types/CaptureAgentUtils.h>
#include <Il2CppModLoader/app/types/Items.h>
#include <Il2CppModLoader/app/types/UberShaderRenderQueue.h>
#include <Il2CppModLoader/app/types/UnityTls.h>
#include <Il2CppModLoader/app/types/CertificateValidationHelper.h>
#include <Il2CppModLoader/app/types/SystemCertificateValidator.h>
#include <Il2CppModLoader/app/types/MonoTlsProviderFactory.h>
#include <Il2CppModLoader/app/types/ChallengeResponse2.h>
#include <Il2CppModLoader/app/types/ShaderID_ChannelClamper.h>
#include <Il2CppModLoader/app/types/ShaderID_ChannelMixer.h>
#include <Il2CppModLoader/app/types/IChannelDataStore.h>
#include <Il2CppModLoader/app/types/IChannelReceiver.h>
#include <Il2CppModLoader/app/types/IClientChannelSinkProvider.h>
#include <Il2CppModLoader/app/types/IServerChannelSinkProvider.h>
#include <Il2CppModLoader/app/types/ISecurableChannel.h>
#include <Il2CppModLoader/app/types/ShaderID_ChannelSwapper.h>
#include <Il2CppModLoader/app/types/CharUnicodeInfo.h>
#include <Il2CppModLoader/app/types/ShaderID_CharacterAnimationSimple.h>
#include <Il2CppModLoader/app/types/ShaderID_CharacterAnimationThirdPerson.h>
#include <Il2CppModLoader/app/types/CharacterInteractables.h>
#include <Il2CppModLoader/app/types/IChargeFlameAttackable.h>
#include <Il2CppModLoader/app/types/PortalVistor.h>
#include <Il2CppModLoader/app/types/Music.h>
#include <Il2CppModLoader/app/types/ShaderID_ChromaticAberration.h>
#include <Il2CppModLoader/app/types/UberGCManager.h>
#include <Il2CppModLoader/app/types/UberGCManager_GcCleanupReason__Enum.h>
#include <Il2CppModLoader/app/types/ClientInformation.h>
#include <Il2CppModLoader/app/types/CodeIdentifier.h>
#include <Il2CppModLoader/app/types/EncodingTable.h>
#include <Il2CppModLoader/app/types/SeinEvents.h>
#include <Il2CppModLoader/app/types/Physics2D.h>
#include <Il2CppModLoader/app/types/ShaderID_ColorCorrectionCurves.h>
#include <Il2CppModLoader/app/types/ShaderID_ColorCorrectionLookup.h>
#include <Il2CppModLoader/app/types/ShaderID_ColorCorrectionEffect.h>
#include <Il2CppModLoader/app/types/ShaderID_ComicBook.h>
#include <Il2CppModLoader/app/types/CompModSwitches.h>
#include <Il2CppModLoader/app/types/MSCompatUnicodeTable.h>
#include <Il2CppModLoader/app/types/TailoringInfo__Array.h>
#include <Il2CppModLoader/app/types/ConditionBasedBrainController_BranchingBoolEntries__Enum.h>
#include <Il2CppModLoader/app/types/UberStateConditionHelper.h>
#include <Il2CppModLoader/app/types/IUberStateAggregate.h>
#include <Il2CppModLoader/app/types/HashHelpers_1.h>
#include <Il2CppModLoader/app/types/SoapServices.h>
#include <Il2CppModLoader/app/types/LifetimeServices.h>
#include <Il2CppModLoader/app/types/Logging.h>
#include <Il2CppModLoader/app/types/TimerThread.h>
#include <Il2CppModLoader/app/types/MonoIO.h>
#include <Il2CppModLoader/app/types/Console_WindowsConsole.h>
#include <Il2CppModLoader/app/types/EncodingHelper.h>
#include <Il2CppModLoader/app/types/EnumTools.h>
#include <Il2CppModLoader/app/types/ConstraintEvaluator.h>
#include <Il2CppModLoader/app/types/ITimelineEventProviderWithTime.h>
#include <Il2CppModLoader/app/types/IContributeEnvoySink.h>
#include <Il2CppModLoader/app/types/IContributeObjectSink.h>
#include <Il2CppModLoader/app/types/IContributeClientContextSink.h>
#include <Il2CppModLoader/app/types/IContributeServerContextSink.h>
#include <Il2CppModLoader/app/types/IContextReciever.h>
#include <Il2CppModLoader/app/types/ShaderID_ContrastEnhance.h>
#include <Il2CppModLoader/app/types/ShaderID_ContrastGain.h>
#include <Il2CppModLoader/app/types/ShaderID_ContrastStretchEffect.h>
#include <Il2CppModLoader/app/types/XboxControllerInput.h>
#include <Il2CppModLoader/app/types/ConvertUtils.h>
#include <Il2CppModLoader/app/types/TypeInformation_1__Array.h>
#include <Il2CppModLoader/app/types/IFormattable.h>
#include <Il2CppModLoader/app/types/ShaderID_Convolution3x3.h>
#include <Il2CppModLoader/app/types/CrashContext.h>
#include <Il2CppModLoader/app/types/Crc32Helper.h>
#include <Il2CppModLoader/app/types/ShaderID_CreaseShading.h>
#include <Il2CppModLoader/app/types/CrossSceneReference.h>
#include <Il2CppModLoader/app/types/ShaderID_CrossStitch.h>
#include <Il2CppModLoader/app/types/ICullingCategoryItem.h>
#include <Il2CppModLoader/app/types/CultureInfoConverter_CultureInfoMapper.h>
#include <Il2CppModLoader/app/types/ShaderID_CustomWater.h>
#include <Il2CppModLoader/app/types/Utils.h>
#include <Il2CppModLoader/app/types/OidGroup__Enum_1.h>
#include <Il2CppModLoader/app/types/Attacking_DamageDisplayText.h>
#include <Il2CppModLoader/app/types/DataPointIcon_Icons.h>
#include <Il2CppModLoader/app/types/Diff.h>
#include <Il2CppModLoader/app/types/IChangeTracking.h>
#include <Il2CppModLoader/app/types/IRevertibleChangeTracking.h>
#include <Il2CppModLoader/app/types/IXmlTextParser.h>
#include <Il2CppModLoader/app/types/INullable.h>
#include <Il2CppModLoader/app/types/DataViewManagerListItemTypeDescriptor__Array.h>
#include <Il2CppModLoader/app/types/HebrewNumber.h>
#include <Il2CppModLoader/app/types/HebrewNumber_HebrewValue__Array.h>
#include <Il2CppModLoader/app/types/HebrewNumber_HS__Enum__Array.h>
#include <Il2CppModLoader/app/types/HebrewNumber_HS__Enum__Array__Array.h>
#include <Il2CppModLoader/app/types/DateTimeFormat.h>
#include <Il2CppModLoader/app/types/DateTimeParse.h>
#include <Il2CppModLoader/app/types/DateTimeParse_DS__Enum__Array.h>
#include <Il2CppModLoader/app/types/DateTimeParse_DS__Enum__Array__Array.h>
#include <Il2CppModLoader/app/types/Parser_DateTime.h>
#include <Il2CppModLoader/app/types/Input_Old.h>
#include <Il2CppModLoader/app/types/ShaderID_DebugRenderer.h>
#include <Il2CppModLoader/app/types/JsonArrayAttribute.h>
#include <Il2CppModLoader/app/types/JsonDictionaryAttribute.h>
#include <Il2CppModLoader/app/types/DefaultControls.h>
#include <Il2CppModLoader/app/types/Shader_DefaultTextures.h>

namespace app::classes::types {
    namespace AppContextSwitches { IL2CPP_MODLOADER_DLLEXPORT ::app::AppContextSwitches__Class** type_info = (::app::AppContextSwitches__Class**)(modloader::win::memory::resolve_rva(0x04784528)); }
    namespace LightCanvas_LightCanvasGuidManager { IL2CPP_MODLOADER_DLLEXPORT ::app::LightCanvas_LightCanvasGuidManager__Class** type_info = (::app::LightCanvas_LightCanvasGuidManager__Class**)(modloader::win::memory::resolve_rva(0x04784A08)); }
    namespace CaptureAgentUtils { IL2CPP_MODLOADER_DLLEXPORT ::app::CaptureAgentUtils__Class** type_info = (::app::CaptureAgentUtils__Class**)(modloader::win::memory::resolve_rva(0x0475CDF0)); }
    namespace Items { IL2CPP_MODLOADER_DLLEXPORT ::app::Items__Class** type_info = (::app::Items__Class**)(modloader::win::memory::resolve_rva(0x0475CB78)); }
    namespace UberShaderRenderQueue { IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderRenderQueue__Class** type_info = (::app::UberShaderRenderQueue__Class**)(modloader::win::memory::resolve_rva(0x04770138)); }
    namespace UnityTls { IL2CPP_MODLOADER_DLLEXPORT ::app::UnityTls__Class** type_info = (::app::UnityTls__Class**)(modloader::win::memory::resolve_rva(0x047050D0)); }
    namespace CertificateValidationHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::CertificateValidationHelper__Class** type_info = (::app::CertificateValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x04718390)); }
    namespace SystemCertificateValidator { IL2CPP_MODLOADER_DLLEXPORT ::app::SystemCertificateValidator__Class** type_info = (::app::SystemCertificateValidator__Class**)(modloader::win::memory::resolve_rva(0x047089B8)); }
    namespace MonoTlsProviderFactory { IL2CPP_MODLOADER_DLLEXPORT ::app::MonoTlsProviderFactory__Class** type_info = (::app::MonoTlsProviderFactory__Class**)(modloader::win::memory::resolve_rva(0x04724FF8)); }
    namespace ChallengeResponse2 { IL2CPP_MODLOADER_DLLEXPORT ::app::ChallengeResponse2__Class** type_info = (::app::ChallengeResponse2__Class**)(modloader::win::memory::resolve_rva(0x0471BCD0)); }
    namespace ShaderID_ChannelClamper { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ChannelClamper__Class** type_info = (::app::ShaderID_ChannelClamper__Class**)(modloader::win::memory::resolve_rva(0x0472C4E8)); }
    namespace ShaderID_ChannelMixer { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ChannelMixer__Class** type_info = (::app::ShaderID_ChannelMixer__Class**)(modloader::win::memory::resolve_rva(0x04792D70)); }
    namespace IChannelDataStore { IL2CPP_MODLOADER_DLLEXPORT ::app::IChannelDataStore__Class** type_info = (::app::IChannelDataStore__Class**)(modloader::win::memory::resolve_rva(0x0475F7D0)); }
    namespace IChannelReceiver { IL2CPP_MODLOADER_DLLEXPORT ::app::IChannelReceiver__Class** type_info = (::app::IChannelReceiver__Class**)(modloader::win::memory::resolve_rva(0x0470C268)); }
    namespace IClientChannelSinkProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IClientChannelSinkProvider__Class** type_info = (::app::IClientChannelSinkProvider__Class**)(modloader::win::memory::resolve_rva(0x047555C8)); }
    namespace IServerChannelSinkProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IServerChannelSinkProvider__Class** type_info = (::app::IServerChannelSinkProvider__Class**)(modloader::win::memory::resolve_rva(0x04753EC0)); }
    namespace ISecurableChannel { IL2CPP_MODLOADER_DLLEXPORT ::app::ISecurableChannel__Class** type_info = (::app::ISecurableChannel__Class**)(modloader::win::memory::resolve_rva(0x047957B8)); }
    namespace ShaderID_ChannelSwapper { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ChannelSwapper__Class** type_info = (::app::ShaderID_ChannelSwapper__Class**)(modloader::win::memory::resolve_rva(0x0475F1B0)); }
    namespace CharUnicodeInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::CharUnicodeInfo__Class** type_info = (::app::CharUnicodeInfo__Class**)(modloader::win::memory::resolve_rva(0x04756870)); }
    namespace ShaderID_CharacterAnimationSimple { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CharacterAnimationSimple__Class** type_info = (::app::ShaderID_CharacterAnimationSimple__Class**)(modloader::win::memory::resolve_rva(0x0473F480)); }
    namespace ShaderID_CharacterAnimationThirdPerson { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CharacterAnimationThirdPerson__Class** type_info = (::app::ShaderID_CharacterAnimationThirdPerson__Class**)(modloader::win::memory::resolve_rva(0x047222E8)); }
    namespace CharacterInteractables { IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterInteractables__Class** type_info = (::app::CharacterInteractables__Class**)(modloader::win::memory::resolve_rva(0x047219D0)); }
    namespace IChargeFlameAttackable { IL2CPP_MODLOADER_DLLEXPORT ::app::IChargeFlameAttackable__Class** type_info = (::app::IChargeFlameAttackable__Class**)(modloader::win::memory::resolve_rva(0x04751990)); }
    namespace PortalVistor { IL2CPP_MODLOADER_DLLEXPORT ::app::PortalVistor__Class** type_info = (::app::PortalVistor__Class**)(modloader::win::memory::resolve_rva(0x047314C8)); }
    namespace Music { IL2CPP_MODLOADER_DLLEXPORT ::app::Music__Class** type_info = (::app::Music__Class**)(modloader::win::memory::resolve_rva(0x04764C10)); }
    namespace ShaderID_ChromaticAberration { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ChromaticAberration__Class** type_info = (::app::ShaderID_ChromaticAberration__Class**)(modloader::win::memory::resolve_rva(0x04756490)); }
    namespace UberGCManager { IL2CPP_MODLOADER_DLLEXPORT ::app::UberGCManager__Class** type_info = (::app::UberGCManager__Class**)(modloader::win::memory::resolve_rva(0x0476B2D0)); }
    namespace UberGCManager_GcCleanupReason__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::UberGCManager_GcCleanupReason__Enum__Class** type_info = (::app::UberGCManager_GcCleanupReason__Enum__Class**)(modloader::win::memory::resolve_rva(0x04712580)); }
    namespace ClientInformation { IL2CPP_MODLOADER_DLLEXPORT ::app::ClientInformation__Class** type_info = (::app::ClientInformation__Class**)(modloader::win::memory::resolve_rva(0x04712568)); }
    namespace CodeIdentifier { IL2CPP_MODLOADER_DLLEXPORT ::app::CodeIdentifier__Class** type_info = (::app::CodeIdentifier__Class**)(modloader::win::memory::resolve_rva(0x04701358)); }
    namespace EncodingTable { IL2CPP_MODLOADER_DLLEXPORT ::app::EncodingTable__Class** type_info = (::app::EncodingTable__Class**)(modloader::win::memory::resolve_rva(0x04767B80)); }
    namespace SeinEvents { IL2CPP_MODLOADER_DLLEXPORT ::app::SeinEvents__Class** type_info = (::app::SeinEvents__Class**)(modloader::win::memory::resolve_rva(0x047548F8)); }
    namespace Physics2D { IL2CPP_MODLOADER_DLLEXPORT ::app::Physics2D__Class** type_info = (::app::Physics2D__Class**)(modloader::win::memory::resolve_rva(0x04775FA8)); }
    namespace ShaderID_ColorCorrectionCurves { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ColorCorrectionCurves__Class** type_info = (::app::ShaderID_ColorCorrectionCurves__Class**)(modloader::win::memory::resolve_rva(0x04741290)); }
    namespace ShaderID_ColorCorrectionLookup { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ColorCorrectionLookup__Class** type_info = (::app::ShaderID_ColorCorrectionLookup__Class**)(modloader::win::memory::resolve_rva(0x04714C60)); }
    namespace ShaderID_ColorCorrectionEffect { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ColorCorrectionEffect__Class** type_info = (::app::ShaderID_ColorCorrectionEffect__Class**)(modloader::win::memory::resolve_rva(0x0477B9C8)); }
    namespace ShaderID_ComicBook { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ComicBook__Class** type_info = (::app::ShaderID_ComicBook__Class**)(modloader::win::memory::resolve_rva(0x04778AD8)); }
    namespace CompModSwitches { IL2CPP_MODLOADER_DLLEXPORT ::app::CompModSwitches__Class** type_info = (::app::CompModSwitches__Class**)(modloader::win::memory::resolve_rva(0x04758B80)); }
    namespace MSCompatUnicodeTable { IL2CPP_MODLOADER_DLLEXPORT ::app::MSCompatUnicodeTable__Class** type_info = (::app::MSCompatUnicodeTable__Class**)(modloader::win::memory::resolve_rva(0x0475EE20)); }
    namespace TailoringInfo__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::TailoringInfo__Array__Class** type_info = (::app::TailoringInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FF88)); }
    namespace ConditionBasedBrainController_BranchingBoolEntries__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ConditionBasedBrainController_BranchingBoolEntries__Enum__Class** type_info = (::app::ConditionBasedBrainController_BranchingBoolEntries__Enum__Class**)(modloader::win::memory::resolve_rva(0x047743C8)); }
    namespace UberStateConditionHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateConditionHelper__Class** type_info = (::app::UberStateConditionHelper__Class**)(modloader::win::memory::resolve_rva(0x04721BE8)); }
    namespace IUberStateAggregate { IL2CPP_MODLOADER_DLLEXPORT ::app::IUberStateAggregate__Class** type_info = (::app::IUberStateAggregate__Class**)(modloader::win::memory::resolve_rva(0x047823D0)); }
    namespace HashHelpers_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::HashHelpers_1__Class** type_info = (::app::HashHelpers_1__Class**)(modloader::win::memory::resolve_rva(0x04723550)); }
    namespace SoapServices { IL2CPP_MODLOADER_DLLEXPORT ::app::SoapServices__Class** type_info = (::app::SoapServices__Class**)(modloader::win::memory::resolve_rva(0x0474BF38)); }
    namespace LifetimeServices { IL2CPP_MODLOADER_DLLEXPORT ::app::LifetimeServices__Class** type_info = (::app::LifetimeServices__Class**)(modloader::win::memory::resolve_rva(0x0478FB98)); }
    namespace Logging { IL2CPP_MODLOADER_DLLEXPORT ::app::Logging__Class** type_info = (::app::Logging__Class**)(modloader::win::memory::resolve_rva(0x04734188)); }
    namespace TimerThread { IL2CPP_MODLOADER_DLLEXPORT ::app::TimerThread__Class** type_info = (::app::TimerThread__Class**)(modloader::win::memory::resolve_rva(0x04713918)); }
    namespace MonoIO { IL2CPP_MODLOADER_DLLEXPORT ::app::MonoIO__Class** type_info = (::app::MonoIO__Class**)(modloader::win::memory::resolve_rva(0x0476F4D8)); }
    namespace Console_WindowsConsole { IL2CPP_MODLOADER_DLLEXPORT ::app::Console_WindowsConsole__Class** type_info = (::app::Console_WindowsConsole__Class**)(modloader::win::memory::resolve_rva(0x04791E10)); }
    namespace EncodingHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::EncodingHelper__Class** type_info = (::app::EncodingHelper__Class**)(modloader::win::memory::resolve_rva(0x04779208)); }
    namespace EnumTools { IL2CPP_MODLOADER_DLLEXPORT ::app::EnumTools__Class** type_info = (::app::EnumTools__Class**)(modloader::win::memory::resolve_rva(0x04752638)); }
    namespace ConstraintEvaluator { IL2CPP_MODLOADER_DLLEXPORT ::app::ConstraintEvaluator__Class** type_info = (::app::ConstraintEvaluator__Class**)(modloader::win::memory::resolve_rva(0x04793188)); }
    namespace ITimelineEventProviderWithTime { IL2CPP_MODLOADER_DLLEXPORT ::app::ITimelineEventProviderWithTime__Class** type_info = (::app::ITimelineEventProviderWithTime__Class**)(modloader::win::memory::resolve_rva(0x04776D18)); }
    namespace IContributeEnvoySink { IL2CPP_MODLOADER_DLLEXPORT ::app::IContributeEnvoySink__Class** type_info = (::app::IContributeEnvoySink__Class**)(modloader::win::memory::resolve_rva(0x04718BF8)); }
    namespace IContributeObjectSink { IL2CPP_MODLOADER_DLLEXPORT ::app::IContributeObjectSink__Class** type_info = (::app::IContributeObjectSink__Class**)(modloader::win::memory::resolve_rva(0x047392C0)); }
    namespace IContributeClientContextSink { IL2CPP_MODLOADER_DLLEXPORT ::app::IContributeClientContextSink__Class** type_info = (::app::IContributeClientContextSink__Class**)(modloader::win::memory::resolve_rva(0x0474C580)); }
    namespace IContributeServerContextSink { IL2CPP_MODLOADER_DLLEXPORT ::app::IContributeServerContextSink__Class** type_info = (::app::IContributeServerContextSink__Class**)(modloader::win::memory::resolve_rva(0x0471A6D0)); }
    namespace IContextReciever { IL2CPP_MODLOADER_DLLEXPORT ::app::IContextReciever__Class** type_info = (::app::IContextReciever__Class**)(modloader::win::memory::resolve_rva(0x0473B270)); }
    namespace ShaderID_ContrastEnhance { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ContrastEnhance__Class** type_info = (::app::ShaderID_ContrastEnhance__Class**)(modloader::win::memory::resolve_rva(0x047850E8)); }
    namespace ShaderID_ContrastGain { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ContrastGain__Class** type_info = (::app::ShaderID_ContrastGain__Class**)(modloader::win::memory::resolve_rva(0x04707320)); }
    namespace ShaderID_ContrastStretchEffect { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ContrastStretchEffect__Class** type_info = (::app::ShaderID_ContrastStretchEffect__Class**)(modloader::win::memory::resolve_rva(0x04788810)); }
    namespace XboxControllerInput { IL2CPP_MODLOADER_DLLEXPORT ::app::XboxControllerInput__Class** type_info = (::app::XboxControllerInput__Class**)(modloader::win::memory::resolve_rva(0x04740E38)); }
    namespace ConvertUtils { IL2CPP_MODLOADER_DLLEXPORT ::app::ConvertUtils__Class** type_info = (::app::ConvertUtils__Class**)(modloader::win::memory::resolve_rva(0x04737C60)); }
    namespace TypeInformation_1__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeInformation_1__Array__Class** type_info = (::app::TypeInformation_1__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FE78)); }
    namespace IFormattable { IL2CPP_MODLOADER_DLLEXPORT ::app::IFormattable__Class** type_info = (::app::IFormattable__Class**)(modloader::win::memory::resolve_rva(0x04761DD0)); }
    namespace ShaderID_Convolution3x3 { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Convolution3x3__Class** type_info = (::app::ShaderID_Convolution3x3__Class**)(modloader::win::memory::resolve_rva(0x047155D8)); }
    namespace CrashContext { IL2CPP_MODLOADER_DLLEXPORT ::app::CrashContext__Class** type_info = (::app::CrashContext__Class**)(modloader::win::memory::resolve_rva(0x04709B70)); }
    namespace Crc32Helper { IL2CPP_MODLOADER_DLLEXPORT ::app::Crc32Helper__Class** type_info = (::app::Crc32Helper__Class**)(modloader::win::memory::resolve_rva(0x04747890)); }
    namespace ShaderID_CreaseShading { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CreaseShading__Class** type_info = (::app::ShaderID_CreaseShading__Class**)(modloader::win::memory::resolve_rva(0x0476E400)); }
    namespace CrossSceneReference { IL2CPP_MODLOADER_DLLEXPORT ::app::CrossSceneReference__Class** type_info = (::app::CrossSceneReference__Class**)(modloader::win::memory::resolve_rva(0x04718310)); }
    namespace ShaderID_CrossStitch { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CrossStitch__Class** type_info = (::app::ShaderID_CrossStitch__Class**)(modloader::win::memory::resolve_rva(0x0478D8C0)); }
    namespace ICullingCategoryItem { IL2CPP_MODLOADER_DLLEXPORT ::app::ICullingCategoryItem__Class** type_info = (::app::ICullingCategoryItem__Class**)(modloader::win::memory::resolve_rva(0x04715758)); }
    namespace CultureInfoConverter_CultureInfoMapper { IL2CPP_MODLOADER_DLLEXPORT ::app::CultureInfoConverter_CultureInfoMapper__Class** type_info = (::app::CultureInfoConverter_CultureInfoMapper__Class**)(modloader::win::memory::resolve_rva(0x0473E4A0)); }
    namespace ShaderID_CustomWater { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CustomWater__Class** type_info = (::app::ShaderID_CustomWater__Class**)(modloader::win::memory::resolve_rva(0x0476F508)); }
    namespace Utils { IL2CPP_MODLOADER_DLLEXPORT ::app::Utils__Class** type_info = (::app::Utils__Class**)(modloader::win::memory::resolve_rva(0x047128A0)); }
    namespace OidGroup__Enum_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::OidGroup__Enum_1__Class** type_info = (::app::OidGroup__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x0474D788)); }
    namespace Attacking_DamageDisplayText { IL2CPP_MODLOADER_DLLEXPORT ::app::Attacking_DamageDisplayText__Class** type_info = (::app::Attacking_DamageDisplayText__Class**)(modloader::win::memory::resolve_rva(0x0478DC58)); }
    namespace DataPointIcon_Icons { IL2CPP_MODLOADER_DLLEXPORT ::app::DataPointIcon_Icons__Class** type_info = (::app::DataPointIcon_Icons__Class**)(modloader::win::memory::resolve_rva(0x0470E6B8)); }
    namespace Diff { IL2CPP_MODLOADER_DLLEXPORT ::app::Diff__Class** type_info = (::app::Diff__Class**)(modloader::win::memory::resolve_rva(0x04702158)); }
    namespace IChangeTracking { IL2CPP_MODLOADER_DLLEXPORT ::app::IChangeTracking__Class** type_info = (::app::IChangeTracking__Class**)(modloader::win::memory::resolve_rva(0x047168F0)); }
    namespace IRevertibleChangeTracking { IL2CPP_MODLOADER_DLLEXPORT ::app::IRevertibleChangeTracking__Class** type_info = (::app::IRevertibleChangeTracking__Class**)(modloader::win::memory::resolve_rva(0x0470E748)); }
    namespace IXmlTextParser { IL2CPP_MODLOADER_DLLEXPORT ::app::IXmlTextParser__Class** type_info = (::app::IXmlTextParser__Class**)(modloader::win::memory::resolve_rva(0x04726A80)); }
    namespace INullable { IL2CPP_MODLOADER_DLLEXPORT ::app::INullable__Class** type_info = (::app::INullable__Class**)(modloader::win::memory::resolve_rva(0x04750A80)); }
    namespace DataViewManagerListItemTypeDescriptor__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DataViewManagerListItemTypeDescriptor__Array__Class** type_info = (::app::DataViewManagerListItemTypeDescriptor__Array__Class**)(modloader::win::memory::resolve_rva(0x0471FED8)); }
    namespace HebrewNumber { IL2CPP_MODLOADER_DLLEXPORT ::app::HebrewNumber__Class** type_info = (::app::HebrewNumber__Class**)(modloader::win::memory::resolve_rva(0x04795478)); }
    namespace HebrewNumber_HebrewValue__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::HebrewNumber_HebrewValue__Array__Class** type_info = (::app::HebrewNumber_HebrewValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04787860)); }
    namespace HebrewNumber_HS__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::HebrewNumber_HS__Enum__Array__Class** type_info = (::app::HebrewNumber_HS__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04704880)); }
    namespace HebrewNumber_HS__Enum__Array__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::HebrewNumber_HS__Enum__Array__Array__Class** type_info = (::app::HebrewNumber_HS__Enum__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x047889E8)); }
    namespace DateTimeFormat { IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeFormat__Class** type_info = (::app::DateTimeFormat__Class**)(modloader::win::memory::resolve_rva(0x047110A8)); }
    namespace DateTimeParse { IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeParse__Class** type_info = (::app::DateTimeParse__Class**)(modloader::win::memory::resolve_rva(0x04763740)); }
    namespace DateTimeParse_DS__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeParse_DS__Enum__Array__Class** type_info = (::app::DateTimeParse_DS__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04741AF0)); }
    namespace DateTimeParse_DS__Enum__Array__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeParse_DS__Enum__Array__Array__Class** type_info = (::app::DateTimeParse_DS__Enum__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04734F00)); }
    namespace Parser_DateTime { IL2CPP_MODLOADER_DLLEXPORT ::app::Parser_DateTime__Class** type_info = (::app::Parser_DateTime__Class**)(modloader::win::memory::resolve_rva(0x0471C8D0)); }
    namespace Input_Old { IL2CPP_MODLOADER_DLLEXPORT ::app::Input_Old__Class** type_info = (::app::Input_Old__Class**)(modloader::win::memory::resolve_rva(0x04714C38)); }
    namespace ShaderID_DebugRenderer { IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_DebugRenderer__Class** type_info = (::app::ShaderID_DebugRenderer__Class**)(modloader::win::memory::resolve_rva(0x0472C200)); }
    namespace JsonArrayAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonArrayAttribute__Class** type_info = (::app::JsonArrayAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476DF58)); }
    namespace JsonDictionaryAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonDictionaryAttribute__Class** type_info = (::app::JsonDictionaryAttribute__Class**)(modloader::win::memory::resolve_rva(0x04702FB8)); }
    namespace DefaultControls { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultControls__Class** type_info = (::app::DefaultControls__Class**)(modloader::win::memory::resolve_rva(0x0477B0F8)); }
    namespace Shader_DefaultTextures { IL2CPP_MODLOADER_DLLEXPORT ::app::Shader_DefaultTextures__Class** type_info = (::app::Shader_DefaultTextures__Class**)(modloader::win::memory::resolve_rva(0x047925D8)); }
}
