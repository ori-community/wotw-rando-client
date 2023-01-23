#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMonitorErrorCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMonitorErrorCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMonitorErrorCode__Enum_DEFINED)
#define IL2CPP_STRUCT_AkMonitorErrorCode__Enum_DEFINED
enum class AkMonitorErrorCode__Enum : int32_t {
    ErrorCode_NoError = 0x00000000,
    ErrorCode_FileNotFound = 0x00000001,
    ErrorCode_CannotOpenFile = 0x00000002,
    ErrorCode_CannotStartStreamNoMemory = 0x00000003,
    ErrorCode_IODevice = 0x00000004,
    ErrorCode_IncompatibleIOSettings = 0x00000005,
    ErrorCode_PluginUnsupportedChannelConfiguration = 0x00000006,
    ErrorCode_PluginMediaUnavailable = 0x00000007,
    ErrorCode_PluginInitialisationFailed = 0x00000008,
    ErrorCode_PluginProcessingFailed = 0x00000009,
    ErrorCode_PluginExecutionInvalid = 0x0000000a,
    ErrorCode_PluginAllocationFailed = 0x0000000b,
    ErrorCode_VorbisRequireSeekTable = 0x0000000c,
    ErrorCode_VorbisDecodeError = 0x0000000d,
    ErrorCode_AACDecodeError = 0x0000000e,
    ErrorCode_xWMACreateDecoderFailed = 0x0000000f,
    ErrorCode_ATRAC9CreateDecoderFailed = 0x00000010,
    ErrorCode_ATRAC9CreateDecoderFailedChShortage = 0x00000011,
    ErrorCode_ATRAC9DecodeFailed = 0x00000012,
    ErrorCode_ATRAC9ClearContextFailed = 0x00000013,
    ErrorCode_ATRAC9LoopSectionTooSmall = 0x00000014,
    ErrorCode_InvalidAudioFileHeader = 0x00000015,
    ErrorCode_AudioFileHeaderTooLarge = 0x00000016,
    ErrorCode_FileTooSmall = 0x00000017,
    ErrorCode_TransitionNotAccurateChannel = 0x00000018,
    ErrorCode_TransitionNotAccurateStarvation = 0x00000019,
    ErrorCode_NothingToPlay = 0x0000001a,
    ErrorCode_PlayFailed = 0x0000001b,
    ErrorCode_StingerCouldNotBeScheduled = 0x0000001c,
    ErrorCode_TooLongSegmentLookAhead = 0x0000001d,
    ErrorCode_CannotScheduleMusicSwitch = 0x0000001e,
    ErrorCode_TooManySimultaneousMusicSegments = 0x0000001f,
    ErrorCode_PlaylistStoppedForEditing = 0x00000020,
    ErrorCode_MusicClipsRescheduledAfterTrackEdit = 0x00000021,
    ErrorCode_CannotPlaySource_Create = 0x00000022,
    ErrorCode_CannotPlaySource_VirtualOff = 0x00000023,
    ErrorCode_CannotPlaySource_TimeSkip = 0x00000024,
    ErrorCode_CannotPlaySource_InconsistentState = 0x00000025,
    ErrorCode_MediaNotLoaded = 0x00000026,
    ErrorCode_VoiceStarving = 0x00000027,
    ErrorCode_StreamingSourceStarving = 0x00000028,
    ErrorCode_XMADecoderSourceStarving = 0x00000029,
    ErrorCode_XMADecodingError = 0x0000002a,
    ErrorCode_InvalidXMAData = 0x0000002b,
    ErrorCode_PluginNotRegistered = 0x0000002c,
    ErrorCode_CodecNotRegistered = 0x0000002d,
    ErrorCode_PluginVersionMismatch = 0x0000002e,
    ErrorCode_EventIDNotFound = 0x0000002f,
    ErrorCode_InvalidGroupID = 0x00000030,
    ErrorCode_SelectedChildNotAvailable = 0x00000031,
    ErrorCode_SelectedNodeNotAvailable = 0x00000032,
    ErrorCode_SelectedMediaNotAvailable = 0x00000033,
    ErrorCode_NoValidSwitch = 0x00000034,
    ErrorCode_SelectedNodeNotAvailablePlay = 0x00000035,
    ErrorCode_FeedbackVoiceStarving = 0x00000036,
    ErrorCode_BankLoadFailed = 0x00000037,
    ErrorCode_BankUnloadFailed = 0x00000038,
    ErrorCode_ErrorWhileLoadingBank = 0x00000039,
    ErrorCode_InsufficientSpaceToLoadBank = 0x0000003a,
    ErrorCode_LowerEngineCommandListFull = 0x0000003b,
    ErrorCode_SeekNoMarker = 0x0000003c,
    ErrorCode_CannotSeekContinuous = 0x0000003d,
    ErrorCode_SeekAfterEof = 0x0000003e,
    ErrorCode_UnknownGameObject = 0x0000003f,
    ErrorCode_UnknownEmitter = 0x00000040,
    ErrorCode_UnknownListener = 0x00000041,
    ErrorCode_GameObjectIsNotListener = 0x00000042,
    ErrorCode_GameObjectIsNotEmitter = 0x00000043,
    ErrorCode_UnknownGameObjectEvent = 0x00000044,
    ErrorCode_GameObjectIsNotEmitterEvent = 0x00000045,
    ErrorCode_ExternalSourceNotResolved = 0x00000046,
    ErrorCode_FileFormatMismatch = 0x00000047,
    ErrorCode_CommandQueueFull = 0x00000048,
    ErrorCode_CommandTooLarge = 0x00000049,
    ErrorCode_XMACreateDecoderLimitReached = 0x0000004a,
    ErrorCode_XMAStreamBufferTooSmall = 0x0000004b,
    ErrorCode_ModulatorScopeError_Inst = 0x0000004c,
    ErrorCode_ModulatorScopeError_Obj = 0x0000004d,
    ErrorCode_SeekAfterEndOfPlaylist = 0x0000004e,
    ErrorCode_OpusRequireSeekTable = 0x0000004f,
    ErrorCode_OpusDecodeError = 0x00000050,
    ErrorCode_OpusCreateDecoderFailed = 0x00000051,
    ErrorCode_SourcePluginNotFound = 0x00000052,
    ErrorCode_VirtualVoiceLimit = 0x00000053,
    ErrorCode_AudioDeviceShareSetNotFound = 0x00000054,
    ErrorCode_NotEnoughMemoryToStart = 0x00000055,
    ErrorCode_UnkownOpusError = 0x00000056,
    ErrorCode_AudioDeviceInitFailure = 0x00000057,
    ErrorCode_AudioDeviceRemoveFailure = 0x00000058,
    ErrorCode_AudioDeviceNotFound = 0x00000059,
    ErrorCode_AudioDeviceNotValid = 0x0000005a,
    ErrorCode_MediaDuplicationLength = 0x0000005b,
    Num_ErrorCodes = 0x0000005c,
};
#endif
#if !defined(IL2CPP_STRUCT_AkMonitorErrorCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkMonitorErrorCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkMonitorErrorCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMonitorErrorCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkMonitorErrorCode__Enum_FWDDECL)
#include <Modloader/app/structs/AkMonitorErrorCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMonitorErrorCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
