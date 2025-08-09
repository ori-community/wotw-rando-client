#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AKRESULT__Enum.h>
#include <Modloader/app/structs/AkAcousticSurfaceArray.h>
#include <Modloader/app/structs/AkActionOnEventType__Enum.h>
#include <Modloader/app/structs/AkAudioDeviceState__Enum.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioFormatInteropDelegate.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesInteropDelegate.h>
#include <Modloader/app/structs/AkAudioSettings.h>
#include <Modloader/app/structs/AkAuxSendArray.h>
#include <Modloader/app/structs/AkBankContent__Enum.h>
#include <Modloader/app/structs/AkCallbackManager_BankCallback.h>
#include <Modloader/app/structs/AkCallbackManager_EventCallback.h>
#include <Modloader/app/structs/AkChannelConfig.h>
#include <Modloader/app/structs/AkChannelEmitterArray.h>
#include <Modloader/app/structs/AkChannelOrdering__Enum.h>
#include <Modloader/app/structs/AkCommunicationSettings.h>
#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/AkDeviceSettings.h>
#include <Modloader/app/structs/AkDiffractionPathInfoArray.h>
#include <Modloader/app/structs/AkDynamicSequenceType__Enum.h>
#include <Modloader/app/structs/AkEmitterSettings.h>
#include <Modloader/app/structs/AkExternalSourceInfo.h>
#include <Modloader/app/structs/AkExternalSourceInfoArray.h>
#include <Modloader/app/structs/AkGroupType__Enum.h>
#include <Modloader/app/structs/AkImageSourceSettings.h>
#include <Modloader/app/structs/AkInitSettings.h>
#include <Modloader/app/structs/AkInitializationSettings.h>
#include <Modloader/app/structs/AkLogger_ErrorLoggerInteropDelegate.h>
#include <Modloader/app/structs/AkMIDIPostArray.h>
#include <Modloader/app/structs/AkMonitorErrorCode__Enum.h>
#include <Modloader/app/structs/AkMonitorErrorLevel__Enum.h>
#include <Modloader/app/structs/AkMultiPositionType__Enum.h>
#include <Modloader/app/structs/AkMusicSettings.h>
#include <Modloader/app/structs/AkObjectInfoArray.h>
#include <Modloader/app/structs/AkObstructionOcclusionValuesArray.h>
#include <Modloader/app/structs/AkOutputSettings.h>
#include <Modloader/app/structs/AkPanningRule__Enum.h>
#include <Modloader/app/structs/AkPathParams.h>
#include <Modloader/app/structs/AkPlatformInitSettings.h>
#include <Modloader/app/structs/AkPlaylist.h>
#include <Modloader/app/structs/AkPluginType__Enum.h>
#include <Modloader/app/structs/AkPositionArray.h>
#include <Modloader/app/structs/AkPositioningInfo.h>
#include <Modloader/app/structs/AkPreparationType__Enum.h>
#include <Modloader/app/structs/AkReflectionPathInfoArray.h>
#include <Modloader/app/structs/AkRoomParams.h>
#include <Modloader/app/structs/AkSegmentInfo.h>
#include <Modloader/app/structs/AkSoundEngine.h>
#include <Modloader/app/structs/AkSoundEngine_GameObjectHashFunction.h>
#include <Modloader/app/structs/AkSourceSettingsArray.h>
#include <Modloader/app/structs/AkSpatialAudioInitSettings.h>
#include <Modloader/app/structs/AkStreamMgrSettings.h>
#include <Modloader/app/structs/AkThreadProperties.h>
#include <Modloader/app/structs/AkTransform.h>
#include <Modloader/app/structs/AkTriangleArray.h>
#include <Modloader/app/structs/AkVector.h>
#include <Modloader/app/structs/AkVertexArray.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::AkSoundEngine {
    IL2CPP_REGISTER_METHOD(0x01898660, uint32_t, get_AK_SOUNDBANK_VERSION, )
    IL2CPP_REGISTER_METHOD(0x01898770, uint16_t, get_AK_INT, )
    IL2CPP_REGISTER_METHOD(0x01898880, uint16_t, get_AK_FLOAT, )
    IL2CPP_REGISTER_METHOD(0x01898990, uint8_t, get_AK_INTERLEAVED, )
    IL2CPP_REGISTER_METHOD(0x01898AA0, uint8_t, get_AK_NONINTERLEAVED, )
    IL2CPP_REGISTER_METHOD(0x01898BB0, uint32_t, get_AK_LE_NATIVE_BITSPERSAMPLE, )
    IL2CPP_REGISTER_METHOD(0x01898CC0, uint32_t, get_AK_LE_NATIVE_SAMPLETYPE, )
    IL2CPP_REGISTER_METHOD(0x01898DD0, uint32_t, get_AK_LE_NATIVE_INTERLEAVE, )
    IL2CPP_REGISTER_METHOD(
        0x01898EE0,
        uint32_t,
        DynamicSequenceOpen_1,
        app::GameObject* in_game_object_i_d,
        uint32_t in_u_flags,
        app::AkCallbackManager_EventCallback* in_pfn_callback,
        app::Object* in_p_cookie,
        app::AkDynamicSequenceType__Enum in_e_dynamic_sequence_type
    )
    IL2CPP_REGISTER_METHOD(
        0x018990D0,
        uint32_t,
        DynamicSequenceOpen_2,
        app::GameObject* in_game_object_i_d,
        uint32_t in_u_flags,
        app::AkCallbackManager_EventCallback* in_pfn_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(0x018992B0, uint32_t, DynamicSequenceOpen_3, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x01899420, app::AKRESULT__Enum, DynamicSequenceClose, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01899540,
        app::AKRESULT__Enum,
        DynamicSequencePlay_1,
        uint32_t in_playing_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(0x01899680, app::AKRESULT__Enum, DynamicSequencePlay_2, uint32_t in_playing_i_d, int32_t in_u_transition_duration)
    IL2CPP_REGISTER_METHOD(0x018997B0, app::AKRESULT__Enum, DynamicSequencePlay_3, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018998D0,
        app::AKRESULT__Enum,
        DynamicSequencePause_1,
        uint32_t in_playing_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(0x01899A10, app::AKRESULT__Enum, DynamicSequencePause_2, uint32_t in_playing_i_d, int32_t in_u_transition_duration)
    IL2CPP_REGISTER_METHOD(0x01899B40, app::AKRESULT__Enum, DynamicSequencePause_3, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01899C60,
        app::AKRESULT__Enum,
        DynamicSequenceResume_1,
        uint32_t in_playing_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(0x01899DA0, app::AKRESULT__Enum, DynamicSequenceResume_2, uint32_t in_playing_i_d, int32_t in_u_transition_duration)
    IL2CPP_REGISTER_METHOD(0x01899ED0, app::AKRESULT__Enum, DynamicSequenceResume_3, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01899FF0,
        app::AKRESULT__Enum,
        DynamicSequenceStop_1,
        uint32_t in_playing_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(0x0189A130, app::AKRESULT__Enum, DynamicSequenceStop_2, uint32_t in_playing_i_d, int32_t in_u_transition_duration)
    IL2CPP_REGISTER_METHOD(0x0189A260, app::AKRESULT__Enum, DynamicSequenceStop_3, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(0x0189A380, app::AKRESULT__Enum, DynamicSequenceBreak, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(
        0x0189A4A0,
        app::AKRESULT__Enum,
        DynamicSequenceGetPauseTimes,
        uint32_t in_playing_i_d,
        uint32_t* out_u_time,
        uint32_t* out_u_duration
    )
    IL2CPP_REGISTER_METHOD(0x0189A5E0, app::AkPlaylist*, DynamicSequenceLockPlaylist, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(0x0189A7F0, app::AKRESULT__Enum, DynamicSequenceUnlockPlaylist, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(0x0189A910, bool, IsInitialized, )
    IL2CPP_REGISTER_METHOD(0x0189AA20, app::AKRESULT__Enum, GetAudioSettings, app::AkAudioSettings* out_audio_settings)
    IL2CPP_REGISTER_METHOD(0x0189ABA0, app::AkChannelConfig*, GetSpeakerConfiguration_1, uint64_t in_id_output)
    IL2CPP_REGISTER_METHOD(0x0189ADA0, app::AkChannelConfig*, GetSpeakerConfiguration_2, )
    IL2CPP_REGISTER_METHOD(0x0189AF90, app::AKRESULT__Enum, GetPanningRule_1, int32_t* out_e_panning_rule, uint64_t in_id_output)
    IL2CPP_REGISTER_METHOD(0x0189B0C0, app::AKRESULT__Enum, GetPanningRule_2, int32_t* out_e_panning_rule)
    IL2CPP_REGISTER_METHOD(0x0189B1E0, app::AKRESULT__Enum, SetPanningRule_1, app::AkPanningRule__Enum in_e_panning_rule, uint64_t in_id_output)
    IL2CPP_REGISTER_METHOD(0x0189B310, app::AKRESULT__Enum, SetPanningRule_2, app::AkPanningRule__Enum in_e_panning_rule)
    IL2CPP_REGISTER_METHOD(
        0x0189B430,
        app::AKRESULT__Enum,
        GetSpeakerAngles_1,
        app::Single__Array* io_pf_speaker_angles,
        uint32_t* io_u_num_angles,
        float* out_f_height_angle,
        uint64_t in_id_output
    )
    IL2CPP_REGISTER_METHOD(
        0x0189B590,
        app::AKRESULT__Enum,
        GetSpeakerAngles_2,
        app::Single__Array* io_pf_speaker_angles,
        uint32_t* io_u_num_angles,
        float* out_f_height_angle
    )
    IL2CPP_REGISTER_METHOD(
        0x0189B6E0,
        app::AKRESULT__Enum,
        SetSpeakerAngles_1,
        app::Single__Array* in_pf_speaker_angles,
        uint32_t in_u_num_angles,
        float in_f_height_angle,
        uint64_t in_id_output
    )
    IL2CPP_REGISTER_METHOD(
        0x0189B830,
        app::AKRESULT__Enum,
        SetSpeakerAngles_2,
        app::Single__Array* in_pf_speaker_angles,
        uint32_t in_u_num_angles,
        float in_f_height_angle
    )
    IL2CPP_REGISTER_METHOD(0x0189B970, app::AKRESULT__Enum, SetVolumeThreshold, float in_f_volume_threshold_d_b)
    IL2CPP_REGISTER_METHOD(0x0189BA90, app::AKRESULT__Enum, SetMaxNumVoicesLimit, uint16_t in_max_number_voices)
    IL2CPP_REGISTER_METHOD(0x0189BBB0, app::AKRESULT__Enum, RenderAudio_1, bool in_b_allow_sync_render)
    IL2CPP_REGISTER_METHOD(0x0189BCD0, app::AKRESULT__Enum, RenderAudio_2, )
    IL2CPP_REGISTER_METHOD(0x0189BDE0, app::AKRESULT__Enum, RegisterPluginDLL_1, app::String* in__dll_name, app::String* in__dll_path)
    IL2CPP_REGISTER_METHOD(0x0189BF20, app::AKRESULT__Enum, RegisterPluginDLL_2, app::String* in__dll_name)
    IL2CPP_REGISTER_METHOD(0x0189C050, uint32_t, GetIDFromString, app::String* in_psz_string)
    IL2CPP_REGISTER_METHOD(
        0x0189C180,
        uint32_t,
        PostEvent_1,
        uint32_t in_event_i_d,
        app::GameObject* in_game_object_i_d,
        uint32_t in_u_flags,
        app::AkCallbackManager_EventCallback* in_pfn_callback,
        app::Object* in_p_cookie,
        uint32_t in_c_externals,
        app::AkExternalSourceInfoArray* in_p_external_sources,
        uint32_t in__playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189C3C0,
        uint32_t,
        PostEvent_2,
        uint32_t in_event_i_d,
        app::GameObject* in_game_object_i_d,
        uint32_t in_u_flags,
        app::AkCallbackManager_EventCallback* in_pfn_callback,
        app::Object* in_p_cookie,
        uint32_t in_c_externals,
        app::AkExternalSourceInfoArray* in_p_external_sources
    )
    IL2CPP_REGISTER_METHOD(
        0x0189C5F0,
        uint32_t,
        PostEvent_3,
        uint32_t in_event_i_d,
        app::GameObject* in_game_object_i_d,
        uint32_t in_u_flags,
        app::AkCallbackManager_EventCallback* in_pfn_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(
        0x0189C770,
        uint32_t,
        PostEvent_4,
        uint32_t in_event_i_d,
        uint64_t in_game_object_i_d_id,
        uint32_t in_u_flags,
        app::AkCallbackManager_EventCallback* in_pfn_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(0x0189C8C0, uint32_t, PostEvent_5, uint32_t in_event_i_d, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x0189C9C0, uint32_t, PostEvent_6, uint32_t in_event_i_d, uint64_t in_game_object_i_d_id)
    IL2CPP_REGISTER_METHOD(
        0x0189CAA0,
        uint32_t,
        PostEvent_7,
        app::String* in_psz_event_name,
        app::GameObject* in_game_object_i_d,
        uint32_t in_u_flags,
        app::AkCallbackManager_EventCallback* in_pfn_callback,
        app::Object* in_p_cookie,
        uint32_t in_c_externals,
        app::AkExternalSourceInfoArray* in_p_external_sources,
        uint32_t in__playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189CCE0,
        uint32_t,
        PostEvent_8,
        app::String* in_psz_event_name,
        app::GameObject* in_game_object_i_d,
        uint32_t in_u_flags,
        app::AkCallbackManager_EventCallback* in_pfn_callback,
        app::Object* in_p_cookie,
        uint32_t in_c_externals,
        app::AkExternalSourceInfoArray* in_p_external_sources
    )
    IL2CPP_REGISTER_METHOD(
        0x0189CF20,
        uint32_t,
        PostEvent_9,
        app::String* in_psz_event_name,
        app::GameObject* in_game_object_i_d,
        uint32_t in_u_flags,
        app::AkCallbackManager_EventCallback* in_pfn_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(0x0189D120, uint32_t, PostEvent_10, app::String* in_psz_event_name, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(
        0x0189D2B0,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_1,
        uint32_t in_event_i_d,
        app::AkActionOnEventType__Enum in__action_type,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve,
        uint32_t in__playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189D3B0,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_2,
        uint32_t in_event_i_d,
        app::AkActionOnEventType__Enum in__action_type,
        uint64_t in_game_object_i_d_id,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve,
        uint32_t in__playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189D490,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_3,
        uint32_t in_event_i_d,
        app::AkActionOnEventType__Enum in__action_type,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(
        0x0189D610,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_4,
        uint32_t in_event_i_d,
        app::AkActionOnEventType__Enum in__action_type,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_transition_duration
    )
    IL2CPP_REGISTER_METHOD(
        0x0189D780,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_5,
        uint32_t in_event_i_d,
        app::AkActionOnEventType__Enum in__action_type,
        app::GameObject* in_game_object_i_d
    )
    IL2CPP_REGISTER_METHOD(0x0189D8E0, app::AKRESULT__Enum, ExecuteActionOnEvent_6, uint32_t in_event_i_d, app::AkActionOnEventType__Enum in__action_type)
    IL2CPP_REGISTER_METHOD(
        0x0189DA10,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_7,
        app::String* in_psz_event_name,
        app::AkActionOnEventType__Enum in__action_type,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve,
        uint32_t in__playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189DB90,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_8,
        app::String* in_psz_event_name,
        app::AkActionOnEventType__Enum in__action_type,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(
        0x0189DD10,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_9,
        app::String* in_psz_event_name,
        app::AkActionOnEventType__Enum in__action_type,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_transition_duration
    )
    IL2CPP_REGISTER_METHOD(
        0x0189DE90,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_10,
        app::String* in_psz_event_name,
        app::AkActionOnEventType__Enum in__action_type,
        app::GameObject* in_game_object_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189E000,
        app::AKRESULT__Enum,
        ExecuteActionOnEvent_11,
        app::String* in_psz_event_name,
        app::AkActionOnEventType__Enum in__action_type
    )
    IL2CPP_REGISTER_METHOD(
        0x0189E130,
        app::AKRESULT__Enum,
        PostMIDIOnEvent,
        uint32_t in_event_i_d,
        app::GameObject* in_game_object_i_d,
        app::AkMIDIPostArray* in_p_posts,
        uint16_t in_u_num_posts
    )
    IL2CPP_REGISTER_METHOD(0x0189E2C0, app::AKRESULT__Enum, StopMIDIOnEvent_1, uint32_t in_event_i_d, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x0189E410, app::AKRESULT__Enum, StopMIDIOnEvent_2, uint32_t in_event_i_d)
    IL2CPP_REGISTER_METHOD(0x0189E530, app::AKRESULT__Enum, StopMIDIOnEvent_3, )
    IL2CPP_REGISTER_METHOD(
        0x0189E640,
        app::AKRESULT__Enum,
        PinEventInStreamCache_1,
        uint32_t in_event_i_d,
        char16_t in_u_active_priority,
        char16_t in_u_inactive_priority
    )
    IL2CPP_REGISTER_METHOD(
        0x0189E780,
        app::AKRESULT__Enum,
        PinEventInStreamCache_2,
        app::String* in_psz_event_name,
        char16_t in_u_active_priority,
        char16_t in_u_inactive_priority
    )
    IL2CPP_REGISTER_METHOD(0x0189E8D0, app::AKRESULT__Enum, UnpinEventInStreamCache_1, uint32_t in_event_i_d)
    IL2CPP_REGISTER_METHOD(0x0189E9F0, app::AKRESULT__Enum, UnpinEventInStreamCache_2, app::String* in_psz_event_name)
    IL2CPP_REGISTER_METHOD(
        0x0189EB20,
        app::AKRESULT__Enum,
        GetBufferStatusForPinnedEvent_1,
        uint32_t in_event_i_d,
        float* out_f_percent_buffered,
        int32_t* out_b_cache_pinned_memory_full
    )
    IL2CPP_REGISTER_METHOD(
        0x0189EC60,
        app::AKRESULT__Enum,
        GetBufferStatusForPinnedEvent_2,
        app::String* in_psz_event_name,
        float* out_f_percent_buffered,
        int32_t* out_b_cache_pinned_memory_full
    )
    IL2CPP_REGISTER_METHOD(
        0x0189EE70,
        app::AKRESULT__Enum,
        SeekOnEvent_1,
        uint32_t in_event_i_d,
        app::GameObject* in_game_object_i_d,
        int32_t in_i_position,
        bool in_b_seek_to_nearest_marker,
        uint32_t in__playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189EFF0,
        app::AKRESULT__Enum,
        SeekOnEvent_2,
        uint32_t in_event_i_d,
        app::GameObject* in_game_object_i_d,
        int32_t in_i_position,
        bool in_b_seek_to_nearest_marker
    )
    IL2CPP_REGISTER_METHOD(0x0189F170, app::AKRESULT__Enum, SeekOnEvent_3, uint32_t in_event_i_d, app::GameObject* in_game_object_i_d, int32_t in_i_position)
    IL2CPP_REGISTER_METHOD(
        0x0189F2E0,
        app::AKRESULT__Enum,
        SeekOnEvent_4,
        app::String* in_psz_event_name,
        app::GameObject* in_game_object_i_d,
        int32_t in_i_position,
        bool in_b_seek_to_nearest_marker,
        uint32_t in__playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189F470,
        app::AKRESULT__Enum,
        SeekOnEvent_5,
        app::String* in_psz_event_name,
        app::GameObject* in_game_object_i_d,
        int32_t in_i_position,
        bool in_b_seek_to_nearest_marker
    )
    IL2CPP_REGISTER_METHOD(
        0x0189F5F0,
        app::AKRESULT__Enum,
        SeekOnEvent_6,
        app::String* in_psz_event_name,
        app::GameObject* in_game_object_i_d,
        int32_t in_i_position
    )
    IL2CPP_REGISTER_METHOD(
        0x0189F760,
        app::AKRESULT__Enum,
        SeekOnEvent_7,
        uint32_t in_event_i_d,
        app::GameObject* in_game_object_i_d,
        float in_f_percent,
        bool in_b_seek_to_nearest_marker,
        uint32_t in__playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189F8E0,
        app::AKRESULT__Enum,
        SeekOnEvent_8,
        uint32_t in_event_i_d,
        app::GameObject* in_game_object_i_d,
        float in_f_percent,
        bool in_b_seek_to_nearest_marker
    )
    IL2CPP_REGISTER_METHOD(0x0189FA60, app::AKRESULT__Enum, SeekOnEvent_9, uint32_t in_event_i_d, app::GameObject* in_game_object_i_d, float in_f_percent)
    IL2CPP_REGISTER_METHOD(
        0x0189FBD0,
        app::AKRESULT__Enum,
        SeekOnEvent_10,
        app::String* in_psz_event_name,
        app::GameObject* in_game_object_i_d,
        float in_f_percent,
        bool in_b_seek_to_nearest_marker,
        uint32_t in__playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0189FD60,
        app::AKRESULT__Enum,
        SeekOnEvent_11,
        app::String* in_psz_event_name,
        app::GameObject* in_game_object_i_d,
        float in_f_percent,
        bool in_b_seek_to_nearest_marker
    )
    IL2CPP_REGISTER_METHOD(
        0x0189FEE0,
        app::AKRESULT__Enum,
        SeekOnEvent_12,
        app::String* in_psz_event_name,
        app::GameObject* in_game_object_i_d,
        float in_f_percent
    )
    IL2CPP_REGISTER_METHOD(0x018A0050, void, CancelEventCallbackCookie, app::Object* in_p_cookie)
    IL2CPP_REGISTER_METHOD(0x018A00F0, void, CancelEventCallbackGameObject, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A0240, void, CancelEventCallback, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(0x018A02E0, app::AKRESULT__Enum, GetSourcePlayPosition_1, uint32_t in__playing_i_d, int32_t* out_pu_position, bool in_b_extrapolate)
    IL2CPP_REGISTER_METHOD(0x018A0420, app::AKRESULT__Enum, GetSourcePlayPosition_2, uint32_t in__playing_i_d, int32_t* out_pu_position)
    IL2CPP_REGISTER_METHOD(
        0x018A0550,
        app::AKRESULT__Enum,
        GetSourceStreamBuffering,
        uint32_t in__playing_i_d,
        int32_t* out_buffering,
        int32_t* out_b_is_buffering
    )
    IL2CPP_REGISTER_METHOD(0x018A0690, void, StopAll_1, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A0760, void, StopAll_2, uint64_t in_game_object_i_d_id)
    IL2CPP_REGISTER_METHOD(0x018A0800, void, StopAll_3, )
    IL2CPP_REGISTER_METHOD(
        0x018A0910,
        void,
        StopPlayingID_1,
        uint32_t in_playing_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(0x018A0A50, void, StopPlayingID_2, uint32_t in_playing_i_d, int32_t in_u_transition_duration)
    IL2CPP_REGISTER_METHOD(0x018A0B80, void, StopPlayingID_3, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018A0CA0,
        void,
        ExecuteActionOnPlayingID_1,
        app::AkActionOnEventType__Enum in__action_type,
        uint32_t in_playing_i_d,
        int32_t in_u_transition_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(
        0x018A0DF0,
        void,
        ExecuteActionOnPlayingID_2,
        app::AkActionOnEventType__Enum in__action_type,
        uint32_t in_playing_i_d,
        int32_t in_u_transition_duration
    )
    IL2CPP_REGISTER_METHOD(0x018A0F30, void, ExecuteActionOnPlayingID_3, app::AkActionOnEventType__Enum in__action_type, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(0x018A1060, void, SetRandomSeed, uint32_t in_u_seed)
    IL2CPP_REGISTER_METHOD(0x018A1180, void, MuteBackgroundMusic, bool in_b_mute)
    IL2CPP_REGISTER_METHOD(0x018A12A0, bool, GetBackgroundMusicMute, )
    IL2CPP_REGISTER_METHOD(
        0x018A13B0,
        app::AKRESULT__Enum,
        SendPluginCustomGameData,
        uint32_t in_bus_i_d,
        app::GameObject* in_bus_object_i_d,
        app::AkPluginType__Enum in_e_type,
        uint32_t in_u_company_i_d,
        uint32_t in_u_plugin_i_d,
        void* in_p_data,
        uint32_t in_u_size_in_bytes
    )
    IL2CPP_REGISTER_METHOD(0x018A1530, app::AKRESULT__Enum, UnregisterAllGameObj, )
    IL2CPP_REGISTER_METHOD(
        0x018A1640,
        app::AKRESULT__Enum,
        SetMultiplePositions_1,
        app::GameObject* in__game_object_i_d,
        app::AkPositionArray* in_p_positions,
        uint16_t in__num_positions,
        app::AkMultiPositionType__Enum in_e_multi_position_type
    )
    IL2CPP_REGISTER_METHOD(
        0x018A17D0,
        app::AKRESULT__Enum,
        SetMultiplePositions_2,
        app::GameObject* in__game_object_i_d,
        app::AkPositionArray* in_p_positions,
        uint16_t in__num_positions
    )
    IL2CPP_REGISTER_METHOD(
        0x018A1950,
        app::AKRESULT__Enum,
        SetMultiplePositions_3,
        app::GameObject* in__game_object_i_d,
        app::AkChannelEmitterArray* in_p_positions,
        uint16_t in__num_positions,
        app::AkMultiPositionType__Enum in_e_multi_position_type
    )
    IL2CPP_REGISTER_METHOD(
        0x018A1AE0,
        app::AKRESULT__Enum,
        SetMultiplePositions_4,
        app::GameObject* in__game_object_i_d,
        app::AkChannelEmitterArray* in_p_positions,
        uint16_t in__num_positions
    )
    IL2CPP_REGISTER_METHOD(0x018A1C60, app::AKRESULT__Enum, SetScalingFactor, app::GameObject* in__game_object_i_d, float in_f_attenuation_scaling_factor)
    IL2CPP_REGISTER_METHOD(0x018A1DC0, app::AKRESULT__Enum, ClearBanks, )
    IL2CPP_REGISTER_METHOD(0x018A1ED0, app::AKRESULT__Enum, SetBankLoadIOSettings, float in_f_throughput, char16_t in_priority)
    IL2CPP_REGISTER_METHOD(0x018A2000, app::AKRESULT__Enum, LoadBank_1, app::String* in_psz_string, int32_t in_mem_pool_id, uint32_t* out_bank_i_d)
    IL2CPP_REGISTER_METHOD(0x018A2140, app::AKRESULT__Enum, LoadBank_2, uint32_t in_bank_i_d, int32_t in_mem_pool_id)
    IL2CPP_REGISTER_METHOD(
        0x018A2270,
        app::AKRESULT__Enum,
        LoadBank_3,
        void* in_p_in_memory_bank_ptr,
        uint32_t in_u_in_memory_bank_size,
        uint32_t* out_bank_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018A23B0,
        app::AKRESULT__Enum,
        LoadBank_4,
        void* in_p_in_memory_bank_ptr,
        uint32_t in_u_in_memory_bank_size,
        int32_t in_u_pool_for_bank_media,
        uint32_t* out_bank_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018A2500,
        app::AKRESULT__Enum,
        LoadBank_5,
        app::String* in_psz_string,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie,
        int32_t in_mem_pool_id,
        uint32_t* out_bank_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018A2740,
        app::AKRESULT__Enum,
        LoadBank_6,
        uint32_t in_bank_i_d,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie,
        int32_t in_mem_pool_id
    )
    IL2CPP_REGISTER_METHOD(
        0x018A2980,
        app::AKRESULT__Enum,
        LoadBank_7,
        void* in_p_in_memory_bank_ptr,
        uint32_t in_u_in_memory_bank_size,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie,
        uint32_t* out_bank_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018A2BC0,
        app::AKRESULT__Enum,
        LoadBank_8,
        void* in_p_in_memory_bank_ptr,
        uint32_t in_u_in_memory_bank_size,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie,
        int32_t in_u_pool_for_bank_media,
        uint32_t* out_bank_i_d
    )
    IL2CPP_REGISTER_METHOD(0x018A2E00, app::AKRESULT__Enum, UnloadBank_1, app::String* in_psz_string, void* in_p_in_memory_bank_ptr, int32_t* out_p_mem_pool_id)
    IL2CPP_REGISTER_METHOD(0x018A2F50, app::AKRESULT__Enum, UnloadBank_2, app::String* in_psz_string, void* in_p_in_memory_bank_ptr)
    IL2CPP_REGISTER_METHOD(0x018A3080, app::AKRESULT__Enum, UnloadBank_3, uint32_t in_bank_i_d, void* in_p_in_memory_bank_ptr, int32_t* out_p_mem_pool_id)
    IL2CPP_REGISTER_METHOD(0x018A31C0, app::AKRESULT__Enum, UnloadBank_4, uint32_t in_bank_i_d, void* in_p_in_memory_bank_ptr)
    IL2CPP_REGISTER_METHOD(
        0x018A32F0,
        app::AKRESULT__Enum,
        UnloadBank_5,
        app::String* in_psz_string,
        void* in_p_in_memory_bank_ptr,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(
        0x018A3530,
        app::AKRESULT__Enum,
        UnloadBank_6,
        uint32_t in_bank_i_d,
        void* in_p_in_memory_bank_ptr,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(0x018A3770, void, CancelBankCallbackCookie, app::Object* in_p_cookie)
    IL2CPP_REGISTER_METHOD(
        0x018A3810,
        app::AKRESULT__Enum,
        PrepareBank_1,
        app::AkPreparationType__Enum in__preparation_type,
        app::String* in_psz_string,
        app::AkBankContent__Enum in_u_flags
    )
    IL2CPP_REGISTER_METHOD(0x018A3950, app::AKRESULT__Enum, PrepareBank_2, app::AkPreparationType__Enum in__preparation_type, app::String* in_psz_string)
    IL2CPP_REGISTER_METHOD(
        0x018A3A80,
        app::AKRESULT__Enum,
        PrepareBank_3,
        app::AkPreparationType__Enum in__preparation_type,
        uint32_t in_bank_i_d,
        app::AkBankContent__Enum in_u_flags
    )
    IL2CPP_REGISTER_METHOD(0x018A3BC0, app::AKRESULT__Enum, PrepareBank_4, app::AkPreparationType__Enum in__preparation_type, uint32_t in_bank_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018A3CF0,
        app::AKRESULT__Enum,
        PrepareBank_5,
        app::AkPreparationType__Enum in__preparation_type,
        app::String* in_psz_string,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie,
        app::AkBankContent__Enum in_u_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x018A3F30,
        app::AKRESULT__Enum,
        PrepareBank_6,
        app::AkPreparationType__Enum in__preparation_type,
        app::String* in_psz_string,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(
        0x018A4170,
        app::AKRESULT__Enum,
        PrepareBank_7,
        app::AkPreparationType__Enum in__preparation_type,
        uint32_t in_bank_i_d,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie,
        app::AkBankContent__Enum in_u_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x018A43B0,
        app::AKRESULT__Enum,
        PrepareBank_8,
        app::AkPreparationType__Enum in__preparation_type,
        uint32_t in_bank_i_d,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(0x018A45F0, app::AKRESULT__Enum, ClearPreparedEvents, )
    IL2CPP_REGISTER_METHOD(
        0x018A4700,
        app::AKRESULT__Enum,
        PrepareEvent_1,
        app::AkPreparationType__Enum in__preparation_type,
        app::String__Array* in_ppsz_string,
        uint32_t in_u_num_event
    )
    IL2CPP_REGISTER_METHOD(
        0x018A4A90,
        app::AKRESULT__Enum,
        PrepareEvent_2,
        app::AkPreparationType__Enum in__preparation_type,
        app::UInt32__Array* in_p_event_i_d,
        uint32_t in_u_num_event
    )
    IL2CPP_REGISTER_METHOD(
        0x018A4BD0,
        app::AKRESULT__Enum,
        PrepareEvent_3,
        app::AkPreparationType__Enum in__preparation_type,
        app::String__Array* in_ppsz_string,
        uint32_t in_u_num_event,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(
        0x018A5040,
        app::AKRESULT__Enum,
        PrepareEvent_4,
        app::AkPreparationType__Enum in__preparation_type,
        app::UInt32__Array* in_p_event_i_d,
        uint32_t in_u_num_event,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(0x018A5290, app::AKRESULT__Enum, SetMedia, app::AkSourceSettingsArray* in_p_source_settings, uint32_t in_u_num_source_settings)
    IL2CPP_REGISTER_METHOD(0x018A53D0, app::AKRESULT__Enum, UnsetMedia, app::AkSourceSettingsArray* in_p_source_settings, uint32_t in_u_num_source_settings)
    IL2CPP_REGISTER_METHOD(
        0x018A5510,
        app::AKRESULT__Enum,
        PrepareGameSyncs_1,
        app::AkPreparationType__Enum in__preparation_type,
        app::AkGroupType__Enum in_e_game_sync_type,
        app::String* in_psz_group_name,
        app::String__Array* in_ppsz_game_sync_name,
        uint32_t in_u_num_game_syncs
    )
    IL2CPP_REGISTER_METHOD(
        0x018A58B0,
        app::AKRESULT__Enum,
        PrepareGameSyncs_2,
        app::AkPreparationType__Enum in__preparation_type,
        app::AkGroupType__Enum in_e_game_sync_type,
        uint32_t in__group_i_d,
        app::UInt32__Array* in_pa_game_sync_i_d,
        uint32_t in_u_num_game_syncs
    )
    IL2CPP_REGISTER_METHOD(
        0x018A5A00,
        app::AKRESULT__Enum,
        PrepareGameSyncs_3,
        app::AkPreparationType__Enum in__preparation_type,
        app::AkGroupType__Enum in_e_game_sync_type,
        app::String* in_psz_group_name,
        app::String__Array* in_ppsz_game_sync_name,
        uint32_t in_u_num_game_syncs,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(
        0x018A5E90,
        app::AKRESULT__Enum,
        PrepareGameSyncs_4,
        app::AkPreparationType__Enum in__preparation_type,
        app::AkGroupType__Enum in_e_game_sync_type,
        uint32_t in__group_i_d,
        app::UInt32__Array* in_pa_game_sync_i_d,
        uint32_t in_u_num_game_syncs,
        app::AkCallbackManager_BankCallback* in_pfn_bank_callback,
        app::Object* in_p_cookie
    )
    IL2CPP_REGISTER_METHOD(0x018A60F0, app::AKRESULT__Enum, AddListener, app::GameObject* in_emitter_game_obj, app::GameObject* in_listener_game_obj)
    IL2CPP_REGISTER_METHOD(0x018A6250, app::AKRESULT__Enum, RemoveListener, app::GameObject* in_emitter_game_obj, app::GameObject* in_listener_game_obj)
    IL2CPP_REGISTER_METHOD(0x018A63B0, app::AKRESULT__Enum, AddDefaultListener, app::GameObject* in_listener_game_obj)
    IL2CPP_REGISTER_METHOD(0x018A6500, app::AKRESULT__Enum, RemoveDefaultListener, app::GameObject* in_listener_game_obj)
    IL2CPP_REGISTER_METHOD(0x018A6650, app::AKRESULT__Enum, ResetListenersToDefault, app::GameObject* in_emitter_game_obj)
    IL2CPP_REGISTER_METHOD(
        0x018A67A0,
        app::AKRESULT__Enum,
        SetListenerSpatialization_1,
        app::GameObject* in_u_listener_i_d,
        bool in_b_spatialized,
        app::AkChannelConfig* in_channel_config,
        app::Single__Array* in_p_volume_offsets
    )
    IL2CPP_REGISTER_METHOD(
        0x018A6930,
        app::AKRESULT__Enum,
        SetListenerSpatialization_2,
        app::GameObject* in_u_listener_i_d,
        bool in_b_spatialized,
        app::AkChannelConfig* in_channel_config
    )
    IL2CPP_REGISTER_METHOD(
        0x018A6AB0,
        app::AKRESULT__Enum,
        SetRTPCValue_1,
        uint32_t in_rtpc_i_d,
        float in_value,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve,
        bool in_b_bypass_internal_value_interpolation
    )
    IL2CPP_REGISTER_METHOD(
        0x018A6C40,
        app::AKRESULT__Enum,
        SetRTPCValue_2,
        uint32_t in_rtpc_i_d,
        float in_value,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(
        0x018A6DC0,
        app::AKRESULT__Enum,
        SetRTPCValue_3,
        uint32_t in_rtpc_i_d,
        float in_value,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration
    )
    IL2CPP_REGISTER_METHOD(0x018A6F30, app::AKRESULT__Enum, SetRTPCValue_4, uint32_t in_rtpc_i_d, float in_value, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A7020, app::AKRESULT__Enum, SetRTPCValue_5, uint32_t in_rtpc_i_d, float in_value, uint64_t in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A70E0, app::AKRESULT__Enum, SetRTPCValue_6, uint32_t in_rtpc_i_d, float in_value)
    IL2CPP_REGISTER_METHOD(
        0x018A7210,
        app::AKRESULT__Enum,
        SetRTPCValue_7,
        app::String* in_psz_rtpc_name,
        float in_value,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve,
        bool in_b_bypass_internal_value_interpolation
    )
    IL2CPP_REGISTER_METHOD(
        0x018A73A0,
        app::AKRESULT__Enum,
        SetRTPCValue_8,
        app::String* in_psz_rtpc_name,
        float in_value,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(
        0x018A7520,
        app::AKRESULT__Enum,
        SetRTPCValue_9,
        app::String* in_psz_rtpc_name,
        float in_value,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration
    )
    IL2CPP_REGISTER_METHOD(0x018A76A0, app::AKRESULT__Enum, SetRTPCValue_10, app::String* in_psz_rtpc_name, float in_value, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A7810, app::AKRESULT__Enum, SetRTPCValue_11, app::String* in_psz_rtpc_name, float in_value)
    IL2CPP_REGISTER_METHOD(
        0x018A7950,
        app::AKRESULT__Enum,
        SetRTPCValueByPlayingID_1,
        uint32_t in_rtpc_i_d,
        float in_value,
        uint32_t in_playing_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve,
        bool in_b_bypass_internal_value_interpolation
    )
    IL2CPP_REGISTER_METHOD(
        0x018A7AB0,
        app::AKRESULT__Enum,
        SetRTPCValueByPlayingID_2,
        uint32_t in_rtpc_i_d,
        float in_value,
        uint32_t in_playing_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(
        0x018A7C00,
        app::AKRESULT__Enum,
        SetRTPCValueByPlayingID_3,
        uint32_t in_rtpc_i_d,
        float in_value,
        uint32_t in_playing_i_d,
        int32_t in_u_value_change_duration
    )
    IL2CPP_REGISTER_METHOD(0x018A7D50, app::AKRESULT__Enum, SetRTPCValueByPlayingID_4, uint32_t in_rtpc_i_d, float in_value, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018A7E90,
        app::AKRESULT__Enum,
        SetRTPCValueByPlayingID_5,
        app::String* in_psz_rtpc_name,
        float in_value,
        uint32_t in_playing_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve,
        bool in_b_bypass_internal_value_interpolation
    )
    IL2CPP_REGISTER_METHOD(
        0x018A8000,
        app::AKRESULT__Enum,
        SetRTPCValueByPlayingID_6,
        app::String* in_psz_rtpc_name,
        float in_value,
        uint32_t in_playing_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(
        0x018A8160,
        app::AKRESULT__Enum,
        SetRTPCValueByPlayingID_7,
        app::String* in_psz_rtpc_name,
        float in_value,
        uint32_t in_playing_i_d,
        int32_t in_u_value_change_duration
    )
    IL2CPP_REGISTER_METHOD(0x018A82B0, app::AKRESULT__Enum, SetRTPCValueByPlayingID_8, app::String* in_psz_rtpc_name, float in_value, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018A83F0,
        app::AKRESULT__Enum,
        ResetRTPCValue_1,
        uint32_t in_rtpc_i_d,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve,
        bool in_b_bypass_internal_value_interpolation
    )
    IL2CPP_REGISTER_METHOD(
        0x018A8580,
        app::AKRESULT__Enum,
        ResetRTPCValue_2,
        uint32_t in_rtpc_i_d,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(
        0x018A8700,
        app::AKRESULT__Enum,
        ResetRTPCValue_3,
        uint32_t in_rtpc_i_d,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration
    )
    IL2CPP_REGISTER_METHOD(0x018A8870, app::AKRESULT__Enum, ResetRTPCValue_4, uint32_t in_rtpc_i_d, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A89C0, app::AKRESULT__Enum, ResetRTPCValue_5, uint32_t in_rtpc_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018A8AE0,
        app::AKRESULT__Enum,
        ResetRTPCValue_6,
        app::String* in_psz_rtpc_name,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve,
        bool in_b_bypass_internal_value_interpolation
    )
    IL2CPP_REGISTER_METHOD(
        0x018A8C70,
        app::AKRESULT__Enum,
        ResetRTPCValue_7,
        app::String* in_psz_rtpc_name,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration,
        app::AkCurveInterpolation__Enum in_e_fade_curve
    )
    IL2CPP_REGISTER_METHOD(
        0x018A8DF0,
        app::AKRESULT__Enum,
        ResetRTPCValue_8,
        app::String* in_psz_rtpc_name,
        app::GameObject* in_game_object_i_d,
        int32_t in_u_value_change_duration
    )
    IL2CPP_REGISTER_METHOD(0x018A8F60, app::AKRESULT__Enum, ResetRTPCValue_9, app::String* in_psz_rtpc_name, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A90C0, app::AKRESULT__Enum, ResetRTPCValue_10, app::String* in_psz_rtpc_name)
    IL2CPP_REGISTER_METHOD(
        0x018A91F0,
        app::AKRESULT__Enum,
        SetSwitch_1,
        uint32_t in_switch_group,
        uint32_t in_switch_state,
        app::GameObject* in_game_object_i_d
    )
    IL2CPP_REGISTER_METHOD(0x018A92D0, app::AKRESULT__Enum, SetSwitch_2, uint32_t in_switch_group, uint32_t in_switch_state, uint64_t in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018A9390,
        app::AKRESULT__Enum,
        SetSwitch_3,
        app::String* in_psz_switch_group,
        app::String* in_psz_switch_state,
        app::GameObject* in_game_object_i_d
    )
    IL2CPP_REGISTER_METHOD(0x018A9510, app::AKRESULT__Enum, PostTrigger_1, uint32_t in_trigger_i_d, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A95F0, app::AKRESULT__Enum, PostTrigger_2, uint32_t in_trigger_i_d, uint64_t in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A96A0, app::AKRESULT__Enum, PostTrigger_3, app::String* in_psz_trigger, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018A9800, app::AKRESULT__Enum, SetState_1, uint32_t in_state_group, uint32_t in_state)
    IL2CPP_REGISTER_METHOD(0x018A9930, app::AKRESULT__Enum, SetState_2, app::String* in_psz_state_group, app::String* in_psz_state)
    IL2CPP_REGISTER_METHOD(
        0x018A9A70,
        app::AKRESULT__Enum,
        SetGameObjectAuxSendValues,
        app::GameObject* in_game_object_i_d,
        app::AkAuxSendArray* in_a_aux_send_values,
        uint32_t in_u_num_send_values
    )
    IL2CPP_REGISTER_METHOD(
        0x018A9B60,
        app::AKRESULT__Enum,
        SetGameObjectOutputBusVolume,
        app::GameObject* in_emitter_obj_i_d,
        app::GameObject* in_listener_obj_i_d,
        float in_f_control_value
    )
    IL2CPP_REGISTER_METHOD(0x018A9CE0, app::AKRESULT__Enum, SetActorMixerEffect, uint32_t in_audio_node_i_d, uint32_t in_u_f_x_index, uint32_t in_share_set_i_d)
    IL2CPP_REGISTER_METHOD(0x018A9E20, app::AKRESULT__Enum, SetBusEffect_1, uint32_t in_audio_node_i_d, uint32_t in_u_f_x_index, uint32_t in_share_set_i_d)
    IL2CPP_REGISTER_METHOD(0x018A9F60, app::AKRESULT__Enum, SetBusEffect_2, app::String* in_psz_bus_name, uint32_t in_u_f_x_index, uint32_t in_share_set_i_d)
    IL2CPP_REGISTER_METHOD(0x018AA0A0, app::AKRESULT__Enum, SetMixer_1, uint32_t in_audio_node_i_d, uint32_t in_share_set_i_d)
    IL2CPP_REGISTER_METHOD(0x018AA1D0, app::AKRESULT__Enum, SetMixer_2, app::String* in_psz_bus_name, uint32_t in_share_set_i_d)
    IL2CPP_REGISTER_METHOD(0x018AA300, app::AKRESULT__Enum, SetBusConfig_1, uint32_t in_audio_node_i_d, app::AkChannelConfig* in_channel_config)
    IL2CPP_REGISTER_METHOD(0x018AA440, app::AKRESULT__Enum, SetBusConfig_2, app::String* in_psz_bus_name, app::AkChannelConfig* in_channel_config)
    IL2CPP_REGISTER_METHOD(
        0x018AA580,
        app::AKRESULT__Enum,
        SetObjectObstructionAndOcclusion,
        app::GameObject* in__emitter_i_d,
        app::GameObject* in__listener_i_d,
        float in_f_obstruction_level,
        float in_f_occlusion_level
    )
    IL2CPP_REGISTER_METHOD(
        0x018AA710,
        app::AKRESULT__Enum,
        SetMultipleObstructionAndOcclusion,
        app::GameObject* in__emitter_i_d,
        app::GameObject* in_u_listener_i_d,
        app::AkObstructionOcclusionValuesArray* in_f_obstruction_occlusion_values,
        uint32_t in_u_num_occlusion_obstruction
    )
    IL2CPP_REGISTER_METHOD(0x018AA8B0, app::AKRESULT__Enum, StartOutputCapture, app::String* in__capture_file_name)
    IL2CPP_REGISTER_METHOD(0x018AA9E0, app::AKRESULT__Enum, StopOutputCapture, )
    IL2CPP_REGISTER_METHOD(0x018AAAF0, app::AKRESULT__Enum, AddOutputCaptureMarker, app::String* in__marker_text)
    IL2CPP_REGISTER_METHOD(0x018AACE0, app::AKRESULT__Enum, StartProfilerCapture, app::String* in__capture_file_name)
    IL2CPP_REGISTER_METHOD(0x018AAE10, app::AKRESULT__Enum, StopProfilerCapture, )
    IL2CPP_REGISTER_METHOD(0x018AAF20, app::AKRESULT__Enum, RemoveOutput, uint64_t in_id_output)
    IL2CPP_REGISTER_METHOD(
        0x018AB040,
        app::AKRESULT__Enum,
        ReplaceOutput_1,
        app::AkOutputSettings* in__settings,
        uint64_t in_output_device_id,
        uint64_t* out_p_output_device_id
    )
    IL2CPP_REGISTER_METHOD(0x018AB190, app::AKRESULT__Enum, ReplaceOutput_2, app::AkOutputSettings* in__settings, uint64_t in_output_device_id)
    IL2CPP_REGISTER_METHOD(0x018AB2D0, uint64_t, GetOutputID_1, uint32_t in_id_shareset, uint32_t in_id_device)
    IL2CPP_REGISTER_METHOD(0x018AB400, uint64_t, GetOutputID_2, app::String* in_sz_share_set, uint32_t in_id_device)
    IL2CPP_REGISTER_METHOD(0x018AB5F0, app::AKRESULT__Enum, SetBusDevice_1, uint32_t in_id_bus, uint32_t in_id_new_device)
    IL2CPP_REGISTER_METHOD(0x018AB720, app::AKRESULT__Enum, SetBusDevice_2, app::String* in__bus_name, app::String* in__device_name)
    IL2CPP_REGISTER_METHOD(0x018AB7D0, app::AKRESULT__Enum, SetOutputVolume, uint64_t in_id_output, float in_f_volume)
    IL2CPP_REGISTER_METHOD(0x018AB900, app::AKRESULT__Enum, GetDeviceSpatialAudioSupport, uint32_t in_id_device)
    IL2CPP_REGISTER_METHOD(0x018ABA20, app::AKRESULT__Enum, Suspend_1, bool in_b_render_anyway)
    IL2CPP_REGISTER_METHOD(0x018ABB40, app::AKRESULT__Enum, Suspend_2, )
    IL2CPP_REGISTER_METHOD(0x018ABC50, app::AKRESULT__Enum, WakeupFromSuspend, )
    IL2CPP_REGISTER_METHOD(0x018ABD60, uint32_t, GetBufferTick, )
    IL2CPP_REGISTER_METHOD(0x018ABE70, uint8_t, get_AK_INVALID_MIDI_CHANNEL, )
    IL2CPP_REGISTER_METHOD(0x018ABF80, uint8_t, get_AK_INVALID_MIDI_NOTE, )
    IL2CPP_REGISTER_METHOD(
        0x018AC090,
        app::AKRESULT__Enum,
        GetPlayingSegmentInfo_1,
        uint32_t in__playing_i_d,
        app::AkSegmentInfo* out_segment_info,
        bool in_b_extrapolate
    )
    IL2CPP_REGISTER_METHOD(0x018AC1E0, app::AKRESULT__Enum, GetPlayingSegmentInfo_2, uint32_t in__playing_i_d, app::AkSegmentInfo* out_segment_info)
    IL2CPP_REGISTER_METHOD(
        0x018AC320,
        app::AKRESULT__Enum,
        PostCode_1,
        app::AkMonitorErrorCode__Enum in_e_error,
        app::AkMonitorErrorLevel__Enum in_e_error_level,
        uint32_t in_playing_i_d,
        app::GameObject* in_game_obj_i_d,
        uint32_t in_audio_node_i_d,
        bool in_b_is_bus
    )
    IL2CPP_REGISTER_METHOD(
        0x018AC4B0,
        app::AKRESULT__Enum,
        PostCode_2,
        app::AkMonitorErrorCode__Enum in_e_error,
        app::AkMonitorErrorLevel__Enum in_e_error_level,
        uint32_t in_playing_i_d,
        app::GameObject* in_game_obj_i_d,
        uint32_t in_audio_node_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018AC630,
        app::AKRESULT__Enum,
        PostCode_3,
        app::AkMonitorErrorCode__Enum in_e_error,
        app::AkMonitorErrorLevel__Enum in_e_error_level,
        uint32_t in_playing_i_d,
        app::GameObject* in_game_obj_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018AC7A0,
        app::AKRESULT__Enum,
        PostCode_4,
        app::AkMonitorErrorCode__Enum in_e_error,
        app::AkMonitorErrorLevel__Enum in_e_error_level,
        uint32_t in_playing_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018AC8E0,
        app::AKRESULT__Enum,
        PostCode_5,
        app::AkMonitorErrorCode__Enum in_e_error,
        app::AkMonitorErrorLevel__Enum in_e_error_level
    )
    IL2CPP_REGISTER_METHOD(
        0x018ACA10,
        app::AKRESULT__Enum,
        PostString_1,
        app::String* in_psz_error,
        app::AkMonitorErrorLevel__Enum in_e_error_level,
        uint32_t in_playing_i_d,
        app::GameObject* in_game_obj_i_d,
        uint32_t in_audio_node_i_d,
        bool in_b_is_bus
    )
    IL2CPP_REGISTER_METHOD(
        0x018ACBA0,
        app::AKRESULT__Enum,
        PostString_2,
        app::String* in_psz_error,
        app::AkMonitorErrorLevel__Enum in_e_error_level,
        uint32_t in_playing_i_d,
        app::GameObject* in_game_obj_i_d,
        uint32_t in_audio_node_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018ACD20,
        app::AKRESULT__Enum,
        PostString_3,
        app::String* in_psz_error,
        app::AkMonitorErrorLevel__Enum in_e_error_level,
        uint32_t in_playing_i_d,
        app::GameObject* in_game_obj_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018ACEA0,
        app::AKRESULT__Enum,
        PostString_4,
        app::String* in_psz_error,
        app::AkMonitorErrorLevel__Enum in_e_error_level,
        uint32_t in_playing_i_d
    )
    IL2CPP_REGISTER_METHOD(0x018ACFE0, app::AKRESULT__Enum, PostString_5, app::String* in_psz_error, app::AkMonitorErrorLevel__Enum in_e_error_level)
    IL2CPP_REGISTER_METHOD(0x018AD110, int32_t, GetTimeStamp, )
    IL2CPP_REGISTER_METHOD(0x018AD220, uint32_t, GetNumNonZeroBits, uint32_t in_u_word)
    IL2CPP_REGISTER_METHOD(0x018AD340, void, AkGetDefaultHighPriorityThreadProperties, app::AkThreadProperties* out_thread_properties)
    IL2CPP_REGISTER_METHOD(
        0x018AD470,
        uint32_t,
        ResolveDialogueEvent_1,
        uint32_t in_event_i_d,
        app::UInt32__Array* in_a_argument_values,
        uint32_t in_u_num_arguments,
        uint32_t in_id_sequence
    )
    IL2CPP_REGISTER_METHOD(
        0x018AD5C0,
        uint32_t,
        ResolveDialogueEvent_2,
        uint32_t in_event_i_d,
        app::UInt32__Array* in_a_argument_values,
        uint32_t in_u_num_arguments
    )
    IL2CPP_REGISTER_METHOD(
        0x018AD700,
        app::AKRESULT__Enum,
        GetDialogueEventCustomPropertyValue_1,
        uint32_t in_event_i_d,
        uint32_t in_u_prop_i_d,
        int32_t* out_i_value
    )
    IL2CPP_REGISTER_METHOD(
        0x018AD840,
        app::AKRESULT__Enum,
        GetDialogueEventCustomPropertyValue_2,
        uint32_t in_event_i_d,
        uint32_t in_u_prop_i_d,
        float* out_f_value
    )
    IL2CPP_REGISTER_METHOD(0x018AD980, app::AKRESULT__Enum, GetPosition, app::GameObject* in__game_object_i_d, app::AkTransform* out_r_position)
    IL2CPP_REGISTER_METHOD(0x018ADAE0, app::AKRESULT__Enum, GetListenerPosition, app::GameObject* in_u_index, app::AkTransform* out_r_position)
    IL2CPP_REGISTER_METHOD(
        0x018ADC40,
        app::AKRESULT__Enum,
        GetRTPCValue_1,
        uint32_t in_rtpc_i_d,
        app::GameObject* in_game_object_i_d,
        uint32_t in_playing_i_d,
        float* out_r_value,
        int32_t* io_r_value_type
    )
    IL2CPP_REGISTER_METHOD(
        0x018ADDC0,
        app::AKRESULT__Enum,
        GetRTPCValue_2,
        app::String* in_psz_rtpc_name,
        app::GameObject* in_game_object_i_d,
        uint32_t in_playing_i_d,
        float* out_r_value,
        int32_t* io_r_value_type
    )
    IL2CPP_REGISTER_METHOD(
        0x018ADF40,
        app::AKRESULT__Enum,
        GetSwitch_1,
        uint32_t in_switch_group,
        app::GameObject* in_game_object_i_d,
        uint32_t* out_r_switch_state
    )
    IL2CPP_REGISTER_METHOD(
        0x018AE0B0,
        app::AKRESULT__Enum,
        GetSwitch_2,
        app::String* in_pstr_switch_group_name,
        app::GameObject* in__game_obj,
        uint32_t* out_r_switch_state
    )
    IL2CPP_REGISTER_METHOD(0x018AE220, app::AKRESULT__Enum, GetState_1, uint32_t in_state_group, uint32_t* out_r_state)
    IL2CPP_REGISTER_METHOD(0x018AE350, app::AKRESULT__Enum, GetState_2, app::String* in_pstr_state_group_name, uint32_t* out_r_state)
    IL2CPP_REGISTER_METHOD(
        0x018AE480,
        app::AKRESULT__Enum,
        GetGameObjectAuxSendValues,
        app::GameObject* in_game_object_i_d,
        app::AkAuxSendArray* out_pa_aux_send_values,
        uint32_t* io_ru_num_send_values
    )
    IL2CPP_REGISTER_METHOD(
        0x018AE570,
        app::AKRESULT__Enum,
        GetGameObjectDryLevelValue,
        app::GameObject* in__emitter_i_d,
        app::GameObject* in__listener_i_d,
        float* out_rf_control_value
    )
    IL2CPP_REGISTER_METHOD(
        0x018AE6F0,
        app::AKRESULT__Enum,
        GetObjectObstructionAndOcclusion,
        app::GameObject* in__emitter_i_d,
        app::GameObject* in__listener_i_d,
        float* out_rf_obstruction_level,
        float* out_rf_occlusion_level
    )
    IL2CPP_REGISTER_METHOD(
        0x018AE880,
        app::AKRESULT__Enum,
        QueryAudioObjectIDs_1,
        uint32_t in_event_i_d,
        uint32_t* io_ru_num_items,
        app::AkObjectInfoArray* out_a_object_infos
    )
    IL2CPP_REGISTER_METHOD(
        0x018AE9D0,
        app::AKRESULT__Enum,
        QueryAudioObjectIDs_2,
        app::String* in_psz_event_name,
        uint32_t* io_ru_num_items,
        app::AkObjectInfoArray* out_a_object_infos
    )
    IL2CPP_REGISTER_METHOD(0x018AEB30, app::AKRESULT__Enum, GetPositioningInfo, uint32_t in__object_i_d, app::AkPositioningInfo* out_r_positioning_info)
    IL2CPP_REGISTER_METHOD(0x018AECC0, bool, GetIsGameObjectActive, app::GameObject* in__game_obj_id)
    IL2CPP_REGISTER_METHOD(0x018AEE10, float, GetMaxRadius, app::GameObject* in__game_obj_id)
    IL2CPP_REGISTER_METHOD(0x018AEF60, uint32_t, GetEventIDFromPlayingID, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(0x018AF080, uint64_t, GetGameObjectFromPlayingID, uint32_t in_playing_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018AF1A0,
        app::AKRESULT__Enum,
        GetPlayingIDsFromGameObject,
        app::GameObject* in__game_obj_id,
        uint32_t* io_ru_num_i_ds,
        app::UInt32__Array* out_a_playing_i_ds
    )
    IL2CPP_REGISTER_METHOD(0x018AF370, app::AKRESULT__Enum, GetCustomPropertyValue_1, uint32_t in__object_i_d, uint32_t in_u_prop_i_d, int32_t* out_i_value)
    IL2CPP_REGISTER_METHOD(0x018AF4B0, app::AKRESULT__Enum, GetCustomPropertyValue_2, uint32_t in__object_i_d, uint32_t in_u_prop_i_d, float* out_f_value)
    IL2CPP_REGISTER_METHOD(0x018AF5F0, void, AK_SPEAKER_SETUP_FIX_LEFT_TO_CENTER, uint32_t* io_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x018AF710, void, AK_SPEAKER_SETUP_FIX_REAR_TO_SIDE, uint32_t* io_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x018AF830, void, AK_SPEAKER_SETUP_CONVERT_TO_SUPPORTED, uint32_t* io_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x018AF950, uint8_t, ChannelMaskToNumChannels, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x018AFA70, uint32_t, ChannelMaskFromNumChannels, uint32_t in_u_num_channels)
    IL2CPP_REGISTER_METHOD(0x018AFB90, uint8_t, ChannelBitToIndex, uint32_t in_u_channel_bit, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x018AFCC0, bool, HasSurroundChannels, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x018AFDE0, bool, HasStrictlyOnePairOfSurroundChannels, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x018AFF00, bool, HasSideAndRearChannels, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x018B0020, bool, HasHeightChannels, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(0x018B0140, uint32_t, BackToSideChannels, uint32_t in_u_channel_mask)
    IL2CPP_REGISTER_METHOD(
        0x018B0260,
        uint32_t,
        StdChannelIndexToDisplayIndex,
        app::AkChannelOrdering__Enum in_e_ordering,
        uint32_t in_u_channel_mask,
        uint32_t in_u_channel_idx
    )
    IL2CPP_REGISTER_METHOD(0x018B03A0, float, get_kDefaultMaxPathLength, )
    IL2CPP_REGISTER_METHOD(0x018B04B0, uint32_t, get_kDefaultDiffractionMaxEdges, )
    IL2CPP_REGISTER_METHOD(0x018B05C0, uint32_t, get_kDefaultDiffractionMaxPaths, )
    IL2CPP_REGISTER_METHOD(0x018B06D0, float, get_kMaxDiffraction, )
    IL2CPP_REGISTER_METHOD(0x018B07E0, uint32_t, get_kListenerDiffractionMaxEdges, )
    IL2CPP_REGISTER_METHOD(0x018B08F0, uint32_t, get_kListenerDiffractionMaxPaths, )
    IL2CPP_REGISTER_METHOD(0x018B0A00, uint32_t, get_kPortalToPortalDiffractionMaxPaths, )
    IL2CPP_REGISTER_METHOD(0x018B0B10, void, set_g_SpatialAudioPoolId, int32_t value)
    IL2CPP_REGISTER_METHOD(0x018B0C30, int32_t, get_g_SpatialAudioPoolId, )
    IL2CPP_REGISTER_METHOD(0x018B0D40, int32_t, GetPoolID, )
    IL2CPP_REGISTER_METHOD(0x018B0E50, app::AKRESULT__Enum, RegisterEmitter, app::GameObject* in_game_object_i_d, app::AkEmitterSettings* in_settings)
    IL2CPP_REGISTER_METHOD(0x018B1010, app::AKRESULT__Enum, UnregisterEmitter, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018B1160,
        app::AKRESULT__Enum,
        SetEmitterAuxSendValues,
        app::GameObject* in_game_object_i_d,
        app::AkAuxSendArray* in_p_aux_sends,
        uint32_t in_u_num_aux
    )
    IL2CPP_REGISTER_METHOD(
        0x018B12E0,
        app::AKRESULT__Enum,
        SetImageSource_1,
        uint32_t in_src_i_d,
        app::AkImageSourceSettings* in_info,
        uint32_t in__aux_bus_i_d,
        uint64_t in_room_i_d,
        app::GameObject* in_game_object_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018B1470,
        app::AKRESULT__Enum,
        SetImageSource_2,
        uint32_t in_src_i_d,
        app::AkImageSourceSettings* in_info,
        uint32_t in__aux_bus_i_d,
        uint64_t in_room_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x018B15D0,
        app::AKRESULT__Enum,
        RemoveImageSource_1,
        uint32_t in_src_i_d,
        uint32_t in__aux_bus_i_d,
        app::GameObject* in_game_object_i_d
    )
    IL2CPP_REGISTER_METHOD(0x018B1730, app::AKRESULT__Enum, RemoveImageSource_2, uint32_t in_src_i_d, uint32_t in__aux_bus_i_d)
    IL2CPP_REGISTER_METHOD(0x018B1860, app::AKRESULT__Enum, RemoveGeometry, uint64_t in__set_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018B1980,
        app::AKRESULT__Enum,
        QueryReflectionPaths,
        app::GameObject* in_game_object_i_d,
        app::AkVector* out_listener_pos,
        app::AkVector* out_emitter_pos,
        app::AkReflectionPathInfoArray* out_a_paths,
        uint32_t* io_u_array_size
    )
    IL2CPP_REGISTER_METHOD(0x018B1B30, app::AKRESULT__Enum, RemoveRoom, uint64_t in__room_i_d)
    IL2CPP_REGISTER_METHOD(0x018B1C50, app::AKRESULT__Enum, RemovePortal, uint64_t in__portal_i_d)
    IL2CPP_REGISTER_METHOD(0x018B1D70, app::AKRESULT__Enum, SetGameObjectInRoom, app::GameObject* in_game_object_i_d, uint64_t in__current_room_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018B1ED0,
        app::AKRESULT__Enum,
        SetEmitterObstructionAndOcclusion,
        app::GameObject* in_game_object_i_d,
        float in_f_obstruction,
        float in_f_occlusion
    )
    IL2CPP_REGISTER_METHOD(
        0x018B2040,
        app::AKRESULT__Enum,
        SetPortalObstructionAndOcclusion,
        uint64_t in__portal_i_d,
        float in_f_obstruction,
        float in_f_occlusion
    )
    IL2CPP_REGISTER_METHOD(0x018B2180, app::AKRESULT__Enum, QueryWetDiffraction, uint64_t in_portal, float* out_wet_diffraction)
    IL2CPP_REGISTER_METHOD(0x018B22B0, uint32_t, GetDeviceIDFromName, app::String* in_sz_token)
    IL2CPP_REGISTER_METHOD(
        0x018B23E0,
        app::String*,
        GetWindowsDeviceName_1,
        int32_t index,
        uint32_t* out_u_device_i_d,
        app::AkAudioDeviceState__Enum u_device_state_mask
    )
    IL2CPP_REGISTER_METHOD(0x018B2550, app::String*, GetWindowsDeviceName_2, int32_t index, uint32_t* out_u_device_i_d)
    IL2CPP_REGISTER_METHOD(0x018B26A0, uint32_t, GetWindowsDeviceCount_1, app::AkAudioDeviceState__Enum u_device_state_mask)
    IL2CPP_REGISTER_METHOD(0x018B27C0, uint32_t, GetWindowsDeviceCount_2, )
    IL2CPP_REGISTER_METHOD(0x018B28D0, void, SetErrorLogger_1, app::AkLogger_ErrorLoggerInteropDelegate* logger)
    IL2CPP_REGISTER_METHOD(0x018B2A00, void, SetErrorLogger_2, )
    IL2CPP_REGISTER_METHOD(
        0x018B2B10,
        void,
        SetAudioInputCallbacks,
        app::AkAudioInputManager_AudioSamplesInteropDelegate* get_audio_samples,
        app::AkAudioInputManager_AudioFormatInteropDelegate* get_audio_format
    )
    IL2CPP_REGISTER_METHOD(0x018B2C50, app::AKRESULT__Enum, Init, app::AkInitializationSettings* settings)
    IL2CPP_REGISTER_METHOD(0x018B2DD0, app::AKRESULT__Enum, InitSpatialAudio, app::AkSpatialAudioInitSettings* settings)
    IL2CPP_REGISTER_METHOD(0x018B2F50, app::AKRESULT__Enum, InitCommunication, app::AkCommunicationSettings* settings)
    IL2CPP_REGISTER_METHOD(0x018B30D0, void, Term, )
    IL2CPP_REGISTER_METHOD(0x018B31E0, app::AKRESULT__Enum, RegisterGameObjInternal, app::GameObject* in__game_obj)
    IL2CPP_REGISTER_METHOD(0x018B32B0, app::AKRESULT__Enum, UnregisterGameObjInternal, app::GameObject* in__game_obj)
    IL2CPP_REGISTER_METHOD(0x018B3380, app::AKRESULT__Enum, RegisterGameObjInternal_WithName, app::GameObject* in__game_obj, app::String* in_psz_obj_name)
    IL2CPP_REGISTER_METHOD(0x018B3460, app::AKRESULT__Enum, SetBasePath, app::String* in_psz_base_path())
    IL2CPP_REGISTER_METHOD(0x018B3590, app::AKRESULT__Enum, SetCurrentLanguage, app::String* in_psz_audio_src_path)
    IL2CPP_REGISTER_METHOD(
        0x018B36C0,
        app::AKRESULT__Enum,
        LoadFilePackage,
        app::String* in_psz_file_package_name,
        uint32_t* out_u_package_i_d,
        int32_t in_mem_pool_i_d
    )
    IL2CPP_REGISTER_METHOD(0x018B3810, app::AKRESULT__Enum, AddBasePath, app::String* in_psz_base_path())
    IL2CPP_REGISTER_METHOD(0x018B3940, app::AKRESULT__Enum, SetGameName, app::String* in__game_name)
    IL2CPP_REGISTER_METHOD(0x018B3A70, app::AKRESULT__Enum, SetDecodedBankPath, app::String* in__decoded_path)
    IL2CPP_REGISTER_METHOD(0x018B3BA0, app::AKRESULT__Enum, LoadAndDecodeBank, app::String* in_psz_string, bool in_b_save_decoded_bank, uint32_t* out_bank_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018B3CF0,
        app::AKRESULT__Enum,
        LoadAndDecodeBankFromMemory,
        void* in__bank_data,
        uint32_t in__bank_data_size,
        bool in_b_save_decoded_bank,
        app::String* in__decoded_bank_name,
        bool in_b_is_language_specific,
        uint32_t* out_bank_i_d
    )
    IL2CPP_REGISTER_METHOD(0x018B3E60, app::String*, GetCurrentLanguage, )
    IL2CPP_REGISTER_METHOD(0x018B3F90, app::AKRESULT__Enum, UnloadFilePackage, uint32_t in_u_package_i_d)
    IL2CPP_REGISTER_METHOD(0x018B40B0, app::AKRESULT__Enum, UnloadAllFilePackages, )
    IL2CPP_REGISTER_METHOD(
        0x018B41C0,
        app::AKRESULT__Enum,
        SetObjectPosition_1,
        app::GameObject* in__game_object_i_d,
        float pos_x,
        float pos_y,
        float pos_z,
        float front_x,
        float front_y,
        float front_z,
        float top_x,
        float top_y,
        float top_z
    )
    IL2CPP_REGISTER_METHOD(
        0x018B42D0,
        app::AKRESULT__Enum,
        SetObjectPosition_2,
        uint64_t in__game_object_i_d,
        float pos_x,
        float pos_y,
        float pos_z,
        float front_x,
        float front_y,
        float front_z,
        float top_x,
        float top_y,
        float top_z
    )
    IL2CPP_REGISTER_METHOD(
        0x018B43B0,
        app::AKRESULT__Enum,
        GetSourceMultiplePlayPositions,
        uint32_t in__playing_i_d,
        app::UInt32__Array* out_audio_node_i_d,
        app::UInt32__Array* out_media_i_d,
        app::Int32__Array* out_ms_time,
        uint32_t* io_pc_positions,
        bool in_b_extrapolate
    )
    IL2CPP_REGISTER_METHOD(
        0x018B44A0,
        app::AKRESULT__Enum,
        SetListeners,
        app::GameObject* in_emitter_game_obj,
        app::UInt64__Array* in_p_listener_game_objs,
        uint32_t in_u_num_listeners
    )
    IL2CPP_REGISTER_METHOD(0x018B4610, app::AKRESULT__Enum, SetDefaultListeners, app::UInt64__Array* in_p_listener_objs, uint32_t in_u_num_listeners)
    IL2CPP_REGISTER_METHOD(
        0x018B4740,
        app::AKRESULT__Enum,
        AddOutput,
        app::AkOutputSettings* in__settings,
        uint64_t* out_p_device_i_d,
        app::UInt64__Array* in_p_listener_i_ds,
        uint32_t in_u_num_listeners
    )
    IL2CPP_REGISTER_METHOD(0x018B48A0, void, GetDefaultStreamSettings, app::AkStreamMgrSettings* out_settings)
    IL2CPP_REGISTER_METHOD(0x018B49D0, void, GetDefaultDeviceSettings, app::AkDeviceSettings* out_settings)
    IL2CPP_REGISTER_METHOD(0x018B4B00, void, GetDefaultMusicSettings, app::AkMusicSettings* out_settings)
    IL2CPP_REGISTER_METHOD(0x018B4C30, void, GetDefaultInitSettings, app::AkInitSettings* out_settings)
    IL2CPP_REGISTER_METHOD(0x018B4D60, void, GetDefaultPlatformInitSettings, app::AkPlatformInitSettings* out_settings)
    IL2CPP_REGISTER_METHOD(0x018B4E90, uint32_t, GetMajorMinorVersion, )
    IL2CPP_REGISTER_METHOD(0x018B4FA0, uint32_t, GetSubminorBuildVersion, )
    IL2CPP_REGISTER_METHOD(
        0x018B50B0,
        app::AKRESULT__Enum,
        QueryIndirectPaths,
        app::GameObject* in_game_object_i_d,
        app::AkPathParams* arg1,
        app::AkReflectionPathInfoArray* paths,
        uint32_t num_paths
    )
    IL2CPP_REGISTER_METHOD(
        0x018B5250,
        app::AKRESULT__Enum,
        QueryDiffractionPaths,
        app::GameObject* in_game_object_i_d,
        app::AkPathParams* arg1,
        app::AkDiffractionPathInfoArray* paths,
        uint32_t num_paths
    )
    IL2CPP_REGISTER_METHOD(
        0x018B53F0,
        app::AKRESULT__Enum,
        SetRoomPortal,
        uint64_t in__portal_i_d,
        app::AkTransform* transform,
        app::AkVector* extent,
        bool b_enabled,
        uint64_t front_room,
        uint64_t back_room
    )
    IL2CPP_REGISTER_METHOD(0x018B5560, app::AKRESULT__Enum, SetRoom, uint64_t in__room_i_d, app::AkRoomParams* in_room_params, app::String* in_p_name)
    IL2CPP_REGISTER_METHOD(0x018B57C0, app::AKRESULT__Enum, RegisterSpatialAudioListener, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(0x018B5910, app::AKRESULT__Enum, UnregisterSpatialAudioListener, app::GameObject* in_game_object_i_d)
    IL2CPP_REGISTER_METHOD(
        0x018B5A60,
        app::AKRESULT__Enum,
        SetGeometry,
        uint64_t in__geom_set_i_d,
        app::AkTriangleArray* triangles,
        uint32_t num_triangles,
        app::AkVertexArray* vertices,
        uint32_t num_vertices,
        app::AkAcousticSurfaceArray* surfaces,
        uint32_t num_surfaces,
        uint64_t room_i_d,
        bool enable_diffraction,
        bool enable_diffraction_on_boundary_edges
    )
    IL2CPP_REGISTER_METHOD(0x018B5C20, app::String*, StringFromIntPtrString, void* ptr)
    IL2CPP_REGISTER_METHOD(0x018B5CE0, app::String*, StringFromIntPtrWString, void* ptr)
    IL2CPP_REGISTER_METHOD(0x018B5DD0, app::String*, StringFromIntPtrOSString, void* ptr)
    IL2CPP_REGISTER_METHOD(0x018B5E70, uint64_t, InternalGameObjectHash, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x018B5F40, void, set_GameObjectHash, app::AkSoundEngine_GameObjectHashFunction* value)
    IL2CPP_REGISTER_METHOD(0x018B60D0, uint64_t, GetAkGameObjectID, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x018B6190, app::AKRESULT__Enum, RegisterGameObj_1, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x018B6280, app::AKRESULT__Enum, RegisterGameObj_2, uint64_t game_object)
    IL2CPP_REGISTER_METHOD(0x018B6320, app::AKRESULT__Enum, RegisterGameObj_3, app::GameObject* game_object, app::String* name)
    IL2CPP_REGISTER_METHOD(0x018B6410, app::AKRESULT__Enum, RegisterGameObj_4, uint64_t game_object, app::String* name)
    IL2CPP_REGISTER_METHOD(0x018B64C0, app::AKRESULT__Enum, UnregisterGameObj_1, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x018B6650, app::AKRESULT__Enum, UnregisterGameObj_2, uint64_t game_object)
    IL2CPP_REGISTER_METHOD(0x018B66F0, app::AKRESULT__Enum, SetObjectPosition_3, app::GameObject* game_object, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(
        0x018B69D0,
        app::AKRESULT__Enum,
        SetObjectPosition_4,
        app::GameObject* game_object,
        app::Vector3 position,
        app::Vector3 forward,
        app::Vector3 up
    )
    IL2CPP_REGISTER_METHOD(
        0x018B6B60,
        uint32_t,
        PostEvent_11,
        uint32_t event_id,
        app::GameObject* game_object,
        uint32_t flags,
        app::AkCallbackManager_EventCallback* callback,
        app::Object* cookie,
        uint32_t num_sources,
        app::AkExternalSourceInfo* external_sources,
        uint32_t playing_id
    )
    IL2CPP_REGISTER_METHOD(
        0x018B6D80,
        uint32_t,
        PostEvent_12,
        uint32_t event_id,
        app::GameObject* game_object,
        uint32_t flags,
        app::AkCallbackManager_EventCallback* callback,
        app::Object* cookie,
        uint32_t num_sources,
        app::AkExternalSourceInfo* external_sources
    )
    IL2CPP_REGISTER_METHOD(
        0x018B6FF0,
        uint32_t,
        PostEvent_13,
        app::String* event_name,
        app::GameObject* game_object,
        uint32_t flags,
        app::AkCallbackManager_EventCallback* callback,
        app::Object* cookie,
        uint32_t num_sources,
        app::AkExternalSourceInfo* external_sources,
        uint32_t playing_id
    )
    IL2CPP_REGISTER_METHOD(
        0x018B7210,
        uint32_t,
        PostEvent_14,
        app::String* event_name,
        app::GameObject* game_object,
        uint32_t flags,
        app::AkCallbackManager_EventCallback* callback,
        app::Object* cookie,
        uint32_t num_sources,
        app::AkExternalSourceInfo* external_sources
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PreGameObjectAPICall, app::GameObject* game_object, uint64_t id)
    IL2CPP_REGISTER_METHOD(0x018B7480, void, PostRegisterGameObjUserHook, app::AKRESULT__Enum result, app::GameObject* game_object, uint64_t id)
    IL2CPP_REGISTER_METHOD(0x018B7560, void, PostUnregisterGameObjUserHook, app::AKRESULT__Enum result, app::GameObject* game_object, uint64_t id)
    IL2CPP_REGISTER_METHOD(0x018B7630, bool, IsInRegisteredList, uint64_t id)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AkSoundEngine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018B76F0, void, cctor, )
} // namespace app::classes::AkSoundEngine
