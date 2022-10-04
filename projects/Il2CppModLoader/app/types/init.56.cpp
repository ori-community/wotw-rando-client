#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/AkThreadProperties.h>
#include <Il2CppModLoader/app/types/AkDiffractionPathInfo.h>
#include <Il2CppModLoader/app/types/AkVector.h>
#include <Il2CppModLoader/app/types/AkEventCallbackInfo.h>
#include <Il2CppModLoader/app/types/AkDurationCallbackInfo.h>
#include <Il2CppModLoader/app/types/AkDynamicSequenceItemCallbackInfo.h>
#include <Il2CppModLoader/app/types/AkExternalSourceInfo.h>
#include <Il2CppModLoader/app/types/AkImageSourceParams.h>
#include <Il2CppModLoader/app/types/AkInitializationSettings.h>
#include <Il2CppModLoader/app/types/AkMemSettings.h>
#include <Il2CppModLoader/app/types/AkStreamMgrSettings.h>
#include <Il2CppModLoader/app/types/AkInitSettings.h>
#include <Il2CppModLoader/app/types/AkPlatformInitSettings.h>
#include <Il2CppModLoader/app/types/AkMusicSettings.h>
#include <Il2CppModLoader/app/types/AkUnityPlatformSpecificSettings.h>
#include <Il2CppModLoader/app/types/AkOutputSettings.h>
#include <Il2CppModLoader/app/types/AkIterator.h>
#include <Il2CppModLoader/app/types/AkPlaylistItem.h>
#include <Il2CppModLoader/app/types/AkMarkerCallbackInfo.h>
#include <Il2CppModLoader/app/types/AkMIDIEvent_tGen.h>
#include <Il2CppModLoader/app/types/AkMIDIEvent_tCc.h>
#include <Il2CppModLoader/app/types/AkMIDIEvent_tNoteOnOff.h>
#include <Il2CppModLoader/app/types/AkMIDIEvent_tPitchBend.h>
#include <Il2CppModLoader/app/types/AkMIDIEvent_tNoteAftertouch.h>
#include <Il2CppModLoader/app/types/AkMIDIEvent_tChanAftertouch.h>
#include <Il2CppModLoader/app/types/AkMIDIEvent_tProgramChange.h>
#include <Il2CppModLoader/app/types/AkMIDIEventCallbackInfo.h>
#include <Il2CppModLoader/app/types/AkMIDIPost.h>
#include <Il2CppModLoader/app/types/AkMonitoringCallbackInfo.h>
#include <Il2CppModLoader/app/types/AkMonitorErrorCode__Enum.h>
#include <Il2CppModLoader/app/types/AkMonitorErrorLevel__Enum.h>
#include <Il2CppModLoader/app/types/AkMusicPlaylistCallbackInfo.h>
#include <Il2CppModLoader/app/types/AkMusicSyncCallbackInfo.h>
#include <Il2CppModLoader/app/types/AkCallbackType__Enum.h>
#include <Il2CppModLoader/app/types/AkObjectInfo.h>
#include <Il2CppModLoader/app/types/AkObstructionOcclusionValues.h>
#include <Il2CppModLoader/app/types/AkPanningRule__Enum.h>
#include <Il2CppModLoader/app/types/AkPlaylist.h>
#include <Il2CppModLoader/app/types/AkExternalSourceInfoArray.h>
#include <Il2CppModLoader/app/types/AkReflectionPathInfo.h>
#include <Il2CppModLoader/app/types/AkSerializedCallbackHeader.h>
#include <Il2CppModLoader/app/types/AkSourceSettings.h>
#include <Il2CppModLoader/app/types/AkSpatialAudioInitSettings.h>
#include <Il2CppModLoader/app/types/AkTriangle.h>
#include <Il2CppModLoader/app/types/AkVertex.h>
#include <Il2CppModLoader/app/types/AkCommunicationSettings.h>
#include <Il2CppModLoader/app/types/AkAudioAPI__Enum.h>
#include <Il2CppModLoader/app/types/AkCallbackManager_EventCallback.h>
#include <Il2CppModLoader/app/types/AkActionOnEventType__Enum.h>
#include <Il2CppModLoader/app/types/AkCallbackManager_BankCallback.h>
#include <Il2CppModLoader/app/types/AkLogger_ErrorLoggerInteropDelegate.h>
#include <Il2CppModLoader/app/types/AkAudioInputManager_AudioSamplesInteropDelegate.h>
#include <Il2CppModLoader/app/types/AkAudioInputManager_AudioFormatInteropDelegate.h>
#include <Il2CppModLoader/app/types/AkSoundEngine_GameObjectHashFunction.h>
#include <Il2CppModLoader/app/types/AkSoundEngine.h>
#include <Il2CppModLoader/app/types/AkSoundEnginePINVOKE.h>
#include <Il2CppModLoader/app/types/AkAuxSendArray_c.h>
#include <Il2CppModLoader/app/types/AkBankManager_BankHandle.h>
#include <Il2CppModLoader/app/types/AkBankManager_AsyncBankHandle.h>
#include <Il2CppModLoader/app/types/AkBankManager_DecodableBankHandle.h>
#include <Il2CppModLoader/app/types/AkBasePathGetter.h>
#include <Il2CppModLoader/app/types/AkCallbackManager_InitializationSettings.h>
#include <Il2CppModLoader/app/types/AkCallbackManager_EventCallbackPackage.h>
#include <Il2CppModLoader/app/types/AkCallbackManager_BankCallbackPackage.h>
#include <Il2CppModLoader/app/types/AkCallbackManager_BGMCallbackPackage.h>
#include <Il2CppModLoader/app/types/AkCommonOutputSettings_ChannelConfiguration.h>
#include <Il2CppModLoader/app/types/AkCommonUserSettings.h>
#include <Il2CppModLoader/app/types/AkCommonCommSettings.h>
#include <Il2CppModLoader/app/types/AkWwiseInitializationSettings.h>
#include <Il2CppModLoader/app/types/AkLogger.h>
#include <Il2CppModLoader/app/types/AkUtilities_ShortIDGenerator.h>
#include <Il2CppModLoader/app/types/RuntimeGuidMapping.h>
#include <Il2CppModLoader/app/types/RuntimeGuidMapping_BucketEntry__Array.h>
#include <Il2CppModLoader/app/types/WwiseBootstrapConfiguration.h>
#include <Il2CppModLoader/app/types/WotwWwiseBootstrapConfiguration.h>
#include <Il2CppModLoader/app/types/SoundListener.h>
#include <Il2CppModLoader/app/types/AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings.h>
#include <Il2CppModLoader/app/types/AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings.h>
#include <Il2CppModLoader/app/types/AkWwiseInitializationSettings_c.h>
#include <Il2CppModLoader/app/types/AkWwiseXMLWatcher.h>
#include <Il2CppModLoader/app/types/AkXBoxOneSettings.h>
#include <Il2CppModLoader/app/types/AkXBoxOneSettings_PlatformAdvancedSettings.h>
#include <Il2CppModLoader/app/types/AkMemBankLoader_LoadFile_d_14.h>
#include <Il2CppModLoader/app/types/ObjectGetArgs_From.h>
#include <Il2CppModLoader/app/types/AudioEmitterZoneReference.h>
#include <Il2CppModLoader/app/types/EntityTask.h>
#include <Il2CppModLoader/app/types/Entity_EntityVitalState__Enum.h>
#include <Il2CppModLoader/app/types/Entity_EntityState__Enum.h>
#include <Il2CppModLoader/app/types/NavigationType__Enum.h>
#include <Il2CppModLoader/app/types/Entity.h>
#include <Il2CppModLoader/app/types/EntityPlaceholder_SpawnMode__Enum.h>
#include <Il2CppModLoader/app/types/EntityPlaceholder.h>
#include <Il2CppModLoader/app/types/ISwitch.h>
#include <Il2CppModLoader/app/types/GuidOwner.h>
#include <Il2CppModLoader/app/types/PhysicalSystemManager.h>
#include <Il2CppModLoader/app/types/MoonGuid.h>
#include <Il2CppModLoader/app/types/PhysicalSystemState.h>
#include <Il2CppModLoader/app/types/RigidbodyState.h>
#include <Il2CppModLoader/app/types/GoThroughPlatform.h>
#include <Il2CppModLoader/app/types/LightPlatform.h>

