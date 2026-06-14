#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AKRESULT__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AKRESULT__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AKRESULT__Enum_DEFINED)
#define IL2CPP_STRUCT_AKRESULT__Enum_DEFINED
enum class AKRESULT__Enum : int32_t {
    AK_NotImplemented = 0x00000000,
    AK_Success = 0x00000001,
    AK_Fail = 0x00000002,
    AK_PartialSuccess = 0x00000003,
    AK_NotCompatible = 0x00000004,
    AK_AlreadyConnected = 0x00000005,
    AK_InvalidFile = 0x00000007,
    AK_AudioFileHeaderTooLarge = 0x00000008,
    AK_MaxReached = 0x00000009,
    AK_InvalidID = 0x0000000e,
    AK_IDNotFound = 0x0000000f,
    AK_InvalidInstanceID = 0x00000010,
    AK_NoMoreData = 0x00000011,
    AK_InvalidStateGroup = 0x00000014,
    AK_ChildAlreadyHasAParent = 0x00000015,
    AK_InvalidLanguage = 0x00000016,
    AK_CannotAddItseflAsAChild = 0x00000017,
    AK_InvalidParameter = 0x0000001f,
    AK_ElementAlreadyInList = 0x00000023,
    AK_PathNotFound = 0x00000024,
    AK_PathNoVertices = 0x00000025,
    AK_PathNotRunning = 0x00000026,
    AK_PathNotPaused = 0x00000027,
    AK_PathNodeAlreadyInList = 0x00000028,
    AK_PathNodeNotInList = 0x00000029,
    AK_DataNeeded = 0x0000002b,
    AK_NoDataNeeded = 0x0000002c,
    AK_DataReady = 0x0000002d,
    AK_NoDataReady = 0x0000002e,
    AK_InsufficientMemory = 0x00000034,
    AK_Cancelled = 0x00000035,
    AK_UnknownBankID = 0x00000036,
    AK_BankReadError = 0x00000038,
    AK_InvalidSwitchType = 0x00000039,
    AK_FormatNotReady = 0x0000003f,
    AK_WrongBankVersion = 0x00000040,
    AK_FileNotFound = 0x00000042,
    AK_DeviceNotReady = 0x00000043,
    AK_BankAlreadyLoaded = 0x00000045,
    AK_RenderedFX = 0x00000047,
    AK_ProcessNeeded = 0x00000048,
    AK_ProcessDone = 0x00000049,
    AK_MemManagerNotInitialized = 0x0000004a,
    AK_StreamMgrNotInitialized = 0x0000004b,
    AK_SSEInstructionsNotSupported = 0x0000004c,
    AK_Busy = 0x0000004d,
    AK_UnsupportedChannelConfig = 0x0000004e,
    AK_PluginMediaNotAvailable = 0x0000004f,
    AK_MustBeVirtualized = 0x00000050,
    AK_CommandTooLarge = 0x00000051,
    AK_RejectedByFilter = 0x00000052,
    AK_InvalidCustomPlatformName = 0x00000053,
    AK_DLLCannotLoad = 0x00000054,
    AK_DLLPathNotFound = 0x00000055,
    AK_NoJavaVM = 0x00000056,
    AK_OpenSLError = 0x00000057,
    AK_PluginNotRegistered = 0x00000058,
    AK_DataAlignmentError = 0x00000059,
    AK_DeviceNotCompatible = 0x0000005a,
    AK_DuplicateUniqueID = 0x0000005b,
    AK_InitBankNotLoaded = 0x0000005c,
    AK_DeviceNotFound = 0x0000005d,
    AK_InvalidFloatValue = 0x0000005e,
};
#endif
#if !defined(IL2CPP_STRUCT_AKRESULT__Enum_FWDDECL)
#define IL2CPP_STRUCT_AKRESULT__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AKRESULT__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AKRESULT__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AKRESULT__Enum_FWDDECL)
#include <Modloader/app/structs/AKRESULT__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AKRESULT__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
