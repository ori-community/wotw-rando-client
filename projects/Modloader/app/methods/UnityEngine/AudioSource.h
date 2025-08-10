#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/AudioMixerGroup.h>
#include <Modloader/app/structs/AudioRolloffMode__Enum.h>
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/AudioSourceCurveType__Enum.h>
#include <Modloader/app/structs/AudioSourceExtension.h>
#include <Modloader/app/structs/AudioVelocityUpdateMode__Enum.h>
#include <Modloader/app/structs/FFTWindow__Enum.h>
#include <Modloader/app/structs/PropertyName.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::AudioSource {
    IL2CPP_REGISTER_METHOD(0x03141820, void, ctor, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141840, float, get_volume, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141890, void, set_volume, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x031418F0, float, get_pitch, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141940, void, set_pitch, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x031419A0, float, get_time, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031419F0, void, set_time, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03141A50, int32_t, get_timeSamples, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141AA0, void, set_timeSamples, app::AudioSource* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x03141B00, app::AudioClip*, get_clip, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141B50, void, set_clip, app::AudioSource* this_ptr, app::AudioClip* value)
    IL2CPP_REGISTER_METHOD(0x03141BB0, app::AudioMixerGroup*, get_outputAudioMixerGroup, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141C00, void, set_outputAudioMixerGroup, app::AudioSource* this_ptr, app::AudioMixerGroup* value)
    IL2CPP_REGISTER_METHOD(0x03141C60, void, Play_1, app::AudioSource* this_ptr, uint64_t delay)
    IL2CPP_REGISTER_METHOD(0x03141CC0, void, Play_2, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141D20, void, PlayDelayed, app::AudioSource* this_ptr, float delay)
    IL2CPP_REGISTER_METHOD(0x03141D80, void, PlayScheduled, app::AudioSource* this_ptr, double time)
    IL2CPP_REGISTER_METHOD(0x03141DE0, void, SetScheduledStartTime, app::AudioSource* this_ptr, double time)
    IL2CPP_REGISTER_METHOD(0x03141E40, void, SetScheduledEndTime, app::AudioSource* this_ptr, double time)
    IL2CPP_REGISTER_METHOD(0x03141EA0, void, Stop, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141EF0, void, Pause, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141EF0, void, INTERNAL_CALL_Pause, app::AudioSource* self)
    IL2CPP_REGISTER_METHOD(0x03141F40, void, UnPause, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141F40, void, INTERNAL_CALL_UnPause, app::AudioSource* self)
    IL2CPP_REGISTER_METHOD(0x03141F90, bool, get_isPlaying, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03141FE0, bool, get_isVirtual, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142030, void, PlayOneShot_1, app::AudioSource* this_ptr, app::AudioClip* clip)
    IL2CPP_REGISTER_METHOD(0x03142040, void, PlayOneShot_2, app::AudioSource* this_ptr, app::AudioClip* clip, float volume_scale)
    IL2CPP_REGISTER_METHOD(0x03142200, void, PlayOneShotHelper_1, app::AudioSource* this_ptr, app::AudioClip* clip, float volume_scale)
    IL2CPP_REGISTER_METHOD(0x03142270, void, PlayOneShotHelper_2, app::AudioSource* this_ptr, app::AudioClip* clip)
    IL2CPP_REGISTER_METHOD(0x03142280, void, PlayClipAtPoint_1, app::AudioClip* clip, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x031422B0, void, PlayClipAtPoint_2, app::AudioClip* clip, app::Vector3 position, float volume)
    IL2CPP_REGISTER_METHOD(0x03142820, bool, get_loop, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142870, void, set_loop, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031428D0, bool, get_ignoreListenerVolume, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142920, void, set_ignoreListenerVolume, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03142980, bool, get_playOnAwake, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031429D0, void, set_playOnAwake, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03142A30, bool, get_ignoreListenerPause, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142A80, void, set_ignoreListenerPause, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03142AE0, app::AudioVelocityUpdateMode__Enum, get_velocityUpdateMode, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142B30, void, set_velocityUpdateMode, app::AudioSource* this_ptr, app::AudioVelocityUpdateMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x03142B90, float, get_panStereo, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142BE0, void, set_panStereo, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03142C40, float, get_spatialBlend, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142C90, void, set_spatialBlend, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03142CF0, bool, get_spatializeInternal, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142D40, void, set_spatializeInternal, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03142CF0, bool, get_spatialize, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142DA0, void, set_spatialize, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03142F50, bool, get_spatializePostEffects, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03142FA0, void, set_spatializePostEffects, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03143000, void, SetCustomCurve, app::AudioSource* this_ptr, app::AudioSourceCurveType__Enum type, app::AnimationCurve* curve)
    IL2CPP_REGISTER_METHOD(0x03143070, app::AnimationCurve*, GetCustomCurve, app::AudioSource* this_ptr, app::AudioSourceCurveType__Enum type)
    IL2CPP_REGISTER_METHOD(0x031430D0, float, get_reverbZoneMix, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03143120, void, set_reverbZoneMix, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03143180, bool, get_bypassEffects, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031431D0, void, set_bypassEffects, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03143230, bool, get_bypassListenerEffects, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03143280, void, set_bypassListenerEffects, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031432E0, bool, get_bypassReverbZones, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03143330, void, set_bypassReverbZones, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03143390, float, get_dopplerLevel, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031433E0, void, set_dopplerLevel, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03143440, float, get_spread, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03143490, void, set_spread, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x031434F0, int32_t, get_priority, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03143540, void, set_priority, app::AudioSource* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x031435A0, bool, get_mute, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031435F0, void, set_mute, app::AudioSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03143650, float, get_minDistance, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031436A0, void, set_minDistance, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03143700, float, get_maxDistance, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03143750, void, set_maxDistance, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x031437B0, app::AudioRolloffMode__Enum, get_rolloffMode, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03143800, void, set_rolloffMode, app::AudioSource* this_ptr, app::AudioRolloffMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x03143860, void, GetOutputDataHelper, app::AudioSource* this_ptr, app::Single__Array* samples, int32_t channel)
    IL2CPP_REGISTER_METHOD(0x031438D0, app::Single__Array*, GetOutputData_1, app::AudioSource* this_ptr, int32_t num_samples, int32_t channel)
    IL2CPP_REGISTER_METHOD(0x03143980, void, GetOutputData_2, app::AudioSource* this_ptr, app::Single__Array* samples, int32_t channel)
    IL2CPP_REGISTER_METHOD(
        0x03143990,
        void,
        GetSpectrumDataHelper,
        app::AudioSource* this_ptr,
        app::Single__Array* samples,
        int32_t channel,
        app::FFTWindow__Enum window
    )
    IL2CPP_REGISTER_METHOD(
        0x03143A10,
        app::Single__Array*,
        GetSpectrumData_1,
        app::AudioSource* this_ptr,
        int32_t num_samples,
        int32_t channel,
        app::FFTWindow__Enum window
    )
    IL2CPP_REGISTER_METHOD(
        0x03143AE0,
        void,
        GetSpectrumData_2,
        app::AudioSource* this_ptr,
        app::Single__Array* samples,
        int32_t channel,
        app::FFTWindow__Enum window
    )
    IL2CPP_REGISTER_METHOD(0x03143AF0, int32_t, GetNumExtensionProperties, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03143B40, int32_t, GetNumExtensionPropertiesForThisExtension, app::AudioSource* this_ptr, app::PropertyName extension_name)
    IL2CPP_REGISTER_METHOD(
        0x03143BA0,
        int32_t,
        INTERNAL_CALL_GetNumExtensionPropertiesForThisExtension,
        app::AudioSource* self,
        app::PropertyName* extension_name
    )
    IL2CPP_REGISTER_METHOD(0x03143C00, app::PropertyName, ReadExtensionName, app::AudioSource* this_ptr, int32_t source_index)
    IL2CPP_REGISTER_METHOD(0x03143C70, void, INTERNAL_CALL_ReadExtensionName, app::AudioSource* self, int32_t source_index, app::PropertyName* value)
    IL2CPP_REGISTER_METHOD(0x03143CE0, app::PropertyName, ReadExtensionPropertyName, app::AudioSource* this_ptr, int32_t source_index)
    IL2CPP_REGISTER_METHOD(0x03143D50, void, INTERNAL_CALL_ReadExtensionPropertyName, app::AudioSource* self, int32_t source_index, app::PropertyName* value)
    IL2CPP_REGISTER_METHOD(0x03143DC0, float, ReadExtensionPropertyValue, app::AudioSource* this_ptr, int32_t source_index)
    IL2CPP_REGISTER_METHOD(
        0x03143E20,
        bool,
        ReadExtensionProperty,
        app::AudioSource* this_ptr,
        app::PropertyName extension_name,
        app::PropertyName property_name,
        float* property_value
    )
    IL2CPP_REGISTER_METHOD(
        0x03143EA0,
        bool,
        INTERNAL_CALL_ReadExtensionProperty,
        app::AudioSource* self,
        app::PropertyName* extension_name,
        app::PropertyName* property_name,
        float* property_value
    )
    IL2CPP_REGISTER_METHOD(0x03143F20, void, ClearExtensionProperties, app::AudioSource* this_ptr, app::PropertyName extension_name)
    IL2CPP_REGISTER_METHOD(0x03143F80, void, INTERNAL_CALL_ClearExtensionProperties, app::AudioSource* self, app::PropertyName* extension_name)
    IL2CPP_REGISTER_METHOD(0x03143FE0, app::AudioSourceExtension*, AddSpatializerExtension, app::AudioSource* this_ptr, app::Type* extension_type)
    IL2CPP_REGISTER_METHOD(0x03144130, app::AudioSourceExtension*, AddAmbisonicExtension, app::AudioSource* this_ptr, app::Type* extension_type)
    IL2CPP_REGISTER_METHOD(0x03144280, float, get_minVolume, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031442D0, void, set_minVolume, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03144330, float, get_maxVolume, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03144380, void, set_maxVolume, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x031443E0, float, get_rolloffFactor, app::AudioSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03144430, void, set_rolloffFactor, app::AudioSource* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03144490, bool, SetSpatializerFloat, app::AudioSource* this_ptr, int32_t index, float value)
    IL2CPP_REGISTER_METHOD(0x03144500, bool, GetSpatializerFloat, app::AudioSource* this_ptr, int32_t index, float* value)
    IL2CPP_REGISTER_METHOD(0x03144570, bool, SetAmbisonicDecoderFloat, app::AudioSource* this_ptr, int32_t index, float value)
    IL2CPP_REGISTER_METHOD(0x031445E0, bool, GetAmbisonicDecoderFloat, app::AudioSource* this_ptr, int32_t index, float* value)
} // namespace app::classes::UnityEngine::AudioSource