namespace app::classes::types {
    namespace AkThreadProperties { IL2CPP_MODLOADER_DLLEXPORT ::app::AkThreadProperties__Class** type_info = (::app::AkThreadProperties__Class**)(modloader::win::memory::resolve_rva(0x04788610)); }
    namespace AkDiffractionPathInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkDiffractionPathInfo__Class** type_info = (::app::AkDiffractionPathInfo__Class**)(modloader::win::memory::resolve_rva(0x0472A9C0)); }
    namespace AkVector { IL2CPP_MODLOADER_DLLEXPORT ::app::AkVector__Class** type_info = (::app::AkVector__Class**)(modloader::win::memory::resolve_rva(0x0471B758)); }
    namespace AkEventCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkEventCallbackInfo__Class** type_info = (::app::AkEventCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0476EC38)); }
    namespace AkDurationCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkDurationCallbackInfo__Class** type_info = (::app::AkDurationCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04741528)); }
    namespace AkDynamicSequenceItemCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkDynamicSequenceItemCallbackInfo__Class** type_info = (::app::AkDynamicSequenceItemCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0474BC08)); }
    namespace AkExternalSourceInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkExternalSourceInfo__Class** type_info = (::app::AkExternalSourceInfo__Class**)(modloader::win::memory::resolve_rva(0x04789A80)); }
    namespace AkImageSourceParams { IL2CPP_MODLOADER_DLLEXPORT ::app::AkImageSourceParams__Class** type_info = (::app::AkImageSourceParams__Class**)(modloader::win::memory::resolve_rva(0x0472AF80)); }
    namespace AkInitializationSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkInitializationSettings__Class** type_info = (::app::AkInitializationSettings__Class**)(modloader::win::memory::resolve_rva(0x04728B80)); }
    namespace AkMemSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMemSettings__Class** type_info = (::app::AkMemSettings__Class**)(modloader::win::memory::resolve_rva(0x047614B8)); }
    namespace AkStreamMgrSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkStreamMgrSettings__Class** type_info = (::app::AkStreamMgrSettings__Class**)(modloader::win::memory::resolve_rva(0x047811F8)); }
    namespace AkInitSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkInitSettings__Class** type_info = (::app::AkInitSettings__Class**)(modloader::win::memory::resolve_rva(0x04711D10)); }
    namespace AkPlatformInitSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkPlatformInitSettings__Class** type_info = (::app::AkPlatformInitSettings__Class**)(modloader::win::memory::resolve_rva(0x04759228)); }
    namespace AkMusicSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMusicSettings__Class** type_info = (::app::AkMusicSettings__Class**)(modloader::win::memory::resolve_rva(0x04771770)); }
    namespace AkUnityPlatformSpecificSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkUnityPlatformSpecificSettings__Class** type_info = (::app::AkUnityPlatformSpecificSettings__Class**)(modloader::win::memory::resolve_rva(0x0476EEA0)); }
    namespace AkOutputSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkOutputSettings__Class** type_info = (::app::AkOutputSettings__Class**)(modloader::win::memory::resolve_rva(0x0474C168)); }
    namespace AkIterator { IL2CPP_MODLOADER_DLLEXPORT ::app::AkIterator__Class** type_info = (::app::AkIterator__Class**)(modloader::win::memory::resolve_rva(0x04705A80)); }
    namespace AkPlaylistItem { IL2CPP_MODLOADER_DLLEXPORT ::app::AkPlaylistItem__Class** type_info = (::app::AkPlaylistItem__Class**)(modloader::win::memory::resolve_rva(0x04712C90)); }
    namespace AkMarkerCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMarkerCallbackInfo__Class** type_info = (::app::AkMarkerCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047063E0)); }
    namespace AkMIDIEvent_tGen { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMIDIEvent_tGen__Class** type_info = (::app::AkMIDIEvent_tGen__Class**)(modloader::win::memory::resolve_rva(0x04716D60)); }
    namespace AkMIDIEvent_tCc { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMIDIEvent_tCc__Class** type_info = (::app::AkMIDIEvent_tCc__Class**)(modloader::win::memory::resolve_rva(0x0475F548)); }
    namespace AkMIDIEvent_tNoteOnOff { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMIDIEvent_tNoteOnOff__Class** type_info = (::app::AkMIDIEvent_tNoteOnOff__Class**)(modloader::win::memory::resolve_rva(0x04702470)); }
    namespace AkMIDIEvent_tPitchBend { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMIDIEvent_tPitchBend__Class** type_info = (::app::AkMIDIEvent_tPitchBend__Class**)(modloader::win::memory::resolve_rva(0x0472B2C0)); }
    namespace AkMIDIEvent_tNoteAftertouch { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMIDIEvent_tNoteAftertouch__Class** type_info = (::app::AkMIDIEvent_tNoteAftertouch__Class**)(modloader::win::memory::resolve_rva(0x04769C20)); }
    namespace AkMIDIEvent_tChanAftertouch { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMIDIEvent_tChanAftertouch__Class** type_info = (::app::AkMIDIEvent_tChanAftertouch__Class**)(modloader::win::memory::resolve_rva(0x04764FB8)); }
    namespace AkMIDIEvent_tProgramChange { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMIDIEvent_tProgramChange__Class** type_info = (::app::AkMIDIEvent_tProgramChange__Class**)(modloader::win::memory::resolve_rva(0x0473C4B0)); }
    namespace AkMIDIEventCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMIDIEventCallbackInfo__Class** type_info = (::app::AkMIDIEventCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04794528)); }
    namespace AkMIDIPost { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMIDIPost__Class** type_info = (::app::AkMIDIPost__Class**)(modloader::win::memory::resolve_rva(0x0474A480)); }
    namespace AkMonitoringCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMonitoringCallbackInfo__Class** type_info = (::app::AkMonitoringCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0470A070)); }
    namespace AkMonitorErrorCode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMonitorErrorCode__Enum__Class** type_info = (::app::AkMonitorErrorCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474BC00)); }
    namespace AkMonitorErrorLevel__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMonitorErrorLevel__Enum__Class** type_info = (::app::AkMonitorErrorLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04739C18)); }
    namespace AkMusicPlaylistCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMusicPlaylistCallbackInfo__Class** type_info = (::app::AkMusicPlaylistCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04747768)); }
    namespace AkMusicSyncCallbackInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMusicSyncCallbackInfo__Class** type_info = (::app::AkMusicSyncCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04730E68)); }
    namespace AkCallbackType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCallbackType__Enum__Class** type_info = (::app::AkCallbackType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04762450)); }
    namespace AkObjectInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkObjectInfo__Class** type_info = (::app::AkObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04733658)); }
    namespace AkObstructionOcclusionValues { IL2CPP_MODLOADER_DLLEXPORT ::app::AkObstructionOcclusionValues__Class** type_info = (::app::AkObstructionOcclusionValues__Class**)(modloader::win::memory::resolve_rva(0x047498D0)); }
    namespace AkPanningRule__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AkPanningRule__Enum__Class** type_info = (::app::AkPanningRule__Enum__Class**)(modloader::win::memory::resolve_rva(0x047923D8)); }
    namespace AkPlaylist { IL2CPP_MODLOADER_DLLEXPORT ::app::AkPlaylist__Class** type_info = (::app::AkPlaylist__Class**)(modloader::win::memory::resolve_rva(0x04724CB0)); }
    namespace AkExternalSourceInfoArray { IL2CPP_MODLOADER_DLLEXPORT ::app::AkExternalSourceInfoArray__Class** type_info = (::app::AkExternalSourceInfoArray__Class**)(modloader::win::memory::resolve_rva(0x0475BB98)); }
    namespace AkReflectionPathInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AkReflectionPathInfo__Class** type_info = (::app::AkReflectionPathInfo__Class**)(modloader::win::memory::resolve_rva(0x04743308)); }
    namespace AkSerializedCallbackHeader { IL2CPP_MODLOADER_DLLEXPORT ::app::AkSerializedCallbackHeader__Class** type_info = (::app::AkSerializedCallbackHeader__Class**)(modloader::win::memory::resolve_rva(0x0473D728)); }
    namespace AkSourceSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkSourceSettings__Class** type_info = (::app::AkSourceSettings__Class**)(modloader::win::memory::resolve_rva(0x047580F8)); }
    namespace AkSpatialAudioInitSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkSpatialAudioInitSettings__Class** type_info = (::app::AkSpatialAudioInitSettings__Class**)(modloader::win::memory::resolve_rva(0x04781B88)); }
    namespace AkTriangle { IL2CPP_MODLOADER_DLLEXPORT ::app::AkTriangle__Class** type_info = (::app::AkTriangle__Class**)(modloader::win::memory::resolve_rva(0x0471F138)); }
    namespace AkVertex { IL2CPP_MODLOADER_DLLEXPORT ::app::AkVertex__Class** type_info = (::app::AkVertex__Class**)(modloader::win::memory::resolve_rva(0x0479A2F0)); }
    namespace AkCommunicationSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCommunicationSettings__Class** type_info = (::app::AkCommunicationSettings__Class**)(modloader::win::memory::resolve_rva(0x04787008)); }
    namespace AkAudioAPI__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AkAudioAPI__Enum__Class** type_info = (::app::AkAudioAPI__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478C1A8)); }
    namespace AkCallbackManager_EventCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCallbackManager_EventCallback__Class** type_info = (::app::AkCallbackManager_EventCallback__Class**)(modloader::win::memory::resolve_rva(0x04788988)); }
    namespace AkActionOnEventType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AkActionOnEventType__Enum__Class** type_info = (::app::AkActionOnEventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04772038)); }
    namespace AkCallbackManager_BankCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCallbackManager_BankCallback__Class** type_info = (::app::AkCallbackManager_BankCallback__Class**)(modloader::win::memory::resolve_rva(0x047779A0)); }
    namespace AkLogger_ErrorLoggerInteropDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::AkLogger_ErrorLoggerInteropDelegate__Class** type_info = (::app::AkLogger_ErrorLoggerInteropDelegate__Class**)(modloader::win::memory::resolve_rva(0x047802A8)); }
    namespace AkAudioInputManager_AudioSamplesInteropDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::AkAudioInputManager_AudioSamplesInteropDelegate__Class** type_info = (::app::AkAudioInputManager_AudioSamplesInteropDelegate__Class**)(modloader::win::memory::resolve_rva(0x047744E8)); }
    namespace AkAudioInputManager_AudioFormatInteropDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::AkAudioInputManager_AudioFormatInteropDelegate__Class** type_info = (::app::AkAudioInputManager_AudioFormatInteropDelegate__Class**)(modloader::win::memory::resolve_rva(0x0471AF48)); }
    namespace AkSoundEngine_GameObjectHashFunction { IL2CPP_MODLOADER_DLLEXPORT ::app::AkSoundEngine_GameObjectHashFunction__Class** type_info = (::app::AkSoundEngine_GameObjectHashFunction__Class**)(modloader::win::memory::resolve_rva(0x04753698)); }
    namespace AkSoundEngine { IL2CPP_MODLOADER_DLLEXPORT ::app::AkSoundEngine__Class** type_info = (::app::AkSoundEngine__Class**)(modloader::win::memory::resolve_rva(0x04797830)); }
    namespace AkSoundEnginePINVOKE { IL2CPP_MODLOADER_DLLEXPORT ::app::AkSoundEnginePINVOKE__Class** type_info = (::app::AkSoundEnginePINVOKE__Class**)(modloader::win::memory::resolve_rva(0x0472C908)); }
    namespace AkAuxSendArray_c { IL2CPP_MODLOADER_DLLEXPORT ::app::AkAuxSendArray_c__Class** type_info = (::app::AkAuxSendArray_c__Class**)(modloader::win::memory::resolve_rva(0x0475B5D8)); }
    namespace AkBankManager_BankHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::AkBankManager_BankHandle__Class** type_info = (::app::AkBankManager_BankHandle__Class**)(modloader::win::memory::resolve_rva(0x04740C20)); }
    namespace AkBankManager_AsyncBankHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::AkBankManager_AsyncBankHandle__Class** type_info = (::app::AkBankManager_AsyncBankHandle__Class**)(modloader::win::memory::resolve_rva(0x04724CA8)); }
    namespace AkBankManager_DecodableBankHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::AkBankManager_DecodableBankHandle__Class** type_info = (::app::AkBankManager_DecodableBankHandle__Class**)(modloader::win::memory::resolve_rva(0x04736030)); }
    namespace AkBasePathGetter { IL2CPP_MODLOADER_DLLEXPORT ::app::AkBasePathGetter__Class** type_info = (::app::AkBasePathGetter__Class**)(modloader::win::memory::resolve_rva(0x04727DC8)); }
    namespace AkCallbackManager_InitializationSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCallbackManager_InitializationSettings__Class** type_info = (::app::AkCallbackManager_InitializationSettings__Class**)(modloader::win::memory::resolve_rva(0x04781BC0)); }
    namespace AkCallbackManager_EventCallbackPackage { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCallbackManager_EventCallbackPackage__Class** type_info = (::app::AkCallbackManager_EventCallbackPackage__Class**)(modloader::win::memory::resolve_rva(0x047575F0)); }
    namespace AkCallbackManager_BankCallbackPackage { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCallbackManager_BankCallbackPackage__Class** type_info = (::app::AkCallbackManager_BankCallbackPackage__Class**)(modloader::win::memory::resolve_rva(0x047630D0)); }
    namespace AkCallbackManager_BGMCallbackPackage { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCallbackManager_BGMCallbackPackage__Class** type_info = (::app::AkCallbackManager_BGMCallbackPackage__Class**)(modloader::win::memory::resolve_rva(0x0474A0A8)); }
    namespace AkCommonOutputSettings_ChannelConfiguration { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCommonOutputSettings_ChannelConfiguration__Class** type_info = (::app::AkCommonOutputSettings_ChannelConfiguration__Class**)(modloader::win::memory::resolve_rva(0x0472F638)); }
    namespace AkCommonUserSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCommonUserSettings__Class** type_info = (::app::AkCommonUserSettings__Class**)(modloader::win::memory::resolve_rva(0x047489C8)); }
    namespace AkCommonCommSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkCommonCommSettings__Class** type_info = (::app::AkCommonCommSettings__Class**)(modloader::win::memory::resolve_rva(0x0478F140)); }
    namespace AkWwiseInitializationSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkWwiseInitializationSettings__Class** type_info = (::app::AkWwiseInitializationSettings__Class**)(modloader::win::memory::resolve_rva(0x0470EB70)); }
    namespace AkLogger { IL2CPP_MODLOADER_DLLEXPORT ::app::AkLogger__Class** type_info = (::app::AkLogger__Class**)(modloader::win::memory::resolve_rva(0x04766880)); }
    namespace AkUtilities_ShortIDGenerator { IL2CPP_MODLOADER_DLLEXPORT ::app::AkUtilities_ShortIDGenerator__Class** type_info = (::app::AkUtilities_ShortIDGenerator__Class**)(modloader::win::memory::resolve_rva(0x047413A0)); }
    namespace RuntimeGuidMapping { IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeGuidMapping__Class** type_info = (::app::RuntimeGuidMapping__Class**)(modloader::win::memory::resolve_rva(0x04700EF0)); }
    namespace RuntimeGuidMapping_BucketEntry__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RuntimeGuidMapping_BucketEntry__Array__Class** type_info = (::app::RuntimeGuidMapping_BucketEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x04764470)); }
    namespace WwiseBootstrapConfiguration { IL2CPP_MODLOADER_DLLEXPORT ::app::WwiseBootstrapConfiguration__Class** type_info = (::app::WwiseBootstrapConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04783AF0)); }
    namespace WotwWwiseBootstrapConfiguration { IL2CPP_MODLOADER_DLLEXPORT ::app::WotwWwiseBootstrapConfiguration__Class** type_info = (::app::WotwWwiseBootstrapConfiguration__Class**)(modloader::win::memory::resolve_rva(0x047477B8)); }
    namespace SoundListener { IL2CPP_MODLOADER_DLLEXPORT ::app::SoundListener__Class** type_info = (::app::SoundListener__Class**)(modloader::win::memory::resolve_rva(0x0476BFC8)); }
    namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class** type_info = (::app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class**)(modloader::win::memory::resolve_rva(0x04765BB0)); }
    namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Class** type_info = (::app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Class**)(modloader::win::memory::resolve_rva(0x0477FC98)); }
    namespace AkWwiseInitializationSettings_c { IL2CPP_MODLOADER_DLLEXPORT ::app::AkWwiseInitializationSettings_c__Class** type_info = (::app::AkWwiseInitializationSettings_c__Class**)(modloader::win::memory::resolve_rva(0x04784A30)); }
    namespace AkWwiseXMLWatcher { IL2CPP_MODLOADER_DLLEXPORT ::app::AkWwiseXMLWatcher__Class** type_info = (::app::AkWwiseXMLWatcher__Class**)(modloader::win::memory::resolve_rva(0x0475C778)); }
    namespace AkXBoxOneSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkXBoxOneSettings__Class** type_info = (::app::AkXBoxOneSettings__Class**)(modloader::win::memory::resolve_rva(0x047041E8)); }
    namespace AkXBoxOneSettings_PlatformAdvancedSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::AkXBoxOneSettings_PlatformAdvancedSettings__Class** type_info = (::app::AkXBoxOneSettings_PlatformAdvancedSettings__Class**)(modloader::win::memory::resolve_rva(0x0472B0C0)); }
    namespace AkMemBankLoader_LoadFile_d_14 { IL2CPP_MODLOADER_DLLEXPORT ::app::AkMemBankLoader_LoadFile_d_14__Class** type_info = (::app::AkMemBankLoader_LoadFile_d_14__Class**)(modloader::win::memory::resolve_rva(0x0474B2B8)); }
    namespace ObjectGetArgs_From { IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectGetArgs_From__Class** type_info = (::app::ObjectGetArgs_From__Class**)(modloader::win::memory::resolve_rva(0x04715590)); }
    namespace AudioEmitterZoneReference { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioEmitterZoneReference__Class** type_info = (::app::AudioEmitterZoneReference__Class**)(modloader::win::memory::resolve_rva(0x04725E10)); }
    namespace EntityTask { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityTask__Class** type_info = (::app::EntityTask__Class**)(modloader::win::memory::resolve_rva(0x04764688)); }
    namespace Entity_EntityVitalState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Entity_EntityVitalState__Enum__Class** type_info = (::app::Entity_EntityVitalState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04794CC0)); }
    namespace Entity_EntityState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Entity_EntityState__Enum__Class** type_info = (::app::Entity_EntityState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04721B10)); }
    namespace NavigationType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::NavigationType__Enum__Class** type_info = (::app::NavigationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04762110)); }
    namespace Entity { IL2CPP_MODLOADER_DLLEXPORT ::app::Entity__Class** type_info = (::app::Entity__Class**)(modloader::win::memory::resolve_rva(0x0477F9E8)); }
    namespace EntityPlaceholder_SpawnMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityPlaceholder_SpawnMode__Enum__Class** type_info = (::app::EntityPlaceholder_SpawnMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047907B8)); }
    namespace EntityPlaceholder { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityPlaceholder__Class** type_info = (::app::EntityPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x04744718)); }
    namespace ISwitch { IL2CPP_MODLOADER_DLLEXPORT ::app::ISwitch__Class** type_info = (::app::ISwitch__Class**)(modloader::win::memory::resolve_rva(0x04783F40)); }
    namespace GuidOwner { IL2CPP_MODLOADER_DLLEXPORT ::app::GuidOwner__Class** type_info = (::app::GuidOwner__Class**)(modloader::win::memory::resolve_rva(0x04790E00)); }
    namespace PhysicalSystemManager { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalSystemManager__Class** type_info = (::app::PhysicalSystemManager__Class**)(modloader::win::memory::resolve_rva(0x047568B8)); }
    namespace MoonGuid { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonGuid__Class** type_info = (::app::MoonGuid__Class**)(modloader::win::memory::resolve_rva(0x04715140)); }
    namespace PhysicalSystemState { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalSystemState__Class** type_info = (::app::PhysicalSystemState__Class**)(modloader::win::memory::resolve_rva(0x0478B888)); }
    namespace RigidbodyState { IL2CPP_MODLOADER_DLLEXPORT ::app::RigidbodyState__Class** type_info = (::app::RigidbodyState__Class**)(modloader::win::memory::resolve_rva(0x0478AA58)); }
    namespace GoThroughPlatform { IL2CPP_MODLOADER_DLLEXPORT ::app::GoThroughPlatform__Class** type_info = (::app::GoThroughPlatform__Class**)(modloader::win::memory::resolve_rva(0x047985A8)); }
    namespace LightPlatform { IL2CPP_MODLOADER_DLLEXPORT ::app::LightPlatform__Class** type_info = (::app::LightPlatform__Class**)(modloader::win::memory::resolve_rva(0x04708FF0)); }
}
