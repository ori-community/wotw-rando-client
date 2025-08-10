#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkAudioInputManager_AudioFormatInteropDelegate.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesInteropDelegate.h>
#include <Modloader/app/structs/AkLogger_ErrorLoggerInteropDelegate.h>
#include <Modloader/app/structs/AkSoundEnginePINVOKE.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>

namespace app::classes::AkSoundEnginePINVOKE {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x018B7B10, uint32_t, CSharp_AK_SOUNDBANK_VERSION_get, )
    IL2CPP_REGISTER_METHOD(0x018B7BA0, void, CSharp_AkAudioSettings_uNumSamplesPerFrame_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018B7C50, uint32_t, CSharp_AkAudioSettings_uNumSamplesPerFrame_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B7CF0, void, CSharp_AkAudioSettings_uNumSamplesPerSecond_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018B7DA0, uint32_t, CSharp_AkAudioSettings_uNumSamplesPerSecond_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B7E40, void*, CSharp_new_AkAudioSettings, )
    IL2CPP_REGISTER_METHOD(0x018B7ED0, void, CSharp_delete_AkAudioSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B7F70, void, CSharp_AkVector_Zero, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B8010, void, CSharp_AkVector_X_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018B80C0, float, CSharp_AkVector_X_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B8160, void, CSharp_AkVector_Y_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018B8210, float, CSharp_AkVector_Y_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B82B0, void, CSharp_AkVector_Z_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018B8360, float, CSharp_AkVector_Z_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B8400, void*, CSharp_new_AkVector, )
    IL2CPP_REGISTER_METHOD(0x018B8490, void, CSharp_delete_AkVector, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B8530, void*, CSharp_AkTransform_Position, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B85D0, void*, CSharp_AkTransform_OrientationFront, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B8670, void*, CSharp_AkTransform_OrientationTop, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B8710, void, CSharp_AkTransform_Set__SWIG_0, void* jarg1, void* jarg2, void* jarg3, void* jarg4)
    IL2CPP_REGISTER_METHOD(
        0x018B87D0,
        void,
        CSharp_AkTransform_Set__SWIG_1,
        void* jarg1,
        float jarg2,
        float jarg3,
        float jarg4,
        float jarg5,
        float jarg6,
        float jarg7,
        float jarg8,
        float jarg9,
        float jarg10
    )
    IL2CPP_REGISTER_METHOD(0x018B88A0, void, CSharp_AkTransform_SetPosition__SWIG_0, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018B8950, void, CSharp_AkTransform_SetPosition__SWIG_1, void* jarg1, float jarg2, float jarg3, float jarg4)
    IL2CPP_REGISTER_METHOD(0x018B8A20, void, CSharp_AkTransform_SetOrientation__SWIG_0, void* jarg1, void* jarg2, void* jarg3)
    IL2CPP_REGISTER_METHOD(
        0x018B8AD0,
        void,
        CSharp_AkTransform_SetOrientation__SWIG_1,
        void* jarg1,
        float jarg2,
        float jarg3,
        float jarg4,
        float jarg5,
        float jarg6,
        float jarg7
    )
    IL2CPP_REGISTER_METHOD(0x018B8BB0, void*, CSharp_new_AkTransform, )
    IL2CPP_REGISTER_METHOD(0x018B8C40, void, CSharp_delete_AkTransform, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B8CE0, void, CSharp_AkObstructionOcclusionValues_occlusion_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018B8D90, float, CSharp_AkObstructionOcclusionValues_occlusion_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B8E30, void, CSharp_AkObstructionOcclusionValues_obstruction_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018B8EE0, float, CSharp_AkObstructionOcclusionValues_obstruction_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B8F80, void, CSharp_AkObstructionOcclusionValues_Clear, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B9020, int32_t, CSharp_AkObstructionOcclusionValues_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018B90B0, void, CSharp_AkObstructionOcclusionValues_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018B9160, void*, CSharp_new_AkObstructionOcclusionValues, )
    IL2CPP_REGISTER_METHOD(0x018B91F0, void, CSharp_delete_AkObstructionOcclusionValues, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B9290, void, CSharp_AkChannelEmitter_position_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018B9340, void*, CSharp_AkChannelEmitter_position_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B93E0, void, CSharp_AkChannelEmitter_uInputChannels_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018B9490, uint32_t, CSharp_AkChannelEmitter_uInputChannels_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B9530, void, CSharp_delete_AkChannelEmitter, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B95D0, void, CSharp_AkAuxSendValue_listenerID_set, void* jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018B9680, uint64_t, CSharp_AkAuxSendValue_listenerID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B9720, void, CSharp_AkAuxSendValue_auxBusID_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018B97D0, uint32_t, CSharp_AkAuxSendValue_auxBusID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B9870, void, CSharp_AkAuxSendValue_fControlValue_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018B9920, float, CSharp_AkAuxSendValue_fControlValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B99C0, void, CSharp_AkAuxSendValue_Set, void* jarg1, uint64_t jarg2, uint32_t jarg3, float jarg4)
    IL2CPP_REGISTER_METHOD(0x018B9A80, bool, CSharp_AkAuxSendValue_IsSame, void* jarg1, uint64_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018B9B40, int32_t, CSharp_AkAuxSendValue_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018B9BD0, void, CSharp_delete_AkAuxSendValue, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B9C70, void*, CSharp_new_AkRamp__SWIG_0, )
    IL2CPP_REGISTER_METHOD(0x018B9D00, void*, CSharp_new_AkRamp__SWIG_1, float jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018B9DB0, void, CSharp_AkRamp_fPrev_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018B9E60, float, CSharp_AkRamp_fPrev_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018B9F00, void, CSharp_AkRamp_fNext_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018B9FB0, float, CSharp_AkRamp_fNext_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BA050, void, CSharp_delete_AkRamp, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BA0F0, uint16_t, CSharp_AK_INT_get, )
    IL2CPP_REGISTER_METHOD(0x018BA180, uint16_t, CSharp_AK_FLOAT_get, )
    IL2CPP_REGISTER_METHOD(0x018BA210, uint8_t, CSharp_AK_INTERLEAVED_get, )
    IL2CPP_REGISTER_METHOD(0x018BA2A0, uint8_t, CSharp_AK_NONINTERLEAVED_get, )
    IL2CPP_REGISTER_METHOD(0x018BA330, uint32_t, CSharp_AK_LE_NATIVE_BITSPERSAMPLE_get, )
    IL2CPP_REGISTER_METHOD(0x018BA3C0, uint32_t, CSharp_AK_LE_NATIVE_SAMPLETYPE_get, )
    IL2CPP_REGISTER_METHOD(0x018BA450, uint32_t, CSharp_AK_LE_NATIVE_INTERLEAVE_get, )
    IL2CPP_REGISTER_METHOD(0x018BA4E0, void, CSharp_AkAudioFormat_uSampleRate_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BA590, uint32_t, CSharp_AkAudioFormat_uSampleRate_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BA630, void, CSharp_AkAudioFormat_channelConfig_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BA6E0, void*, CSharp_AkAudioFormat_channelConfig_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BA780, void, CSharp_AkAudioFormat_uBitsPerSample_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BA830, uint32_t, CSharp_AkAudioFormat_uBitsPerSample_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BA8D0, void, CSharp_AkAudioFormat_uBlockAlign_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BA980, uint32_t, CSharp_AkAudioFormat_uBlockAlign_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BAA20, void, CSharp_AkAudioFormat_uTypeID_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BAAD0, uint32_t, CSharp_AkAudioFormat_uTypeID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BAB70, void, CSharp_AkAudioFormat_uInterleaveID_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BAC20, uint32_t, CSharp_AkAudioFormat_uInterleaveID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BACC0, uint32_t, CSharp_AkAudioFormat_GetNumChannels, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BAD60, uint32_t, CSharp_AkAudioFormat_GetBitsPerSample, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BAE00, uint32_t, CSharp_AkAudioFormat_GetBlockAlign, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BAEA0, uint32_t, CSharp_AkAudioFormat_GetTypeID, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BAF40, uint32_t, CSharp_AkAudioFormat_GetInterleaveID, void* jarg1)
    IL2CPP_REGISTER_METHOD(
        0x018BAFE0,
        void,
        CSharp_AkAudioFormat_SetAll,
        void* jarg1,
        uint32_t jarg2,
        void* jarg3,
        uint32_t jarg4,
        uint32_t jarg5,
        uint32_t jarg6,
        uint32_t jarg7
    )
    IL2CPP_REGISTER_METHOD(0x018BB0A0, bool, CSharp_AkAudioFormat_IsChannelConfigSupported, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BB140, void*, CSharp_new_AkAudioFormat, )
    IL2CPP_REGISTER_METHOD(0x018BB1D0, void, CSharp_delete_AkAudioFormat, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BB270, void, CSharp_AkIterator_pItem_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BB320, void*, CSharp_AkIterator_pItem_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BB3C0, void*, CSharp_AkIterator_NextIter, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BB460, void*, CSharp_AkIterator_PrevIter, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BB500, void*, CSharp_AkIterator_GetItem, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BB5A0, bool, CSharp_AkIterator_IsEqualTo, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BB650, bool, CSharp_AkIterator_IsDifferentFrom, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BB700, void*, CSharp_new_AkIterator, )
    IL2CPP_REGISTER_METHOD(0x018BB790, void, CSharp_delete_AkIterator, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BB830, int32_t, CSharp__ArrayPoolDefault_Get, )
    IL2CPP_REGISTER_METHOD(0x018BB8C0, void*, CSharp_new__ArrayPoolDefault, )
    IL2CPP_REGISTER_METHOD(0x018BB950, void, CSharp_delete__ArrayPoolDefault, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BB9F0, int32_t, CSharp__ArrayPoolLEngineDefault_Get, )
    IL2CPP_REGISTER_METHOD(0x018BBA80, void*, CSharp_new__ArrayPoolLEngineDefault, )
    IL2CPP_REGISTER_METHOD(0x018BBB10, void, CSharp_delete__ArrayPoolLEngineDefault, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BBBB0, void*, CSharp_new_AkPlaylistItem__SWIG_0, )
    IL2CPP_REGISTER_METHOD(0x018BBC40, void*, CSharp_new_AkPlaylistItem__SWIG_1, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BBCE0, void, CSharp_delete_AkPlaylistItem, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BBD80, void*, CSharp_AkPlaylistItem_Assign, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BBE30, bool, CSharp_AkPlaylistItem_IsEqualTo, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BBEE0, int32_t, CSharp_AkPlaylistItem_SetExternalSources, void* jarg1, uint32_t jarg2, void* jarg3)
    IL2CPP_REGISTER_METHOD(0x018BBF90, void, CSharp_AkPlaylistItem_audioNodeID_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BC040, uint32_t, CSharp_AkPlaylistItem_audioNodeID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BC0E0, void, CSharp_AkPlaylistItem_msDelay_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BC190, int32_t, CSharp_AkPlaylistItem_msDelay_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BC230, void, CSharp_AkPlaylistItem_pCustomInfo_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BC2E0, void*, CSharp_AkPlaylistItem_pCustomInfo_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BC380, void*, CSharp_new_AkPlaylistArray, )
    IL2CPP_REGISTER_METHOD(0x018BC410, void, CSharp_delete_AkPlaylistArray, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BC4B0, void*, CSharp_AkPlaylistArray_Begin, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BC550, void*, CSharp_AkPlaylistArray_End, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BC5F0, void*, CSharp_AkPlaylistArray_FindEx, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BC6A0, void*, CSharp_AkPlaylistArray_Erase__SWIG_0, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BC750, void, CSharp_AkPlaylistArray_Erase__SWIG_1, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BC800, void*, CSharp_AkPlaylistArray_EraseSwap, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BC8B0, int32_t, CSharp_AkPlaylistArray_Reserve, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BC960, uint32_t, CSharp_AkPlaylistArray_Reserved, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BCA00, void, CSharp_AkPlaylistArray_Term, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BCAA0, uint32_t, CSharp_AkPlaylistArray_Length, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BCB40, void*, CSharp_AkPlaylistArray_Data, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BCBE0, bool, CSharp_AkPlaylistArray_IsEmpty, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BCC80, void*, CSharp_AkPlaylistArray_Exists, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BCD30, void*, CSharp_AkPlaylistArray_AddLast__SWIG_0, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BCDD0, void*, CSharp_AkPlaylistArray_AddLast__SWIG_1, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BCE80, void*, CSharp_AkPlaylistArray_Last, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BCF20, void, CSharp_AkPlaylistArray_RemoveLast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BCFC0, int32_t, CSharp_AkPlaylistArray_Remove, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BD070, int32_t, CSharp_AkPlaylistArray_RemoveSwap, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BD120, void, CSharp_AkPlaylistArray_RemoveAll, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BD1C0, void*, CSharp_AkPlaylistArray_ItemAtIndex, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BD270, void*, CSharp_AkPlaylistArray_Insert, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BD320, bool, CSharp_AkPlaylistArray_GrowArray__SWIG_0, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BD3D0, bool, CSharp_AkPlaylistArray_GrowArray__SWIG_1, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BD470, bool, CSharp_AkPlaylistArray_Resize, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BD520, void, CSharp_AkPlaylistArray_Transfer, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BD5D0, int32_t, CSharp_AkPlaylistArray_Copy, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(
        0x018BD680,
        int32_t,
        CSharp_AkPlaylist_Enqueue__SWIG_0,
        void* jarg1,
        uint32_t jarg2,
        int32_t jarg3,
        void* jarg4,
        uint32_t jarg5,
        void* jarg6
    )
    IL2CPP_REGISTER_METHOD(0x018BD740, int32_t, CSharp_AkPlaylist_Enqueue__SWIG_1, void* jarg1, uint32_t jarg2, int32_t jarg3, void* jarg4, uint32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018BD800, int32_t, CSharp_AkPlaylist_Enqueue__SWIG_2, void* jarg1, uint32_t jarg2, int32_t jarg3, void* jarg4)
    IL2CPP_REGISTER_METHOD(0x018BD8C0, int32_t, CSharp_AkPlaylist_Enqueue__SWIG_3, void* jarg1, uint32_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018BD970, int32_t, CSharp_AkPlaylist_Enqueue__SWIG_4, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BDA20, void*, CSharp_new_AkPlaylist, )
    IL2CPP_REGISTER_METHOD(0x018BDAB0, void, CSharp_delete_AkPlaylist, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BDB50, uint32_t, CSharp_DynamicSequenceOpen__SWIG_0, uint64_t jarg1, uint32_t jarg2, void* jarg3, void* jarg4, int32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018BDC10, uint32_t, CSharp_DynamicSequenceOpen__SWIG_1, uint64_t jarg1, uint32_t jarg2, void* jarg3, void* jarg4)
    IL2CPP_REGISTER_METHOD(0x018BDCD0, uint32_t, CSharp_DynamicSequenceOpen__SWIG_2, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018BDD70, int32_t, CSharp_DynamicSequenceClose, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018BDE10, int32_t, CSharp_DynamicSequencePlay__SWIG_0, uint32_t jarg1, int32_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018BDEC0, int32_t, CSharp_DynamicSequencePlay__SWIG_1, uint32_t jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BDF60, int32_t, CSharp_DynamicSequencePlay__SWIG_2, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018BE000, int32_t, CSharp_DynamicSequencePause__SWIG_0, uint32_t jarg1, int32_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018BE0B0, int32_t, CSharp_DynamicSequencePause__SWIG_1, uint32_t jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BE150, int32_t, CSharp_DynamicSequencePause__SWIG_2, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018BE1F0, int32_t, CSharp_DynamicSequenceResume__SWIG_0, uint32_t jarg1, int32_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018BE2A0, int32_t, CSharp_DynamicSequenceResume__SWIG_1, uint32_t jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BE340, int32_t, CSharp_DynamicSequenceResume__SWIG_2, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018BE3E0, int32_t, CSharp_DynamicSequenceStop__SWIG_0, uint32_t jarg1, int32_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018BE490, int32_t, CSharp_DynamicSequenceStop__SWIG_1, uint32_t jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BE530, int32_t, CSharp_DynamicSequenceStop__SWIG_2, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018BE5D0, int32_t, CSharp_DynamicSequenceBreak, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018BE670, int32_t, CSharp_DynamicSequenceGetPauseTimes, uint32_t jarg1, uint32_t* jarg2, uint32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018BE720, void*, CSharp_DynamicSequenceLockPlaylist, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018BE7C0, int32_t, CSharp_DynamicSequenceUnlockPlaylist, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018BE860, void*, CSharp_new_AkOutputSettings__SWIG_0, )
    IL2CPP_REGISTER_METHOD(0x018BE8F0, void*, CSharp_new_AkOutputSettings__SWIG_1, app::String* jarg1, uint32_t jarg2, void* jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018BEA90, void*, CSharp_new_AkOutputSettings__SWIG_2, app::String* jarg1, uint32_t jarg2, void* jarg3)
    IL2CPP_REGISTER_METHOD(0x018BEC20, void*, CSharp_new_AkOutputSettings__SWIG_3, app::String* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BEDA0, void*, CSharp_new_AkOutputSettings__SWIG_4, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BEF20, void, CSharp_AkOutputSettings_audioDeviceShareset_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BEFD0, uint32_t, CSharp_AkOutputSettings_audioDeviceShareset_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BF070, void, CSharp_AkOutputSettings_idDevice_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BF120, uint32_t, CSharp_AkOutputSettings_idDevice_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BF1C0, void, CSharp_AkOutputSettings_ePanningRule_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BF270, int32_t, CSharp_AkOutputSettings_ePanningRule_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BF310, void, CSharp_AkOutputSettings_channelConfig_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018BF3C0, void*, CSharp_AkOutputSettings_channelConfig_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BF460, void, CSharp_delete_AkOutputSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BF500, void, CSharp_AkTaskContext_uIdxThread_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BF5B0, uint32_t, CSharp_AkTaskContext_uIdxThread_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BF650, void*, CSharp_new_AkTaskContext, )
    IL2CPP_REGISTER_METHOD(0x018BF6E0, void, CSharp_delete_AkTaskContext, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BF780, void, CSharp_AkInitSettings_uMaxNumPaths_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BF830, uint32_t, CSharp_AkInitSettings_uMaxNumPaths_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BF8D0, void, CSharp_AkInitSettings_uDefaultPoolSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BF980, uint32_t, CSharp_AkInitSettings_uDefaultPoolSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BFA20, void, CSharp_AkInitSettings_fDefaultPoolRatioThreshold_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018BFAD0, float, CSharp_AkInitSettings_fDefaultPoolRatioThreshold_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BFB70, void, CSharp_AkInitSettings_uCommandQueueSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BFC20, uint32_t, CSharp_AkInitSettings_uCommandQueueSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BFCC0, void, CSharp_AkInitSettings_uPrepareEventMemoryPoolID_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018BFD70, int32_t, CSharp_AkInitSettings_uPrepareEventMemoryPoolID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BFE10, void, CSharp_AkInitSettings_bEnableGameSyncPreparation_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018BFEC0, bool, CSharp_AkInitSettings_bEnableGameSyncPreparation_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018BFF60, void, CSharp_AkInitSettings_uContinuousPlaybackLookAhead_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C0010, uint32_t, CSharp_AkInitSettings_uContinuousPlaybackLookAhead_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C00B0, void, CSharp_AkInitSettings_uNumSamplesPerFrame_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C0160, uint32_t, CSharp_AkInitSettings_uNumSamplesPerFrame_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C0200, void, CSharp_AkInitSettings_uMonitorPoolSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C02B0, uint32_t, CSharp_AkInitSettings_uMonitorPoolSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C0350, void, CSharp_AkInitSettings_uMonitorQueuePoolSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C0400, uint32_t, CSharp_AkInitSettings_uMonitorQueuePoolSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C04A0, void, CSharp_AkInitSettings_settingsMainOutput_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C0550, void*, CSharp_AkInitSettings_settingsMainOutput_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C05F0, void, CSharp_AkInitSettings_uMaxHardwareTimeoutMs_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C06A0, uint32_t, CSharp_AkInitSettings_uMaxHardwareTimeoutMs_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C0740, void, CSharp_AkInitSettings_bUseSoundBankMgrThread_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018C07F0, bool, CSharp_AkInitSettings_bUseSoundBankMgrThread_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C0890, void, CSharp_AkInitSettings_bUseLEngineThread_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018C0940, bool, CSharp_AkInitSettings_bUseLEngineThread_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C09E0, void, CSharp_AkInitSettings_szPluginDLLPath_set, void* jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C0A90, void*, CSharp_AkInitSettings_szPluginDLLPath_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C0B30, void, CSharp_AkInitSettings_eFloorPlane_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C0BE0, int32_t, CSharp_AkInitSettings_eFloorPlane_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C0C80, void, CSharp_AkInitSettings_fDebugOutOfRangeLimit_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018C0D30, float, CSharp_AkInitSettings_fDebugOutOfRangeLimit_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C0DD0, void, CSharp_AkInitSettings_bDebugOutOfRangeCheckEnabled_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018C0E80, bool, CSharp_AkInitSettings_bDebugOutOfRangeCheckEnabled_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C0F20, void*, CSharp_new_AkInitSettings, )
    IL2CPP_REGISTER_METHOD(0x018C0FB0, void, CSharp_delete_AkInitSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C1050, void, CSharp_AkSourceSettings_sourceID_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C1100, uint32_t, CSharp_AkSourceSettings_sourceID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C11A0, void, CSharp_AkSourceSettings_pMediaMemory_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C1250, void*, CSharp_AkSourceSettings_pMediaMemory_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C12F0, void, CSharp_AkSourceSettings_uMediaSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C13A0, uint32_t, CSharp_AkSourceSettings_uMediaSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C1440, void, CSharp_AkSourceSettings_Clear, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C14E0, int32_t, CSharp_AkSourceSettings_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018C1570, void, CSharp_AkSourceSettings_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C1620, void*, CSharp_new_AkSourceSettings, )
    IL2CPP_REGISTER_METHOD(0x018C16B0, void, CSharp_delete_AkSourceSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C1750, bool, CSharp_IsInitialized, )
    IL2CPP_REGISTER_METHOD(0x018C17E0, int32_t, CSharp_GetAudioSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C1880, void*, CSharp_GetSpeakerConfiguration__SWIG_0, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C1920, void*, CSharp_GetSpeakerConfiguration__SWIG_1, )
    IL2CPP_REGISTER_METHOD(0x018C19B0, int32_t, CSharp_GetPanningRule__SWIG_0, int32_t* jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C1A60, int32_t, CSharp_GetPanningRule__SWIG_1, int32_t* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C1B00, int32_t, CSharp_SetPanningRule__SWIG_0, int32_t jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C1BB0, int32_t, CSharp_SetPanningRule__SWIG_1, int32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C1C50, int32_t, CSharp_GetSpeakerAngles__SWIG_0, app::Single__Array* jarg1, uint32_t* jarg2, float* jarg3, uint64_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C1D20, int32_t, CSharp_GetSpeakerAngles__SWIG_1, app::Single__Array* jarg1, uint32_t* jarg2, float* jarg3)
    IL2CPP_REGISTER_METHOD(0x018C1DE0, int32_t, CSharp_SetSpeakerAngles__SWIG_0, app::Single__Array* jarg1, uint32_t jarg2, float jarg3, uint64_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C1EB0, int32_t, CSharp_SetSpeakerAngles__SWIG_1, app::Single__Array* jarg1, uint32_t jarg2, float jarg3)
    IL2CPP_REGISTER_METHOD(0x018C1F70, int32_t, CSharp_SetVolumeThreshold, float jarg1)
    IL2CPP_REGISTER_METHOD(0x018C2010, int32_t, CSharp_SetMaxNumVoicesLimit, uint16_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C20B0, int32_t, CSharp_RenderAudio__SWIG_0, bool jarg1)
    IL2CPP_REGISTER_METHOD(0x018C2150, int32_t, CSharp_RenderAudio__SWIG_1, )
    IL2CPP_REGISTER_METHOD(0x018C21E0, int32_t, CSharp_RegisterPluginDLL__SWIG_0, app::String* jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C22A0, int32_t, CSharp_RegisterPluginDLL__SWIG_1, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C2350, uint32_t, CSharp_GetIDFromString__SWIG_0, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(
        0x018C2400,
        uint32_t,
        CSharp_PostEvent__SWIG_0,
        uint32_t jarg1,
        uint64_t jarg2,
        uint32_t jarg3,
        void* jarg4,
        void* jarg5,
        uint32_t jarg6,
        void* jarg7,
        uint32_t jarg8
    )
    IL2CPP_REGISTER_METHOD(
        0x018C24C0,
        uint32_t,
        CSharp_PostEvent__SWIG_1,
        uint32_t jarg1,
        uint64_t jarg2,
        uint32_t jarg3,
        void* jarg4,
        void* jarg5,
        uint32_t jarg6,
        void* jarg7
    )
    IL2CPP_REGISTER_METHOD(0x018C2580, uint32_t, CSharp_PostEvent__SWIG_2, uint32_t jarg1, uint64_t jarg2, uint32_t jarg3, void* jarg4, void* jarg5)
    IL2CPP_REGISTER_METHOD(0x018C2640, uint32_t, CSharp_PostEvent__SWIG_3, uint32_t jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(
        0x018C26F0,
        uint32_t,
        CSharp_PostEvent__SWIG_4,
        app::String* jarg1,
        uint64_t jarg2,
        uint32_t jarg3,
        void* jarg4,
        void* jarg5,
        uint32_t jarg6,
        void* jarg7,
        uint32_t jarg8
    )
    IL2CPP_REGISTER_METHOD(
        0x018C27D0,
        uint32_t,
        CSharp_PostEvent__SWIG_5,
        app::String* jarg1,
        uint64_t jarg2,
        uint32_t jarg3,
        void* jarg4,
        void* jarg5,
        uint32_t jarg6,
        void* jarg7
    )
    IL2CPP_REGISTER_METHOD(0x018C28B0, uint32_t, CSharp_PostEvent__SWIG_6, app::String* jarg1, uint64_t jarg2, uint32_t jarg3, void* jarg4, void* jarg5)
    IL2CPP_REGISTER_METHOD(0x018C2990, uint32_t, CSharp_PostEvent__SWIG_7, app::String* jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(
        0x018C2A40,
        int32_t,
        CSharp_ExecuteActionOnEvent__SWIG_0,
        uint32_t jarg1,
        int32_t jarg2,
        uint64_t jarg3,
        int32_t jarg4,
        int32_t jarg5,
        uint32_t jarg6
    )
    IL2CPP_REGISTER_METHOD(
        0x018C2B00,
        int32_t,
        CSharp_ExecuteActionOnEvent__SWIG_1,
        uint32_t jarg1,
        int32_t jarg2,
        uint64_t jarg3,
        int32_t jarg4,
        int32_t jarg5
    )
    IL2CPP_REGISTER_METHOD(0x018C2BC0, int32_t, CSharp_ExecuteActionOnEvent__SWIG_2, uint32_t jarg1, int32_t jarg2, uint64_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C2C80, int32_t, CSharp_ExecuteActionOnEvent__SWIG_3, uint32_t jarg1, int32_t jarg2, uint64_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C2D30, int32_t, CSharp_ExecuteActionOnEvent__SWIG_4, uint32_t jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(
        0x018C2DD0,
        int32_t,
        CSharp_ExecuteActionOnEvent__SWIG_5,
        app::String* jarg1,
        int32_t jarg2,
        uint64_t jarg3,
        int32_t jarg4,
        int32_t jarg5,
        uint32_t jarg6
    )
    IL2CPP_REGISTER_METHOD(
        0x018C2EB0,
        int32_t,
        CSharp_ExecuteActionOnEvent__SWIG_6,
        app::String* jarg1,
        int32_t jarg2,
        uint64_t jarg3,
        int32_t jarg4,
        int32_t jarg5
    )
    IL2CPP_REGISTER_METHOD(0x018C2F90, int32_t, CSharp_ExecuteActionOnEvent__SWIG_7, app::String* jarg1, int32_t jarg2, uint64_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C3060, int32_t, CSharp_ExecuteActionOnEvent__SWIG_8, app::String* jarg1, int32_t jarg2, uint64_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C3120, int32_t, CSharp_ExecuteActionOnEvent__SWIG_9, app::String* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C31D0, int32_t, CSharp_PostMIDIOnEvent, uint32_t jarg1, uint64_t jarg2, void* jarg3, uint16_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C3290, int32_t, CSharp_StopMIDIOnEvent__SWIG_0, uint32_t jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C3340, int32_t, CSharp_StopMIDIOnEvent__SWIG_1, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C33E0, int32_t, CSharp_StopMIDIOnEvent__SWIG_2, )
    IL2CPP_REGISTER_METHOD(0x018C3470, int32_t, CSharp_PinEventInStreamCache__SWIG_0, uint32_t jarg1, char16_t jarg2, char16_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C3530, int32_t, CSharp_PinEventInStreamCache__SWIG_1, app::String* jarg1, char16_t jarg2, char16_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C3600, int32_t, CSharp_UnpinEventInStreamCache__SWIG_0, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C36A0, int32_t, CSharp_UnpinEventInStreamCache__SWIG_1, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C3750, int32_t, CSharp_GetBufferStatusForPinnedEvent__SWIG_0, uint32_t jarg1, float* jarg2, int32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018C3800, int32_t, CSharp_GetBufferStatusForPinnedEvent__SWIG_1, app::String* jarg1, float* jarg2, int32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018C3990, int32_t, CSharp_SeekOnEvent__SWIG_0, uint32_t jarg1, uint64_t jarg2, int32_t jarg3, bool jarg4, uint32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018C3A60, int32_t, CSharp_SeekOnEvent__SWIG_1, uint32_t jarg1, uint64_t jarg2, int32_t jarg3, bool jarg4)
    IL2CPP_REGISTER_METHOD(0x018C3B20, int32_t, CSharp_SeekOnEvent__SWIG_2, uint32_t jarg1, uint64_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C3BD0, int32_t, CSharp_SeekOnEvent__SWIG_3, app::String* jarg1, uint64_t jarg2, int32_t jarg3, bool jarg4, uint32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018C3CB0, int32_t, CSharp_SeekOnEvent__SWIG_4, app::String* jarg1, uint64_t jarg2, int32_t jarg3, bool jarg4)
    IL2CPP_REGISTER_METHOD(0x018C3D90, int32_t, CSharp_SeekOnEvent__SWIG_5, app::String* jarg1, uint64_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C3E50, int32_t, CSharp_SeekOnEvent__SWIG_9, uint32_t jarg1, uint64_t jarg2, float jarg3, bool jarg4, uint32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018C3F20, int32_t, CSharp_SeekOnEvent__SWIG_10, uint32_t jarg1, uint64_t jarg2, float jarg3, bool jarg4)
    IL2CPP_REGISTER_METHOD(0x018C3FE0, int32_t, CSharp_SeekOnEvent__SWIG_11, uint32_t jarg1, uint64_t jarg2, float jarg3)
    IL2CPP_REGISTER_METHOD(0x018C40A0, int32_t, CSharp_SeekOnEvent__SWIG_12, app::String* jarg1, uint64_t jarg2, float jarg3, bool jarg4, uint32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018C4180, int32_t, CSharp_SeekOnEvent__SWIG_13, app::String* jarg1, uint64_t jarg2, float jarg3, bool jarg4)
    IL2CPP_REGISTER_METHOD(0x018C4260, int32_t, CSharp_SeekOnEvent__SWIG_14, app::String* jarg1, uint64_t jarg2, float jarg3)
    IL2CPP_REGISTER_METHOD(0x018C4320, void, CSharp_CancelEventCallbackCookie, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C43C0, void, CSharp_CancelEventCallbackGameObject, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C4460, void, CSharp_CancelEventCallback, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C4500, int32_t, CSharp_GetSourcePlayPosition__SWIG_0, uint32_t jarg1, int32_t* jarg2, bool jarg3)
    IL2CPP_REGISTER_METHOD(0x018C45B0, int32_t, CSharp_GetSourcePlayPosition__SWIG_1, uint32_t jarg1, int32_t* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C4660, int32_t, CSharp_GetSourceStreamBuffering, uint32_t jarg1, int32_t* jarg2, int32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018C4710, void, CSharp_StopAll__SWIG_0, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C47B0, void, CSharp_StopAll__SWIG_1, )
    IL2CPP_REGISTER_METHOD(0x018C4840, void, CSharp_StopPlayingID__SWIG_0, uint32_t jarg1, int32_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C48F0, void, CSharp_StopPlayingID__SWIG_1, uint32_t jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C4990, void, CSharp_StopPlayingID__SWIG_2, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C4A30, void, CSharp_ExecuteActionOnPlayingID__SWIG_0, int32_t jarg1, uint32_t jarg2, int32_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C4AF0, void, CSharp_ExecuteActionOnPlayingID__SWIG_1, int32_t jarg1, uint32_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C4BA0, void, CSharp_ExecuteActionOnPlayingID__SWIG_2, int32_t jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C4C40, void, CSharp_SetRandomSeed, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C4CE0, void, CSharp_MuteBackgroundMusic, bool jarg1)
    IL2CPP_REGISTER_METHOD(0x018C4D80, bool, CSharp_GetBackgroundMusicMute, )
    IL2CPP_REGISTER_METHOD(
        0x018C4E10,
        int32_t,
        CSharp_SendPluginCustomGameData,
        uint32_t jarg1,
        uint64_t jarg2,
        int32_t jarg3,
        uint32_t jarg4,
        uint32_t jarg5,
        void* jarg6,
        uint32_t jarg7
    )
    IL2CPP_REGISTER_METHOD(0x018C4ED0, int32_t, CSharp_UnregisterAllGameObj, )
    IL2CPP_REGISTER_METHOD(0x018C4F60, int32_t, CSharp_SetMultiplePositions__SWIG_0, uint64_t jarg1, void* jarg2, uint16_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C5030, int32_t, CSharp_SetMultiplePositions__SWIG_1, uint64_t jarg1, void* jarg2, uint16_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C50F0, int32_t, CSharp_SetMultiplePositions__SWIG_2, uint64_t jarg1, void* jarg2, uint16_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C51C0, int32_t, CSharp_SetMultiplePositions__SWIG_3, uint64_t jarg1, void* jarg2, uint16_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C5280, int32_t, CSharp_SetScalingFactor, uint64_t jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018C5330, int32_t, CSharp_ClearBanks, )
    IL2CPP_REGISTER_METHOD(0x018C53C0, int32_t, CSharp_SetBankLoadIOSettings, float jarg1, char16_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C5470, int32_t, CSharp_LoadBank__SWIG_0, app::String* jarg1, int32_t jarg2, uint32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018C5530, int32_t, CSharp_LoadBank__SWIG_1, uint32_t jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C55D0, int32_t, CSharp_LoadBank__SWIG_2, void* jarg1, uint32_t jarg2, uint32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018C5680, int32_t, CSharp_LoadBank__SWIG_3, void* jarg1, uint32_t jarg2, int32_t jarg3, uint32_t* jarg4)
    IL2CPP_REGISTER_METHOD(0x018C5740, int32_t, CSharp_LoadBank__SWIG_4, app::String* jarg1, void* jarg2, void* jarg3, int32_t jarg4, uint32_t* jarg5)
    IL2CPP_REGISTER_METHOD(0x018C5820, int32_t, CSharp_LoadBank__SWIG_5, uint32_t jarg1, void* jarg2, void* jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C58E0, int32_t, CSharp_LoadBank__SWIG_6, void* jarg1, uint32_t jarg2, void* jarg3, void* jarg4, uint32_t* jarg5)
    IL2CPP_REGISTER_METHOD(0x018C59A0, int32_t, CSharp_LoadBank__SWIG_7, void* jarg1, uint32_t jarg2, void* jarg3, void* jarg4, int32_t jarg5, uint32_t* jarg6)
    IL2CPP_REGISTER_METHOD(0x018C5A60, int32_t, CSharp_UnloadBank__SWIG_0, app::String* jarg1, void* jarg2, int32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018C5B20, int32_t, CSharp_UnloadBank__SWIG_1, app::String* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C5BD0, int32_t, CSharp_UnloadBank__SWIG_4, uint32_t jarg1, void* jarg2, int32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018C5C80, int32_t, CSharp_UnloadBank__SWIG_5, uint32_t jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C5D30, int32_t, CSharp_UnloadBank__SWIG_6, app::String* jarg1, void* jarg2, void* jarg3, void* jarg4)
    IL2CPP_REGISTER_METHOD(0x018C5E00, int32_t, CSharp_UnloadBank__SWIG_8, uint32_t jarg1, void* jarg2, void* jarg3, void* jarg4)
    IL2CPP_REGISTER_METHOD(0x018C5EC0, void, CSharp_CancelBankCallbackCookie, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C5F60, int32_t, CSharp_PrepareBank__SWIG_0, int32_t jarg1, app::String* jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C6020, int32_t, CSharp_PrepareBank__SWIG_1, int32_t jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C60D0, int32_t, CSharp_PrepareBank__SWIG_4, int32_t jarg1, uint32_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C6180, int32_t, CSharp_PrepareBank__SWIG_5, int32_t jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C6220, int32_t, CSharp_PrepareBank__SWIG_6, int32_t jarg1, app::String* jarg2, void* jarg3, void* jarg4, int32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018C6300, int32_t, CSharp_PrepareBank__SWIG_7, int32_t jarg1, app::String* jarg2, void* jarg3, void* jarg4)
    IL2CPP_REGISTER_METHOD(0x018C63D0, int32_t, CSharp_PrepareBank__SWIG_10, int32_t jarg1, uint32_t jarg2, void* jarg3, void* jarg4, int32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018C6490, int32_t, CSharp_PrepareBank__SWIG_11, int32_t jarg1, uint32_t jarg2, void* jarg3, void* jarg4)
    IL2CPP_REGISTER_METHOD(0x018C6550, int32_t, CSharp_ClearPreparedEvents, )
    IL2CPP_REGISTER_METHOD(0x018C65E0, int32_t, CSharp_PrepareEvent__SWIG_0, int32_t jarg1, void* jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C6690, int32_t, CSharp_PrepareEvent__SWIG_1, int32_t jarg1, app::UInt32__Array* jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C6750, int32_t, CSharp_PrepareEvent__SWIG_2, int32_t jarg1, void* jarg2, uint32_t jarg3, void* jarg4, void* jarg5)
    IL2CPP_REGISTER_METHOD(0x018C6810, int32_t, CSharp_PrepareEvent__SWIG_3, int32_t jarg1, app::UInt32__Array* jarg2, uint32_t jarg3, void* jarg4, void* jarg5)
    IL2CPP_REGISTER_METHOD(0x018C68F0, int32_t, CSharp_SetMedia, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C69A0, int32_t, CSharp_UnsetMedia, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C6A50, int32_t, CSharp_PrepareGameSyncs__SWIG_0, int32_t jarg1, int32_t jarg2, app::String* jarg3, void* jarg4, uint32_t jarg5)
    IL2CPP_REGISTER_METHOD(
        0x018C6B20,
        int32_t,
        CSharp_PrepareGameSyncs__SWIG_1,
        int32_t jarg1,
        int32_t jarg2,
        uint32_t jarg3,
        app::UInt32__Array* jarg4,
        uint32_t jarg5
    )
    IL2CPP_REGISTER_METHOD(
        0x018C6BF0,
        int32_t,
        CSharp_PrepareGameSyncs__SWIG_2,
        int32_t jarg1,
        int32_t jarg2,
        app::String* jarg3,
        void* jarg4,
        uint32_t jarg5,
        void* jarg6,
        void* jarg7
    )
    IL2CPP_REGISTER_METHOD(
        0x018C6CC0,
        int32_t,
        CSharp_PrepareGameSyncs__SWIG_3,
        int32_t jarg1,
        int32_t jarg2,
        uint32_t jarg3,
        app::UInt32__Array* jarg4,
        uint32_t jarg5,
        void* jarg6,
        void* jarg7
    )
    IL2CPP_REGISTER_METHOD(0x018C6D90, int32_t, CSharp_AddListener, uint64_t jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C6E40, int32_t, CSharp_RemoveListener, uint64_t jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C6EF0, int32_t, CSharp_AddDefaultListener, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C6F90, int32_t, CSharp_RemoveDefaultListener, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C7030, int32_t, CSharp_ResetListenersToDefault, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C70D0, int32_t, CSharp_SetListenerSpatialization__SWIG_0, uint64_t jarg1, bool jarg2, void* jarg3, app::Single__Array* jarg4)
    IL2CPP_REGISTER_METHOD(0x018C71B0, int32_t, CSharp_SetListenerSpatialization__SWIG_1, uint64_t jarg1, bool jarg2, void* jarg3)
    IL2CPP_REGISTER_METHOD(
        0x018C7270,
        int32_t,
        CSharp_SetRTPCValue__SWIG_0,
        uint32_t jarg1,
        float jarg2,
        uint64_t jarg3,
        int32_t jarg4,
        int32_t jarg5,
        bool jarg6
    )
    IL2CPP_REGISTER_METHOD(0x018C7340, int32_t, CSharp_SetRTPCValue__SWIG_1, uint32_t jarg1, float jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018C7400, int32_t, CSharp_SetRTPCValue__SWIG_2, uint32_t jarg1, float jarg2, uint64_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C74C0, int32_t, CSharp_SetRTPCValue__SWIG_3, uint32_t jarg1, float jarg2, uint64_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C7580, int32_t, CSharp_SetRTPCValue__SWIG_4, uint32_t jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(
        0x018C7630,
        int32_t,
        CSharp_SetRTPCValue__SWIG_5,
        app::String* jarg1,
        float jarg2,
        uint64_t jarg3,
        int32_t jarg4,
        int32_t jarg5,
        bool jarg6
    )
    IL2CPP_REGISTER_METHOD(0x018C7720, int32_t, CSharp_SetRTPCValue__SWIG_6, app::String* jarg1, float jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018C7800, int32_t, CSharp_SetRTPCValue__SWIG_7, app::String* jarg1, float jarg2, uint64_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C78E0, int32_t, CSharp_SetRTPCValue__SWIG_8, app::String* jarg1, float jarg2, uint64_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C79A0, int32_t, CSharp_SetRTPCValue__SWIG_9, app::String* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(
        0x018C7A60,
        int32_t,
        CSharp_SetRTPCValueByPlayingID__SWIG_0,
        uint32_t jarg1,
        float jarg2,
        uint32_t jarg3,
        int32_t jarg4,
        int32_t jarg5,
        bool jarg6
    )
    IL2CPP_REGISTER_METHOD(
        0x018C7B30,
        int32_t,
        CSharp_SetRTPCValueByPlayingID__SWIG_1,
        uint32_t jarg1,
        float jarg2,
        uint32_t jarg3,
        int32_t jarg4,
        int32_t jarg5
    )
    IL2CPP_REGISTER_METHOD(0x018C7BF0, int32_t, CSharp_SetRTPCValueByPlayingID__SWIG_2, uint32_t jarg1, float jarg2, uint32_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C7CB0, int32_t, CSharp_SetRTPCValueByPlayingID__SWIG_3, uint32_t jarg1, float jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(
        0x018C7D70,
        int32_t,
        CSharp_SetRTPCValueByPlayingID__SWIG_4,
        app::String* jarg1,
        float jarg2,
        uint32_t jarg3,
        int32_t jarg4,
        int32_t jarg5,
        bool jarg6
    )
    IL2CPP_REGISTER_METHOD(
        0x018C7E60,
        int32_t,
        CSharp_SetRTPCValueByPlayingID__SWIG_5,
        app::String* jarg1,
        float jarg2,
        uint32_t jarg3,
        int32_t jarg4,
        int32_t jarg5
    )
    IL2CPP_REGISTER_METHOD(0x018C7F40, int32_t, CSharp_SetRTPCValueByPlayingID__SWIG_6, app::String* jarg1, float jarg2, uint32_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C8020, int32_t, CSharp_SetRTPCValueByPlayingID__SWIG_7, app::String* jarg1, float jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C80E0, int32_t, CSharp_ResetRTPCValue__SWIG_0, uint32_t jarg1, uint64_t jarg2, int32_t jarg3, int32_t jarg4, bool jarg5)
    IL2CPP_REGISTER_METHOD(0x018C81B0, int32_t, CSharp_ResetRTPCValue__SWIG_1, uint32_t jarg1, uint64_t jarg2, int32_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C8270, int32_t, CSharp_ResetRTPCValue__SWIG_2, uint32_t jarg1, uint64_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C8320, int32_t, CSharp_ResetRTPCValue__SWIG_3, uint32_t jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C83D0, int32_t, CSharp_ResetRTPCValue__SWIG_4, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C8470, int32_t, CSharp_ResetRTPCValue__SWIG_5, app::String* jarg1, uint64_t jarg2, int32_t jarg3, int32_t jarg4, bool jarg5)
    IL2CPP_REGISTER_METHOD(0x018C8560, int32_t, CSharp_ResetRTPCValue__SWIG_6, app::String* jarg1, uint64_t jarg2, int32_t jarg3, int32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C8630, int32_t, CSharp_ResetRTPCValue__SWIG_7, app::String* jarg1, uint64_t jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C86F0, int32_t, CSharp_ResetRTPCValue__SWIG_8, app::String* jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C87A0, int32_t, CSharp_ResetRTPCValue__SWIG_9, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C8850, int32_t, CSharp_SetSwitch__SWIG_0, uint32_t jarg1, uint32_t jarg2, uint64_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C8900, int32_t, CSharp_SetSwitch__SWIG_1, app::String* jarg1, app::String* jarg2, uint64_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C89D0, int32_t, CSharp_PostTrigger__SWIG_0, uint32_t jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C8A80, int32_t, CSharp_PostTrigger__SWIG_1, app::String* jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C8B30, int32_t, CSharp_SetState__SWIG_0, uint32_t jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C8BD0, int32_t, CSharp_SetState__SWIG_1, app::String* jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C8C90, int32_t, CSharp_SetGameObjectAuxSendValues, uint64_t jarg1, void* jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C8D40, int32_t, CSharp_SetGameObjectOutputBusVolume, uint64_t jarg1, uint64_t jarg2, float jarg3)
    IL2CPP_REGISTER_METHOD(0x018C8E00, int32_t, CSharp_SetActorMixerEffect, uint32_t jarg1, uint32_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C8EB0, int32_t, CSharp_SetBusEffect__SWIG_0, uint32_t jarg1, uint32_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C8F60, int32_t, CSharp_SetBusEffect__SWIG_1, app::String* jarg1, uint32_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018C9020, int32_t, CSharp_SetMixer__SWIG_0, uint32_t jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C90C0, int32_t, CSharp_SetMixer__SWIG_1, app::String* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C9170, int32_t, CSharp_SetBusConfig__SWIG_0, uint32_t jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C9220, int32_t, CSharp_SetBusConfig__SWIG_1, app::String* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C92D0, int32_t, CSharp_SetObjectObstructionAndOcclusion, uint64_t jarg1, uint64_t jarg2, float jarg3, float jarg4)
    IL2CPP_REGISTER_METHOD(0x018C93A0, int32_t, CSharp_SetMultipleObstructionAndOcclusion, uint64_t jarg1, uint64_t jarg2, void* jarg3, uint32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018C9460, int32_t, CSharp_StartOutputCapture, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C9510, int32_t, CSharp_StopOutputCapture, )
    IL2CPP_REGISTER_METHOD(0x018C95A0, int32_t, CSharp_AddOutputCaptureMarker, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C9720, int32_t, CSharp_StartProfilerCapture, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018C97D0, int32_t, CSharp_StopProfilerCapture, )
    IL2CPP_REGISTER_METHOD(0x018C9860, int32_t, CSharp_RemoveOutput, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018C9900, int32_t, CSharp_ReplaceOutput__SWIG_0, void* jarg1, uint64_t jarg2, uint64_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018C99B0, int32_t, CSharp_ReplaceOutput__SWIG_1, void* jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C9A60, uint64_t, CSharp_GetOutputID__SWIG_0, uint32_t jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C9B00, uint64_t, CSharp_GetOutputID__SWIG_1, app::String* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C9C80, int32_t, CSharp_SetBusDevice__SWIG_0, uint32_t jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018C9D20, int32_t, CSharp_SetBusDevice__SWIG_1, app::String* jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018C9F60, int32_t, CSharp_SetOutputVolume, uint64_t jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018CA010, int32_t, CSharp_GetDeviceSpatialAudioSupport, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018CA0B0, int32_t, CSharp_Suspend__SWIG_0, bool jarg1)
    IL2CPP_REGISTER_METHOD(0x018CA150, int32_t, CSharp_Suspend__SWIG_1, )
    IL2CPP_REGISTER_METHOD(0x018CA1E0, int32_t, CSharp_WakeupFromSuspend, )
    IL2CPP_REGISTER_METHOD(0x018CA270, uint32_t, CSharp_GetBufferTick, )
    IL2CPP_REGISTER_METHOD(0x018CA300, void, CSharp_AkSegmentInfo_iCurrentPosition_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CA3B0, int32_t, CSharp_AkSegmentInfo_iCurrentPosition_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CA450, void, CSharp_AkSegmentInfo_iPreEntryDuration_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CA500, int32_t, CSharp_AkSegmentInfo_iPreEntryDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CA5A0, void, CSharp_AkSegmentInfo_iActiveDuration_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CA650, int32_t, CSharp_AkSegmentInfo_iActiveDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CA6F0, void, CSharp_AkSegmentInfo_iPostExitDuration_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CA7A0, int32_t, CSharp_AkSegmentInfo_iPostExitDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CA840, void, CSharp_AkSegmentInfo_iRemainingLookAheadTime_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CA8F0, int32_t, CSharp_AkSegmentInfo_iRemainingLookAheadTime_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CA990, void, CSharp_AkSegmentInfo_fBeatDuration_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018CAA40, float, CSharp_AkSegmentInfo_fBeatDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CAAE0, void, CSharp_AkSegmentInfo_fBarDuration_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018CAB90, float, CSharp_AkSegmentInfo_fBarDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CAC30, void, CSharp_AkSegmentInfo_fGridDuration_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018CACE0, float, CSharp_AkSegmentInfo_fGridDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CAD80, void, CSharp_AkSegmentInfo_fGridOffset_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018CAE30, float, CSharp_AkSegmentInfo_fGridOffset_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CAED0, void*, CSharp_new_AkSegmentInfo, )
    IL2CPP_REGISTER_METHOD(0x018CAF60, void, CSharp_delete_AkSegmentInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CB000, uint8_t, CSharp_AK_INVALID_MIDI_CHANNEL_get, )
    IL2CPP_REGISTER_METHOD(0x018CB090, uint8_t, CSharp_AK_INVALID_MIDI_NOTE_get, )
    IL2CPP_REGISTER_METHOD(0x018CB120, void, CSharp_AkMIDIEvent_byChan_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CB1D0, uint8_t, CSharp_AkMIDIEvent_byChan_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CB270, void, CSharp_AkMIDIEvent_tGen_byParam1_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CB320, uint8_t, CSharp_AkMIDIEvent_tGen_byParam1_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CB3C0, void, CSharp_AkMIDIEvent_tGen_byParam2_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CB470, uint8_t, CSharp_AkMIDIEvent_tGen_byParam2_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CB510, void*, CSharp_new_AkMIDIEvent_tGen, )
    IL2CPP_REGISTER_METHOD(0x018CB5A0, void, CSharp_delete_AkMIDIEvent_tGen, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CB640, void, CSharp_AkMIDIEvent_tNoteOnOff_byNote_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CB6F0, uint8_t, CSharp_AkMIDIEvent_tNoteOnOff_byNote_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CB790, void, CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CB840, uint8_t, CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CB8E0, void*, CSharp_new_AkMIDIEvent_tNoteOnOff, )
    IL2CPP_REGISTER_METHOD(0x018CB970, void, CSharp_delete_AkMIDIEvent_tNoteOnOff, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CBA10, void, CSharp_AkMIDIEvent_tCc_byCc_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CBAC0, uint8_t, CSharp_AkMIDIEvent_tCc_byCc_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CBB60, void, CSharp_AkMIDIEvent_tCc_byValue_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CBC10, uint8_t, CSharp_AkMIDIEvent_tCc_byValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CBCB0, void*, CSharp_new_AkMIDIEvent_tCc, )
    IL2CPP_REGISTER_METHOD(0x018CBD40, void, CSharp_delete_AkMIDIEvent_tCc, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CBDE0, void, CSharp_AkMIDIEvent_tPitchBend_byValueLsb_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CBE90, uint8_t, CSharp_AkMIDIEvent_tPitchBend_byValueLsb_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CBF30, void, CSharp_AkMIDIEvent_tPitchBend_byValueMsb_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CBFE0, uint8_t, CSharp_AkMIDIEvent_tPitchBend_byValueMsb_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CC080, void*, CSharp_new_AkMIDIEvent_tPitchBend, )
    IL2CPP_REGISTER_METHOD(0x018CC110, void, CSharp_delete_AkMIDIEvent_tPitchBend, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CC1B0, void, CSharp_AkMIDIEvent_tNoteAftertouch_byNote_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CC260, uint8_t, CSharp_AkMIDIEvent_tNoteAftertouch_byNote_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CC300, void, CSharp_AkMIDIEvent_tNoteAftertouch_byValue_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CC3B0, uint8_t, CSharp_AkMIDIEvent_tNoteAftertouch_byValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CC450, void*, CSharp_new_AkMIDIEvent_tNoteAftertouch, )
    IL2CPP_REGISTER_METHOD(0x018CC4E0, void, CSharp_delete_AkMIDIEvent_tNoteAftertouch, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CC580, void, CSharp_AkMIDIEvent_tChanAftertouch_byValue_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CC630, uint8_t, CSharp_AkMIDIEvent_tChanAftertouch_byValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CC6D0, void*, CSharp_new_AkMIDIEvent_tChanAftertouch, )
    IL2CPP_REGISTER_METHOD(0x018CC760, void, CSharp_delete_AkMIDIEvent_tChanAftertouch, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CC800, void, CSharp_AkMIDIEvent_tProgramChange_byProgramNum_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CC8B0, uint8_t, CSharp_AkMIDIEvent_tProgramChange_byProgramNum_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CC950, void*, CSharp_new_AkMIDIEvent_tProgramChange, )
    IL2CPP_REGISTER_METHOD(0x018CC9E0, void, CSharp_delete_AkMIDIEvent_tProgramChange, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CCA80, void, CSharp_AkMIDIEvent_Gen_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018CCB30, void*, CSharp_AkMIDIEvent_Gen_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CCBD0, void, CSharp_AkMIDIEvent_Cc_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018CCC80, void*, CSharp_AkMIDIEvent_Cc_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CCD20, void, CSharp_AkMIDIEvent_NoteOnOff_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018CCDD0, void*, CSharp_AkMIDIEvent_NoteOnOff_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CCE70, void, CSharp_AkMIDIEvent_PitchBend_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018CCF20, void*, CSharp_AkMIDIEvent_PitchBend_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CCFC0, void, CSharp_AkMIDIEvent_NoteAftertouch_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018CD070, void*, CSharp_AkMIDIEvent_NoteAftertouch_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CD110, void, CSharp_AkMIDIEvent_ChanAftertouch_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018CD1C0, void*, CSharp_AkMIDIEvent_ChanAftertouch_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CD260, void, CSharp_AkMIDIEvent_ProgramChange_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018CD310, void*, CSharp_AkMIDIEvent_ProgramChange_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CD3B0, void, CSharp_AkMIDIEvent_byType_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CD460, int32_t, CSharp_AkMIDIEvent_byType_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CD500, void, CSharp_AkMIDIEvent_byOnOffNote_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CD5B0, uint8_t, CSharp_AkMIDIEvent_byOnOffNote_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CD650, void, CSharp_AkMIDIEvent_byVelocity_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CD700, uint8_t, CSharp_AkMIDIEvent_byVelocity_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CD7A0, void, CSharp_AkMIDIEvent_byCc_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CD850, int32_t, CSharp_AkMIDIEvent_byCc_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CD8F0, void, CSharp_AkMIDIEvent_byCcValue_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CD9A0, uint8_t, CSharp_AkMIDIEvent_byCcValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CDA40, void, CSharp_AkMIDIEvent_byValueLsb_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CDAF0, uint8_t, CSharp_AkMIDIEvent_byValueLsb_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CDB90, void, CSharp_AkMIDIEvent_byValueMsb_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CDC40, uint8_t, CSharp_AkMIDIEvent_byValueMsb_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CDCE0, void, CSharp_AkMIDIEvent_byAftertouchNote_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CDD90, uint8_t, CSharp_AkMIDIEvent_byAftertouchNote_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CDE30, void, CSharp_AkMIDIEvent_byNoteAftertouchValue_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CDEE0, uint8_t, CSharp_AkMIDIEvent_byNoteAftertouchValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CDF80, void, CSharp_AkMIDIEvent_byChanAftertouchValue_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CE030, uint8_t, CSharp_AkMIDIEvent_byChanAftertouchValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CE0D0, void, CSharp_AkMIDIEvent_byProgramNum_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CE180, uint8_t, CSharp_AkMIDIEvent_byProgramNum_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CE220, void*, CSharp_new_AkMIDIEvent, )
    IL2CPP_REGISTER_METHOD(0x018CE2B0, void, CSharp_delete_AkMIDIEvent, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CE350, void, CSharp_AkMIDIPost_uOffset_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CE400, uint32_t, CSharp_AkMIDIPost_uOffset_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CE4A0, int32_t, CSharp_AkMIDIPost_PostOnEvent, void* jarg1, uint32_t jarg2, uint64_t jarg3, uint32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018CE560, void, CSharp_AkMIDIPost_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018CE610, int32_t, CSharp_AkMIDIPost_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018CE6A0, void*, CSharp_new_AkMIDIPost, )
    IL2CPP_REGISTER_METHOD(0x018CE730, void, CSharp_delete_AkMIDIPost, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CE7D0, void*, CSharp_new_AkMemSettings, )
    IL2CPP_REGISTER_METHOD(0x018CE860, void, CSharp_AkMemSettings_uMaxNumPools_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CE910, uint32_t, CSharp_AkMemSettings_uMaxNumPools_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CE9B0, void, CSharp_AkMemSettings_uDebugFlags_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018CEA60, uint32_t, CSharp_AkMemSettings_uDebugFlags_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CEB00, void, CSharp_delete_AkMemSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CEBA0, void, CSharp_AkMusicSettings_fStreamingLookAheadRatio_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018CEC50, float, CSharp_AkMusicSettings_fStreamingLookAheadRatio_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CECF0, void*, CSharp_new_AkMusicSettings, )
    IL2CPP_REGISTER_METHOD(0x018CED80, void, CSharp_delete_AkMusicSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CEE20, int32_t, CSharp_GetPlayingSegmentInfo__SWIG_0, uint32_t jarg1, void* jarg2, bool jarg3)
    IL2CPP_REGISTER_METHOD(0x018CEED0, int32_t, CSharp_GetPlayingSegmentInfo__SWIG_1, uint32_t jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018CEF80, void*, CSharp_AkSerializedCallbackHeader_pPackage_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF020, void*, CSharp_AkSerializedCallbackHeader_pNext_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF0C0, int32_t, CSharp_AkSerializedCallbackHeader_eType_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF160, void*, CSharp_AkSerializedCallbackHeader_GetData, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF200, void*, CSharp_new_AkSerializedCallbackHeader, )
    IL2CPP_REGISTER_METHOD(0x018CF290, void, CSharp_delete_AkSerializedCallbackHeader, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF330, void*, CSharp_AkCallbackInfo_pCookie_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF3D0, uint64_t, CSharp_AkCallbackInfo_gameObjID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF470, void*, CSharp_new_AkCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018CF500, void, CSharp_delete_AkCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF5A0, uint32_t, CSharp_AkEventCallbackInfo_playingID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF640, uint32_t, CSharp_AkEventCallbackInfo_eventID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF6E0, void*, CSharp_new_AkEventCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018CF770, void, CSharp_delete_AkEventCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF810, uint8_t, CSharp_AkMIDIEventCallbackInfo_byChan_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF8B0, uint8_t, CSharp_AkMIDIEventCallbackInfo_byParam1_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF950, uint8_t, CSharp_AkMIDIEventCallbackInfo_byParam2_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CF9F0, int32_t, CSharp_AkMIDIEventCallbackInfo_byType_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CFA90, uint8_t, CSharp_AkMIDIEventCallbackInfo_byOnOffNote_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CFB30, uint8_t, CSharp_AkMIDIEventCallbackInfo_byVelocity_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CFBD0, int32_t, CSharp_AkMIDIEventCallbackInfo_byCc_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CFC70, uint8_t, CSharp_AkMIDIEventCallbackInfo_byCcValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CFD10, uint8_t, CSharp_AkMIDIEventCallbackInfo_byValueLsb_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CFDB0, uint8_t, CSharp_AkMIDIEventCallbackInfo_byValueMsb_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CFE50, uint8_t, CSharp_AkMIDIEventCallbackInfo_byAftertouchNote_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CFEF0, uint8_t, CSharp_AkMIDIEventCallbackInfo_byNoteAftertouchValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018CFF90, uint8_t, CSharp_AkMIDIEventCallbackInfo_byChanAftertouchValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0030, uint8_t, CSharp_AkMIDIEventCallbackInfo_byProgramNum_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D00D0, void*, CSharp_new_AkMIDIEventCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D0160, void, CSharp_delete_AkMIDIEventCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0200, uint32_t, CSharp_AkMarkerCallbackInfo_uIdentifier_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D02A0, uint32_t, CSharp_AkMarkerCallbackInfo_uPosition_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0340, void*, CSharp_AkMarkerCallbackInfo_strLabel_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D03E0, void*, CSharp_new_AkMarkerCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D0470, void, CSharp_delete_AkMarkerCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0510, float, CSharp_AkDurationCallbackInfo_fDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D05B0, float, CSharp_AkDurationCallbackInfo_fEstimatedDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0650, uint32_t, CSharp_AkDurationCallbackInfo_audioNodeID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D06F0, uint32_t, CSharp_AkDurationCallbackInfo_mediaID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0790, bool, CSharp_AkDurationCallbackInfo_bStreaming_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0830, void*, CSharp_new_AkDurationCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D08C0, void, CSharp_delete_AkDurationCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0960, uint32_t, CSharp_AkDynamicSequenceItemCallbackInfo_playingID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0A00, uint32_t, CSharp_AkDynamicSequenceItemCallbackInfo_audioNodeID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0AA0, void*, CSharp_AkDynamicSequenceItemCallbackInfo_pCustomInfo_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0B40, void*, CSharp_new_AkDynamicSequenceItemCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D0BD0, void, CSharp_delete_AkDynamicSequenceItemCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0C70, uint32_t, CSharp_AkMusicSyncCallbackInfo_playingID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0D10, int32_t, CSharp_AkMusicSyncCallbackInfo_segmentInfo_iCurrentPosition_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0DB0, int32_t, CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPreEntryDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0E50, int32_t, CSharp_AkMusicSyncCallbackInfo_segmentInfo_iActiveDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0EF0, int32_t, CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPostExitDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D0F90, int32_t, CSharp_AkMusicSyncCallbackInfo_segmentInfo_iRemainingLookAheadTime_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1030, float, CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBeatDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D10D0, float, CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBarDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1170, float, CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridDuration_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1210, float, CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridOffset_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D12B0, int32_t, CSharp_AkMusicSyncCallbackInfo_musicSyncType_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1350, void*, CSharp_AkMusicSyncCallbackInfo_userCueName_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D13F0, void*, CSharp_new_AkMusicSyncCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D1480, void, CSharp_delete_AkMusicSyncCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1520, uint32_t, CSharp_AkMusicPlaylistCallbackInfo_playlistID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D15C0, uint32_t, CSharp_AkMusicPlaylistCallbackInfo_uNumPlaylistItems_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1660, uint32_t, CSharp_AkMusicPlaylistCallbackInfo_uPlaylistSelection_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1700, uint32_t, CSharp_AkMusicPlaylistCallbackInfo_uPlaylistItemDone_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D17A0, void*, CSharp_new_AkMusicPlaylistCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D1830, void, CSharp_delete_AkMusicPlaylistCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D18D0, uint32_t, CSharp_AkBankCallbackInfo_bankID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1970, void*, CSharp_AkBankCallbackInfo_inMemoryBankPtr_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1A10, int32_t, CSharp_AkBankCallbackInfo_loadResult_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1AB0, int32_t, CSharp_AkBankCallbackInfo_memPoolId_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1B50, void*, CSharp_new_AkBankCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D1BE0, void, CSharp_delete_AkBankCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1C80, int32_t, CSharp_AkMonitoringCallbackInfo_errorCode_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1D20, int32_t, CSharp_AkMonitoringCallbackInfo_errorLevel_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1DC0, uint32_t, CSharp_AkMonitoringCallbackInfo_playingID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1E60, uint64_t, CSharp_AkMonitoringCallbackInfo_gameObjID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1F00, void*, CSharp_AkMonitoringCallbackInfo_message_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D1FA0, void*, CSharp_new_AkMonitoringCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D2030, void, CSharp_delete_AkMonitoringCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D20D0, bool, CSharp_AkAudioInterruptionCallbackInfo_bEnterInterruption_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D2170, void*, CSharp_new_AkAudioInterruptionCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D2200, void, CSharp_delete_AkAudioInterruptionCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D22A0, bool, CSharp_AkAudioSourceChangeCallbackInfo_bOtherAudioPlaying_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D2340, void*, CSharp_new_AkAudioSourceChangeCallbackInfo, )
    IL2CPP_REGISTER_METHOD(0x018D23D0, void, CSharp_delete_AkAudioSourceChangeCallbackInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D2470, int32_t, CSharp_AkCallbackSerializer_Init, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D2520, void, CSharp_AkCallbackSerializer_Term, )
    IL2CPP_REGISTER_METHOD(0x018D25B0, void*, CSharp_AkCallbackSerializer_Lock, )
    IL2CPP_REGISTER_METHOD(0x018D2640, void, CSharp_AkCallbackSerializer_SetLocalOutput, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D26E0, void, CSharp_AkCallbackSerializer_Unlock, )
    IL2CPP_REGISTER_METHOD(0x018D2770, int32_t, CSharp_AkCallbackSerializer_AudioSourceChangeCallbackFunc, bool jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D2820, void*, CSharp_new_AkCallbackSerializer, )
    IL2CPP_REGISTER_METHOD(0x018D28B0, void, CSharp_delete_AkCallbackSerializer, void* jarg1)
    IL2CPP_REGISTER_METHOD(
        0x018D2950,
        int32_t,
        CSharp_PostCode__SWIG_0,
        int32_t jarg1,
        int32_t jarg2,
        uint32_t jarg3,
        uint64_t jarg4,
        uint32_t jarg5,
        bool jarg6
    )
    IL2CPP_REGISTER_METHOD(0x018D2A20, int32_t, CSharp_PostCode__SWIG_1, int32_t jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4, uint32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018D2AE0, int32_t, CSharp_PostCode__SWIG_2, int32_t jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018D2BA0, int32_t, CSharp_PostCode__SWIG_3, int32_t jarg1, int32_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018D2C50, int32_t, CSharp_PostCode__SWIG_4, int32_t jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(
        0x018D2CF0,
        int32_t,
        CSharp_PostString__SWIG_0,
        app::String* jarg1,
        int32_t jarg2,
        uint32_t jarg3,
        uint64_t jarg4,
        uint32_t jarg5,
        bool jarg6
    )
    IL2CPP_REGISTER_METHOD(0x018D2DD0, int32_t, CSharp_PostString__SWIG_1, app::String* jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4, uint32_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018D2EB0, int32_t, CSharp_PostString__SWIG_2, app::String* jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018D2F80, int32_t, CSharp_PostString__SWIG_3, app::String* jarg1, int32_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018D3040, int32_t, CSharp_PostString__SWIG_4, app::String* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D30F0, int32_t, CSharp_GetTimeStamp, )
    IL2CPP_REGISTER_METHOD(0x018D3180, uint32_t, CSharp_GetNumNonZeroBits, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D3220, void, CSharp_AkGetDefaultHighPriorityThreadProperties, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D32C0, uint32_t, CSharp_ResolveDialogueEvent__SWIG_0, uint32_t jarg1, app::UInt32__Array* jarg2, uint32_t jarg3, uint32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018D3390, uint32_t, CSharp_ResolveDialogueEvent__SWIG_1, uint32_t jarg1, app::UInt32__Array* jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018D3450, int32_t, CSharp_GetDialogueEventCustomPropertyValue__SWIG_0, uint32_t jarg1, uint32_t jarg2, int32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D3500, int32_t, CSharp_GetDialogueEventCustomPropertyValue__SWIG_1, uint32_t jarg1, uint32_t jarg2, float* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D35B0, void, CSharp_AkPositioningInfo_fCenterPct_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D3660, float, CSharp_AkPositioningInfo_fCenterPct_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D3700, void, CSharp_AkPositioningInfo_pannerType_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D37B0, int32_t, CSharp_AkPositioningInfo_pannerType_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D3850, void, CSharp_AkPositioningInfo_e3dPositioningType_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D3900, int32_t, CSharp_AkPositioningInfo_e3dPositioningType_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D39A0, void, CSharp_AkPositioningInfo_bHoldEmitterPosAndOrient_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018D3A50, bool, CSharp_AkPositioningInfo_bHoldEmitterPosAndOrient_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D3AF0, void, CSharp_AkPositioningInfo_e3DSpatializationMode_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D3BA0, int32_t, CSharp_AkPositioningInfo_e3DSpatializationMode_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D3C40, void, CSharp_AkPositioningInfo_bEnableAttenuation_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018D3CF0, bool, CSharp_AkPositioningInfo_bEnableAttenuation_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D3D90, void, CSharp_AkPositioningInfo_bUseConeAttenuation_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018D3E40, bool, CSharp_AkPositioningInfo_bUseConeAttenuation_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D3EE0, void, CSharp_AkPositioningInfo_fInnerAngle_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D3F90, float, CSharp_AkPositioningInfo_fInnerAngle_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4030, void, CSharp_AkPositioningInfo_fOuterAngle_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D40E0, float, CSharp_AkPositioningInfo_fOuterAngle_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4180, void, CSharp_AkPositioningInfo_fConeMaxAttenuation_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D4230, float, CSharp_AkPositioningInfo_fConeMaxAttenuation_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D42D0, void, CSharp_AkPositioningInfo_LPFCone_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D4380, float, CSharp_AkPositioningInfo_LPFCone_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4420, void, CSharp_AkPositioningInfo_HPFCone_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D44D0, float, CSharp_AkPositioningInfo_HPFCone_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4570, void, CSharp_AkPositioningInfo_fMaxDistance_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D4620, float, CSharp_AkPositioningInfo_fMaxDistance_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D46C0, void, CSharp_AkPositioningInfo_fVolDryAtMaxDist_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D4770, float, CSharp_AkPositioningInfo_fVolDryAtMaxDist_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4810, void, CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D48C0, float, CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4960, void, CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D4A10, float, CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4AB0, void, CSharp_AkPositioningInfo_LPFValueAtMaxDist_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D4B60, float, CSharp_AkPositioningInfo_LPFValueAtMaxDist_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4C00, void, CSharp_AkPositioningInfo_HPFValueAtMaxDist_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D4CB0, float, CSharp_AkPositioningInfo_HPFValueAtMaxDist_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4D50, void*, CSharp_new_AkPositioningInfo, )
    IL2CPP_REGISTER_METHOD(0x018D4DE0, void, CSharp_delete_AkPositioningInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4E80, void, CSharp_AkObjectInfo_objID_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D4F30, uint32_t, CSharp_AkObjectInfo_objID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D4FD0, void, CSharp_AkObjectInfo_parentID_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D5080, uint32_t, CSharp_AkObjectInfo_parentID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D5120, void, CSharp_AkObjectInfo_iDepth_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D51D0, int32_t, CSharp_AkObjectInfo_iDepth_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D5270, void, CSharp_AkObjectInfo_Clear, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D5310, int32_t, CSharp_AkObjectInfo_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018D53A0, void, CSharp_AkObjectInfo_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D5450, void*, CSharp_new_AkObjectInfo, )
    IL2CPP_REGISTER_METHOD(0x018D54E0, void, CSharp_delete_AkObjectInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D5580, int32_t, CSharp_GetPosition, uint64_t jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D5630, int32_t, CSharp_GetListenerPosition, uint64_t jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D56E0, int32_t, CSharp_GetRTPCValue__SWIG_0, uint32_t jarg1, uint64_t jarg2, uint32_t jarg3, float* jarg4, int32_t* jarg5)
    IL2CPP_REGISTER_METHOD(0x018D57A0, int32_t, CSharp_GetRTPCValue__SWIG_1, app::String* jarg1, uint64_t jarg2, uint32_t jarg3, float* jarg4, int32_t* jarg5)
    IL2CPP_REGISTER_METHOD(0x018D5880, int32_t, CSharp_GetSwitch__SWIG_0, uint32_t jarg1, uint64_t jarg2, uint32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D5930, int32_t, CSharp_GetSwitch__SWIG_1, app::String* jarg1, uint64_t jarg2, uint32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D59F0, int32_t, CSharp_GetState__SWIG_0, uint32_t jarg1, uint32_t* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D5AA0, int32_t, CSharp_GetState__SWIG_1, app::String* jarg1, uint32_t* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D5B50, int32_t, CSharp_GetGameObjectAuxSendValues, uint64_t jarg1, void* jarg2, uint32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D5C00, int32_t, CSharp_GetGameObjectDryLevelValue, uint64_t jarg1, uint64_t jarg2, float* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D5CB0, int32_t, CSharp_GetObjectObstructionAndOcclusion, uint64_t jarg1, uint64_t jarg2, float* jarg3, float* jarg4)
    IL2CPP_REGISTER_METHOD(0x018D5D70, int32_t, CSharp_QueryAudioObjectIDs__SWIG_0, uint32_t jarg1, uint32_t* jarg2, void* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D5E20, int32_t, CSharp_QueryAudioObjectIDs__SWIG_1, app::String* jarg1, uint32_t* jarg2, void* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D5EE0, int32_t, CSharp_GetPositioningInfo, uint32_t jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D5F90, bool, CSharp_GetIsGameObjectActive, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6030, float, CSharp_GetMaxRadius, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D60D0, uint32_t, CSharp_GetEventIDFromPlayingID, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6170, uint64_t, CSharp_GetGameObjectFromPlayingID, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6210, int32_t, CSharp_GetPlayingIDsFromGameObject, uint64_t jarg1, uint32_t* jarg2, app::UInt32__Array* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D6340, int32_t, CSharp_GetCustomPropertyValue__SWIG_0, uint32_t jarg1, uint32_t jarg2, int32_t* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D63F0, int32_t, CSharp_GetCustomPropertyValue__SWIG_1, uint32_t jarg1, uint32_t jarg2, float* jarg3)
    IL2CPP_REGISTER_METHOD(0x018D64A0, void, CSharp_AK_SPEAKER_SETUP_FIX_LEFT_TO_CENTER, uint32_t* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6540, void, CSharp_AK_SPEAKER_SETUP_FIX_REAR_TO_SIDE, uint32_t* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D65E0, void, CSharp_AK_SPEAKER_SETUP_CONVERT_TO_SUPPORTED, uint32_t* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6680, uint8_t, CSharp_ChannelMaskToNumChannels, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6720, uint32_t, CSharp_ChannelMaskFromNumChannels, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D67C0, uint8_t, CSharp_ChannelBitToIndex, uint32_t jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D6860, bool, CSharp_HasSurroundChannels, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6900, bool, CSharp_HasStrictlyOnePairOfSurroundChannels, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D69A0, bool, CSharp_HasSideAndRearChannels, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6A40, bool, CSharp_HasHeightChannels, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6AE0, uint32_t, CSharp_BackToSideChannels, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6B80, uint32_t, CSharp_StdChannelIndexToDisplayIndex, int32_t jarg1, uint32_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018D6C30, void, CSharp_AkChannelConfig_uNumChannels_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D6CE0, uint32_t, CSharp_AkChannelConfig_uNumChannels_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6D80, void, CSharp_AkChannelConfig_eConfigType_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D6E30, uint32_t, CSharp_AkChannelConfig_eConfigType_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D6ED0, void, CSharp_AkChannelConfig_uChannelMask_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D6F80, uint32_t, CSharp_AkChannelConfig_uChannelMask_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D7020, void*, CSharp_new_AkChannelConfig__SWIG_0, )
    IL2CPP_REGISTER_METHOD(0x018D70B0, void*, CSharp_new_AkChannelConfig__SWIG_1, uint32_t jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D7150, void, CSharp_AkChannelConfig_Clear, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D71F0, void, CSharp_AkChannelConfig_SetStandard, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D72A0, void, CSharp_AkChannelConfig_SetStandardOrAnonymous, void* jarg1, uint32_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018D7350, void, CSharp_AkChannelConfig_SetAnonymous, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D7400, void, CSharp_AkChannelConfig_SetAmbisonic, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D74B0, bool, CSharp_AkChannelConfig_IsValid, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D7550, uint32_t, CSharp_AkChannelConfig_Serialize, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D75F0, void, CSharp_AkChannelConfig_Deserialize, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D76A0, void*, CSharp_AkChannelConfig_RemoveLFE, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D7740, void*, CSharp_AkChannelConfig_RemoveCenter, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D77E0, bool, CSharp_AkChannelConfig_IsChannelConfigSupported, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D7880, void, CSharp_delete_AkChannelConfig, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D7920, void*, CSharp_new_AkImageSourceParams__SWIG_0, )
    IL2CPP_REGISTER_METHOD(0x018D79B0, void*, CSharp_new_AkImageSourceParams__SWIG_1, void* jarg1, float jarg2, float jarg3)
    IL2CPP_REGISTER_METHOD(0x018D7A70, void, CSharp_AkImageSourceParams_sourcePosition_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D7B20, void*, CSharp_AkImageSourceParams_sourcePosition_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D7BC0, void, CSharp_AkImageSourceParams_fDistanceScalingFactor_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D7C70, float, CSharp_AkImageSourceParams_fDistanceScalingFactor_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D7D10, void, CSharp_AkImageSourceParams_fLevel_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D7DC0, float, CSharp_AkImageSourceParams_fLevel_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D7E60, void, CSharp_AkImageSourceParams_fDiffraction_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D7F10, float, CSharp_AkImageSourceParams_fDiffraction_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D7FB0, void, CSharp_AkImageSourceParams_uDiffractionEmitterSide_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D8060, uint8_t, CSharp_AkImageSourceParams_uDiffractionEmitterSide_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D8100, void, CSharp_AkImageSourceParams_uDiffractionListenerSide_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D81B0, uint8_t, CSharp_AkImageSourceParams_uDiffractionListenerSide_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D8250, void, CSharp_delete_AkImageSourceParams, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D82F0, float, CSharp_kDefaultMaxPathLength_get, )
    IL2CPP_REGISTER_METHOD(0x018D8380, uint32_t, CSharp_kDefaultDiffractionMaxEdges_get, )
    IL2CPP_REGISTER_METHOD(0x018D8410, uint32_t, CSharp_kDefaultDiffractionMaxPaths_get, )
    IL2CPP_REGISTER_METHOD(0x018D84A0, float, CSharp_kMaxDiffraction_get, )
    IL2CPP_REGISTER_METHOD(0x018D8530, uint32_t, CSharp_kListenerDiffractionMaxEdges_get, )
    IL2CPP_REGISTER_METHOD(0x018D85C0, uint32_t, CSharp_kListenerDiffractionMaxPaths_get, )
    IL2CPP_REGISTER_METHOD(0x018D8650, uint32_t, CSharp_kPortalToPortalDiffractionMaxPaths_get, )
    IL2CPP_REGISTER_METHOD(0x018D86E0, void, CSharp_g_SpatialAudioPoolId_set, int32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018D8780, int32_t, CSharp_g_SpatialAudioPoolId_get, )
    IL2CPP_REGISTER_METHOD(0x018D8810, int32_t, CSharp__ArrayPoolSpatialAudio_Get, )
    IL2CPP_REGISTER_METHOD(0x018D88A0, void*, CSharp_new__ArrayPoolSpatialAudio, )
    IL2CPP_REGISTER_METHOD(0x018D8930, void, CSharp_delete__ArrayPoolSpatialAudio, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D89D0, void*, CSharp_new_AkSpatialAudioInitSettings, )
    IL2CPP_REGISTER_METHOD(0x018D8A60, void, CSharp_AkSpatialAudioInitSettings_uPoolID_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D8B10, int32_t, CSharp_AkSpatialAudioInitSettings_uPoolID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D8BB0, void, CSharp_AkSpatialAudioInitSettings_uPoolSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D8C60, uint32_t, CSharp_AkSpatialAudioInitSettings_uPoolSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D8D00, void, CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D8DB0, uint32_t, CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D8E50, void, CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D8F00, uint32_t, CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D8FA0, void, CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D9050, float, CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D90F0, void, CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D91A0, float, CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D9240, void, CSharp_AkSpatialAudioInitSettings_fMovementThreshold_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D92F0, float, CSharp_AkSpatialAudioInitSettings_fMovementThreshold_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D9390, void, CSharp_delete_AkSpatialAudioInitSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D9430, void*, CSharp_new_AkImageSourceSettings__SWIG_0, )
    IL2CPP_REGISTER_METHOD(0x018D94C0, void*, CSharp_new_AkImageSourceSettings__SWIG_1, void* jarg1, float jarg2, float jarg3)
    IL2CPP_REGISTER_METHOD(0x018D9580, void, CSharp_delete_AkImageSourceSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D9620, void, CSharp_AkImageSourceSettings_SetOneTexture, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D96D0, void, CSharp_AkImageSourceSettings_SetName, void* jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D9850, void, CSharp_AkImageSourceSettings_params__set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018D9900, void*, CSharp_AkImageSourceSettings_params__get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D99A0, void*, CSharp_new_AkEmitterSettings, )
    IL2CPP_REGISTER_METHOD(0x018D9A30, void, CSharp_AkEmitterSettings_reflectAuxBusID_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D9AE0, uint32_t, CSharp_AkEmitterSettings_reflectAuxBusID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D9B80, void, CSharp_AkEmitterSettings_reflectionMaxPathLength_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D9C30, float, CSharp_AkEmitterSettings_reflectionMaxPathLength_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D9CD0, void, CSharp_AkEmitterSettings_reflectionsAuxBusGain_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018D9D80, float, CSharp_AkEmitterSettings_reflectionsAuxBusGain_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D9E20, void, CSharp_AkEmitterSettings_reflectionsOrder_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018D9ED0, uint32_t, CSharp_AkEmitterSettings_reflectionsOrder_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018D9F70, void, CSharp_AkEmitterSettings_reflectorFilterMask_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DA020, uint32_t, CSharp_AkEmitterSettings_reflectorFilterMask_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DA0C0, void, CSharp_AkEmitterSettings_roomReverbAuxBusGain_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DA170, float, CSharp_AkEmitterSettings_roomReverbAuxBusGain_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DA210, void, CSharp_AkEmitterSettings_diffractionMaxEdges_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DA2C0, uint32_t, CSharp_AkEmitterSettings_diffractionMaxEdges_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DA360, void, CSharp_AkEmitterSettings_diffractionMaxPaths_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DA410, uint32_t, CSharp_AkEmitterSettings_diffractionMaxPaths_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DA4B0, void, CSharp_AkEmitterSettings_diffractionMaxPathLength_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DA560, float, CSharp_AkEmitterSettings_diffractionMaxPathLength_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DA600, void, CSharp_AkEmitterSettings_useImageSources_set, void* jarg1, uint8_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DA6B0, uint8_t, CSharp_AkEmitterSettings_useImageSources_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DA750, void, CSharp_delete_AkEmitterSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DA7F0, void*, CSharp_new_AkVertex__SWIG_0, )
    IL2CPP_REGISTER_METHOD(0x018DA880, void*, CSharp_new_AkVertex__SWIG_1, float jarg1, float jarg2, float jarg3)
    IL2CPP_REGISTER_METHOD(0x018DA950, void, CSharp_AkVertex_X_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DAA00, float, CSharp_AkVertex_X_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DAAA0, void, CSharp_AkVertex_Y_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DAB50, float, CSharp_AkVertex_Y_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DABF0, void, CSharp_AkVertex_Z_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DACA0, float, CSharp_AkVertex_Z_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DAD40, void, CSharp_AkVertex_Clear, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DADE0, int32_t, CSharp_AkVertex_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018DAE70, void, CSharp_AkVertex_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DAF20, void, CSharp_delete_AkVertex, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DAFC0, void*, CSharp_new_AkTriangle__SWIG_0, )
    IL2CPP_REGISTER_METHOD(0x018DB050, void*, CSharp_new_AkTriangle__SWIG_1, uint16_t jarg1, uint16_t jarg2, uint16_t jarg3, uint16_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018DB120, void, CSharp_AkTriangle_point0_set, void* jarg1, uint16_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DB1D0, uint16_t, CSharp_AkTriangle_point0_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DB270, void, CSharp_AkTriangle_point1_set, void* jarg1, uint16_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DB320, uint16_t, CSharp_AkTriangle_point1_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DB3C0, void, CSharp_AkTriangle_point2_set, void* jarg1, uint16_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DB470, uint16_t, CSharp_AkTriangle_point2_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DB510, void, CSharp_AkTriangle_surface_set, void* jarg1, uint16_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DB5C0, uint16_t, CSharp_AkTriangle_surface_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DB660, void, CSharp_AkTriangle_Clear, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DB700, int32_t, CSharp_AkTriangle_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018DB790, void, CSharp_AkTriangle_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DB840, void, CSharp_delete_AkTriangle, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DB8E0, void*, CSharp_new_AkAcousticSurface, )
    IL2CPP_REGISTER_METHOD(0x018DB970, void, CSharp_AkAcousticSurface_textureID_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DBA20, uint32_t, CSharp_AkAcousticSurface_textureID_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DBAC0, void, CSharp_AkAcousticSurface_reflectorChannelMask_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DBB70, uint32_t, CSharp_AkAcousticSurface_reflectorChannelMask_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DBC10, void, CSharp_AkAcousticSurface_strName_set, void* jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DBD90, void*, CSharp_AkAcousticSurface_strName_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DBE30, void, CSharp_AkAcousticSurface_Clear, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DBED0, void, CSharp_AkAcousticSurface_DeleteName, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DBF70, int32_t, CSharp_AkAcousticSurface_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018DC000, void, CSharp_AkAcousticSurface_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DC0B0, void, CSharp_delete_AkAcousticSurface, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DC150, void, CSharp_AkReflectionPathInfo_imageSource_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DC200, void*, CSharp_AkReflectionPathInfo_imageSource_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DC2A0, void, CSharp_AkReflectionPathInfo_numPathPoints_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DC350, uint32_t, CSharp_AkReflectionPathInfo_numPathPoints_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DC3F0, void, CSharp_AkReflectionPathInfo_numReflections_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DC4A0, uint32_t, CSharp_AkReflectionPathInfo_numReflections_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DC540, void, CSharp_AkReflectionPathInfo_level_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DC5F0, float, CSharp_AkReflectionPathInfo_level_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DC690, void, CSharp_AkReflectionPathInfo_isOccluded_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018DC740, bool, CSharp_AkReflectionPathInfo_isOccluded_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DC7E0, int32_t, CSharp_AkReflectionPathInfo_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018DC870, void*, CSharp_AkReflectionPathInfo_GetPathPoint, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DC920, void*, CSharp_AkReflectionPathInfo_GetAcousticSurface, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DC9D0, float, CSharp_AkReflectionPathInfo_GetDiffraction, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DCA80, void, CSharp_AkReflectionPathInfo_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DCB30, void*, CSharp_new_AkReflectionPathInfo, )
    IL2CPP_REGISTER_METHOD(0x018DCBC0, void, CSharp_delete_AkReflectionPathInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DCC60, void, CSharp_AkDiffractionPathInfo_virtualPos_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DCD10, void*, CSharp_AkDiffractionPathInfo_virtualPos_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DCDB0, void, CSharp_AkDiffractionPathInfo_nodeCount_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DCE60, uint32_t, CSharp_AkDiffractionPathInfo_nodeCount_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DCF00, void, CSharp_AkDiffractionPathInfo_diffraction_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DCFB0, float, CSharp_AkDiffractionPathInfo_diffraction_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DD050, void, CSharp_AkDiffractionPathInfo_totLength_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DD100, float, CSharp_AkDiffractionPathInfo_totLength_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DD1A0, void, CSharp_AkDiffractionPathInfo_obstructionValue_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DD250, float, CSharp_AkDiffractionPathInfo_obstructionValue_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DD2F0, int32_t, CSharp_AkDiffractionPathInfo_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018DD380, void*, CSharp_AkDiffractionPathInfo_GetNodes, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DD430, float, CSharp_AkDiffractionPathInfo_GetAngles, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DD4E0, uint64_t, CSharp_AkDiffractionPathInfo_GetPortals, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DD590, uint64_t, CSharp_AkDiffractionPathInfo_GetRooms, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DD640, void, CSharp_AkDiffractionPathInfo_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DD6F0, void*, CSharp_new_AkDiffractionPathInfo, )
    IL2CPP_REGISTER_METHOD(0x018DD780, void, CSharp_delete_AkDiffractionPathInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DD820, void*, CSharp_new_AkRoomParams, )
    IL2CPP_REGISTER_METHOD(0x018DD8B0, void, CSharp_AkRoomParams_Up_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DD960, void*, CSharp_AkRoomParams_Up_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DDA00, void, CSharp_AkRoomParams_Front_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DDAB0, void*, CSharp_AkRoomParams_Front_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DDB50, void, CSharp_AkRoomParams_ReverbAuxBus_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DDC00, uint32_t, CSharp_AkRoomParams_ReverbAuxBus_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DDCA0, void, CSharp_AkRoomParams_ReverbLevel_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DDD50, float, CSharp_AkRoomParams_ReverbLevel_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DDDF0, void, CSharp_AkRoomParams_WallOcclusion_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DDEA0, float, CSharp_AkRoomParams_WallOcclusion_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DDF40, void, CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DDFF0, float, CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DE090, void, CSharp_AkRoomParams_RoomGameObj_KeepRegistered_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018DE140, bool, CSharp_AkRoomParams_RoomGameObj_KeepRegistered_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DE1E0, void, CSharp_delete_AkRoomParams, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DE280, int32_t, CSharp_GetPoolID, )
    IL2CPP_REGISTER_METHOD(0x018DE310, int32_t, CSharp_RegisterEmitter, uint64_t jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DE3C0, int32_t, CSharp_UnregisterEmitter, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018DE460, int32_t, CSharp_SetEmitterAuxSendValues, uint64_t jarg1, void* jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018DE510, int32_t, CSharp_SetImageSource__SWIG_0, uint32_t jarg1, void* jarg2, uint32_t jarg3, uint64_t jarg4, uint64_t jarg5)
    IL2CPP_REGISTER_METHOD(0x018DE5D0, int32_t, CSharp_SetImageSource__SWIG_1, uint32_t jarg1, void* jarg2, uint32_t jarg3, uint64_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018DE690, int32_t, CSharp_RemoveImageSource__SWIG_0, uint32_t jarg1, uint32_t jarg2, uint64_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018DE740, int32_t, CSharp_RemoveImageSource__SWIG_1, uint32_t jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DE7E0, int32_t, CSharp_RemoveGeometry, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018DE880, int32_t, CSharp_QueryReflectionPaths, uint64_t jarg1, void* jarg2, void* jarg3, void* jarg4, uint32_t* jarg5)
    IL2CPP_REGISTER_METHOD(0x018DE950, int32_t, CSharp_RemoveRoom, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018DE9F0, int32_t, CSharp_RemovePortal, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018DEA90, int32_t, CSharp_SetGameObjectInRoom, uint64_t jarg1, uint64_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DEB40, int32_t, CSharp_SetEmitterObstructionAndOcclusion, uint64_t jarg1, float jarg2, float jarg3)
    IL2CPP_REGISTER_METHOD(0x018DEC00, int32_t, CSharp_SetPortalObstructionAndOcclusion, uint64_t jarg1, float jarg2, float jarg3)
    IL2CPP_REGISTER_METHOD(0x018DECC0, int32_t, CSharp_QueryWetDiffraction, uint64_t jarg1, float* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DED70, void, CSharp_AkPlatformInitSettings_threadLEngine_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DEE20, void*, CSharp_AkPlatformInitSettings_threadLEngine_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DEEC0, void, CSharp_AkPlatformInitSettings_threadOutputMgr_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DEF70, void*, CSharp_AkPlatformInitSettings_threadOutputMgr_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DF010, void, CSharp_AkPlatformInitSettings_threadBankManager_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DF0C0, void*, CSharp_AkPlatformInitSettings_threadBankManager_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DF160, void, CSharp_AkPlatformInitSettings_threadMonitor_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DF210, void*, CSharp_AkPlatformInitSettings_threadMonitor_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DF2B0, void, CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DF360, uint32_t, CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DF400, void, CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018DF4B0, float, CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DF550, void, CSharp_AkPlatformInitSettings_uNumRefillsInVoice_set, void* jarg1, uint16_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DF600, uint16_t, CSharp_AkPlatformInitSettings_uNumRefillsInVoice_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DF6A0, void, CSharp_AkPlatformInitSettings_uSampleRate_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DF750, uint32_t, CSharp_AkPlatformInitSettings_uSampleRate_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DF7F0, void, CSharp_AkPlatformInitSettings_eAudioAPI_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DF8A0, int32_t, CSharp_AkPlatformInitSettings_eAudioAPI_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DF940, void, CSharp_AkPlatformInitSettings_bGlobalFocus_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018DF9F0, bool, CSharp_AkPlatformInitSettings_bGlobalFocus_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DFA90, void*, CSharp_new_AkPlatformInitSettings, )
    IL2CPP_REGISTER_METHOD(0x018DFB20, void, CSharp_delete_AkPlatformInitSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DFBC0, uint32_t, CSharp_GetDeviceIDFromName, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018DFC70, void*, CSharp_GetWindowsDeviceName__SWIG_0, int32_t jarg1, uint32_t* jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018DFD20, void*, CSharp_GetWindowsDeviceName__SWIG_1, int32_t jarg1, uint32_t* jarg2)
    IL2CPP_REGISTER_METHOD(0x018DFDD0, uint32_t, CSharp_GetWindowsDeviceCount__SWIG_0, int32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018DFE70, uint32_t, CSharp_GetWindowsDeviceCount__SWIG_1, )
    IL2CPP_REGISTER_METHOD(0x018DFF00, void, CSharp_AkStreamMgrSettings_uMemorySize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018DFFB0, uint32_t, CSharp_AkStreamMgrSettings_uMemorySize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0050, void*, CSharp_new_AkStreamMgrSettings, )
    IL2CPP_REGISTER_METHOD(0x018E00E0, void, CSharp_delete_AkStreamMgrSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0180, void, CSharp_AkDeviceSettings_pIOMemory_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E0230, void*, CSharp_AkDeviceSettings_pIOMemory_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E02D0, void, CSharp_AkDeviceSettings_uIOMemorySize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E0380, uint32_t, CSharp_AkDeviceSettings_uIOMemorySize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0420, void, CSharp_AkDeviceSettings_uIOMemoryAlignment_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E04D0, uint32_t, CSharp_AkDeviceSettings_uIOMemoryAlignment_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0570, void, CSharp_AkDeviceSettings_ePoolAttributes_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E0620, int32_t, CSharp_AkDeviceSettings_ePoolAttributes_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E06C0, void, CSharp_AkDeviceSettings_uGranularity_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E0770, uint32_t, CSharp_AkDeviceSettings_uGranularity_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0810, void, CSharp_AkDeviceSettings_uSchedulerTypeFlags_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E08C0, uint32_t, CSharp_AkDeviceSettings_uSchedulerTypeFlags_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0960, void, CSharp_AkDeviceSettings_threadProperties_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E0A10, void*, CSharp_AkDeviceSettings_threadProperties_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0AB0, void, CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_set, void* jarg1, float jarg2)
    IL2CPP_REGISTER_METHOD(0x018E0B60, float, CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0C00, void, CSharp_AkDeviceSettings_uMaxConcurrentIO_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E0CB0, uint32_t, CSharp_AkDeviceSettings_uMaxConcurrentIO_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0D50, void, CSharp_AkDeviceSettings_bUseStreamCache_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018E0E00, bool, CSharp_AkDeviceSettings_bUseStreamCache_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0EA0, void, CSharp_AkDeviceSettings_uMaxCachePinnedBytes_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E0F50, uint32_t, CSharp_AkDeviceSettings_uMaxCachePinnedBytes_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E0FF0, void*, CSharp_new_AkDeviceSettings, )
    IL2CPP_REGISTER_METHOD(0x018E1080, void, CSharp_delete_AkDeviceSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E1120, void, CSharp_AkThreadProperties_nPriority_set, void* jarg1, int32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E11D0, int32_t, CSharp_AkThreadProperties_nPriority_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E1270, void, CSharp_AkThreadProperties_dwAffinityMask_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E1320, uint32_t, CSharp_AkThreadProperties_dwAffinityMask_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E13C0, void, CSharp_AkThreadProperties_uStackSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E1470, uint32_t, CSharp_AkThreadProperties_uStackSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E1510, void*, CSharp_new_AkThreadProperties, )
    IL2CPP_REGISTER_METHOD(0x018E15A0, void, CSharp_delete_AkThreadProperties, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E1640, void, CSharp_SetErrorLogger__SWIG_0, app::AkLogger_ErrorLoggerInteropDelegate* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E16E0, void, CSharp_SetErrorLogger__SWIG_1, )
    IL2CPP_REGISTER_METHOD(
        0x018E1770,
        void,
        CSharp_SetAudioInputCallbacks,
        app::AkAudioInputManager_AudioSamplesInteropDelegate* jarg1,
        app::AkAudioInputManager_AudioFormatInteropDelegate* jarg2
    )
    IL2CPP_REGISTER_METHOD(0x018E1830, void, CSharp_AkPathParams_listenerPos_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E18E0, void*, CSharp_AkPathParams_listenerPos_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E1980, void, CSharp_AkPathParams_emitterPos_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E1A30, void*, CSharp_AkPathParams_emitterPos_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E1AD0, void, CSharp_AkPathParams_numValidPaths_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E1B80, uint32_t, CSharp_AkPathParams_numValidPaths_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E1C20, void*, CSharp_new_AkPathParams, )
    IL2CPP_REGISTER_METHOD(0x018E1CB0, void, CSharp_delete_AkPathParams, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E1D50, void*, CSharp_new_AkUnityPlatformSpecificSettings, )
    IL2CPP_REGISTER_METHOD(0x018E1DE0, void, CSharp_delete_AkUnityPlatformSpecificSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E1E80, void*, CSharp_new_AkCommunicationSettings, )
    IL2CPP_REGISTER_METHOD(0x018E1F10, void, CSharp_AkCommunicationSettings_uPoolSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E1FC0, uint32_t, CSharp_AkCommunicationSettings_uPoolSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E2060, void, CSharp_AkCommunicationSettings_uDiscoveryBroadcastPort_set, void* jarg1, uint16_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E2110, uint16_t, CSharp_AkCommunicationSettings_uDiscoveryBroadcastPort_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E21B0, void, CSharp_AkCommunicationSettings_uCommandPort_set, void* jarg1, uint16_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E2260, uint16_t, CSharp_AkCommunicationSettings_uCommandPort_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E2300, void, CSharp_AkCommunicationSettings_uNotificationPort_set, void* jarg1, uint16_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E23B0, uint16_t, CSharp_AkCommunicationSettings_uNotificationPort_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E2450, void, CSharp_AkCommunicationSettings_bInitSystemLib_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018E2500, bool, CSharp_AkCommunicationSettings_bInitSystemLib_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E25A0, void, CSharp_AkCommunicationSettings_szAppNetworkName_set, void* jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E2720, void*, CSharp_AkCommunicationSettings_szAppNetworkName_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E27C0, void, CSharp_delete_AkCommunicationSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E2860, void*, CSharp_new_AkInitializationSettings, )
    IL2CPP_REGISTER_METHOD(0x018E28F0, void, CSharp_delete_AkInitializationSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E2990, void, CSharp_AkInitializationSettings_memSettings_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E2A40, void*, CSharp_AkInitializationSettings_memSettings_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E2AE0, void, CSharp_AkInitializationSettings_streamMgrSettings_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E2B90, void*, CSharp_AkInitializationSettings_streamMgrSettings_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E2C30, void, CSharp_AkInitializationSettings_deviceSettings_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E2CE0, void*, CSharp_AkInitializationSettings_deviceSettings_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E2D80, void, CSharp_AkInitializationSettings_initSettings_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E2E30, void*, CSharp_AkInitializationSettings_initSettings_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E2ED0, void, CSharp_AkInitializationSettings_platformSettings_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E2F80, void*, CSharp_AkInitializationSettings_platformSettings_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3020, void, CSharp_AkInitializationSettings_musicSettings_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E30D0, void*, CSharp_AkInitializationSettings_musicSettings_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3170, void, CSharp_AkInitializationSettings_preparePoolSize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E3220, uint32_t, CSharp_AkInitializationSettings_preparePoolSize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E32C0, void, CSharp_AkInitializationSettings_unityPlatformSpecificSettings_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E3370, void*, CSharp_AkInitializationSettings_unityPlatformSpecificSettings_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3410, void, CSharp_AkInitializationSettings_useAsyncOpen_set, void* jarg1, bool jarg2)
    IL2CPP_REGISTER_METHOD(0x018E34C0, bool, CSharp_AkInitializationSettings_useAsyncOpen_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3560, void*, CSharp_new_AkExternalSourceInfo__SWIG_0, )
    IL2CPP_REGISTER_METHOD(0x018E35F0, void, CSharp_delete_AkExternalSourceInfo, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3690, void*, CSharp_new_AkExternalSourceInfo__SWIG_1, void* jarg1, uint32_t jarg2, uint32_t jarg3, uint32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018E3750, void*, CSharp_new_AkExternalSourceInfo__SWIG_2, app::String* jarg1, uint32_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018E3810, void*, CSharp_new_AkExternalSourceInfo__SWIG_3, uint32_t jarg1, uint32_t jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018E38C0, void, CSharp_AkExternalSourceInfo_Clear, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3960, void, CSharp_AkExternalSourceInfo_Clone, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E3A10, int32_t, CSharp_AkExternalSourceInfo_GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x018E3AA0, void, CSharp_AkExternalSourceInfo_iExternalSrcCookie_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E3B50, uint32_t, CSharp_AkExternalSourceInfo_iExternalSrcCookie_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3BF0, void, CSharp_AkExternalSourceInfo_idCodec_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E3CA0, uint32_t, CSharp_AkExternalSourceInfo_idCodec_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3D40, void, CSharp_AkExternalSourceInfo_szFile_set, void* jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E3DF0, void*, CSharp_AkExternalSourceInfo_szFile_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3E90, void, CSharp_AkExternalSourceInfo_pInMemory_set, void* jarg1, void* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E3F40, void*, CSharp_AkExternalSourceInfo_pInMemory_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E3FE0, void, CSharp_AkExternalSourceInfo_uiMemorySize_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E4090, uint32_t, CSharp_AkExternalSourceInfo_uiMemorySize_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4130, void, CSharp_AkExternalSourceInfo_idFile_set, void* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E41E0, uint32_t, CSharp_AkExternalSourceInfo_idFile_get, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4280, int32_t, CSharp_Init, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4320, int32_t, CSharp_InitSpatialAudio, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E43C0, int32_t, CSharp_InitCommunication, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4460, void, CSharp_Term, )
    IL2CPP_REGISTER_METHOD(0x018E44F0, int32_t, CSharp_RegisterGameObjInternal, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4590, int32_t, CSharp_UnregisterGameObjInternal, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4630, int32_t, CSharp_RegisterGameObjInternal_WithName, uint64_t jarg1, app::String* jarg2)
    IL2CPP_REGISTER_METHOD(0x018E46E0, int32_t, CSharp_SetBasePath, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4790, int32_t, CSharp_SetCurrentLanguage, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4840, int32_t, CSharp_LoadFilePackage, app::String* jarg1, uint32_t* jarg2, int32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018E4900, int32_t, CSharp_AddBasePath, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E49B0, int32_t, CSharp_SetGameName, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4A60, int32_t, CSharp_SetDecodedBankPath, app::String* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4B10, int32_t, CSharp_LoadAndDecodeBank, app::String* jarg1, bool jarg2, uint32_t* jarg3)
    IL2CPP_REGISTER_METHOD(
        0x018E4BD0,
        int32_t,
        CSharp_LoadAndDecodeBankFromMemory,
        void* jarg1,
        uint32_t jarg2,
        bool jarg3,
        app::String* jarg4,
        bool jarg5,
        uint32_t* jarg6
    )
    IL2CPP_REGISTER_METHOD(0x018E4CC0, void*, CSharp_GetCurrentLanguage, )
    IL2CPP_REGISTER_METHOD(0x018E4D50, int32_t, CSharp_UnloadFilePackage, uint32_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018E4DF0, int32_t, CSharp_UnloadAllFilePackages, )
    IL2CPP_REGISTER_METHOD(
        0x018E4E80,
        int32_t,
        CSharp_SetObjectPosition,
        uint64_t jarg1,
        float jarg2,
        float jarg3,
        float jarg4,
        float jarg5,
        float jarg6,
        float jarg7,
        float jarg8,
        float jarg9,
        float jarg10
    )
    IL2CPP_REGISTER_METHOD(
        0x018E4F50,
        int32_t,
        CSharp_GetSourceMultiplePlayPositions,
        uint32_t jarg1,
        app::UInt32__Array* jarg2,
        app::UInt32__Array* jarg3,
        app::Int32__Array* jarg4,
        uint32_t* jarg5,
        bool jarg6
    )
    IL2CPP_REGISTER_METHOD(0x018E5180, int32_t, CSharp_SetListeners, uint64_t jarg1, app::UInt64__Array* jarg2, uint32_t jarg3)
    IL2CPP_REGISTER_METHOD(0x018E5240, int32_t, CSharp_SetDefaultListeners, app::UInt64__Array* jarg1, uint32_t jarg2)
    IL2CPP_REGISTER_METHOD(0x018E52F0, int32_t, CSharp_AddOutput, void* jarg1, uint64_t* jarg2, app::UInt64__Array* jarg3, uint32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018E53C0, void, CSharp_GetDefaultStreamSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E5460, void, CSharp_GetDefaultDeviceSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E5500, void, CSharp_GetDefaultMusicSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E55A0, void, CSharp_GetDefaultInitSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E5640, void, CSharp_GetDefaultPlatformInitSettings, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E56E0, uint32_t, CSharp_GetMajorMinorVersion, )
    IL2CPP_REGISTER_METHOD(0x018E5770, uint32_t, CSharp_GetSubminorBuildVersion, )
    IL2CPP_REGISTER_METHOD(0x018E5800, int32_t, CSharp_QueryIndirectPaths, uint64_t jarg1, void* jarg2, void* jarg3, uint32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018E58C0, int32_t, CSharp_QueryDiffractionPaths, uint64_t jarg1, void* jarg2, void* jarg3, uint32_t jarg4)
    IL2CPP_REGISTER_METHOD(0x018E5980, int32_t, CSharp_SetRoomPortal, uint64_t jarg1, void* jarg2, void* jarg3, bool jarg4, uint64_t jarg5, uint64_t jarg6)
    IL2CPP_REGISTER_METHOD(0x018E5A50, int32_t, CSharp_SetRoom, uint64_t jarg1, void* jarg2, app::String* jarg3)
    IL2CPP_REGISTER_METHOD(0x018E5BE0, int32_t, CSharp_RegisterSpatialAudioListener, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(0x018E5C80, int32_t, CSharp_UnregisterSpatialAudioListener, uint64_t jarg1)
    IL2CPP_REGISTER_METHOD(
        0x018E5D20,
        int32_t,
        CSharp_SetGeometry,
        uint64_t jarg1,
        void* jarg2,
        uint32_t jarg3,
        void* jarg4,
        uint32_t jarg5,
        void* jarg6,
        uint32_t jarg7,
        uint64_t jarg8,
        bool jarg9,
        bool jarg10
    )
    IL2CPP_REGISTER_METHOD(0x018E5E10, void*, CSharp_AkPlaylist_SWIGUpcast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E5EB0, void*, CSharp_AkMIDIPost_SWIGUpcast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E5F50, void*, CSharp_AkEventCallbackInfo_SWIGUpcast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E5FF0, void*, CSharp_AkMIDIEventCallbackInfo_SWIGUpcast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E6090, void*, CSharp_AkMarkerCallbackInfo_SWIGUpcast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E6130, void*, CSharp_AkDurationCallbackInfo_SWIGUpcast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E61D0, void*, CSharp_AkDynamicSequenceItemCallbackInfo_SWIGUpcast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E6270, void*, CSharp_AkMusicSyncCallbackInfo_SWIGUpcast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x018E6310, void*, CSharp_AkMusicPlaylistCallbackInfo_SWIGUpcast, void* jarg1)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AkSoundEnginePINVOKE* this_ptr)
} // namespace app::classes::AkSoundEnginePINVOKE
