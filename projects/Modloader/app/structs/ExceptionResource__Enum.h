#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionResource__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionResource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionResource__Enum_DEFINED)
#define IL2CPP_STRUCT_ExceptionResource__Enum_DEFINED
enum class ExceptionResource__Enum : int32_t {
    Argument_ImplementIComparable = 0x00000000,
    Argument_InvalidType = 0x00000001,
    Argument_InvalidArgumentForComparison = 0x00000002,
    Argument_InvalidRegistryKeyPermissionCheck = 0x00000003,
    ArgumentOutOfRange_NeedNonNegNum = 0x00000004,
    Arg_ArrayPlusOffTooSmall = 0x00000005,
    Arg_NonZeroLowerBound = 0x00000006,
    Arg_RankMultiDimNotSupported = 0x00000007,
    Arg_RegKeyDelHive = 0x00000008,
    Arg_RegKeyStrLenBug = 0x00000009,
    Arg_RegSetStrArrNull = 0x0000000a,
    Arg_RegSetMismatchedKind = 0x0000000b,
    Arg_RegSubKeyAbsent = 0x0000000c,
    Arg_RegSubKeyValueAbsent = 0x0000000d,
    Argument_AddingDuplicate = 0x0000000e,
    Serialization_InvalidOnDeser = 0x0000000f,
    Serialization_MissingKeys = 0x00000010,
    Serialization_NullKey = 0x00000011,
    Argument_InvalidArrayType = 0x00000012,
    NotSupported_KeyCollectionSet = 0x00000013,
    NotSupported_ValueCollectionSet = 0x00000014,
    ArgumentOutOfRange_SmallCapacity = 0x00000015,
    ArgumentOutOfRange_Index = 0x00000016,
    Argument_InvalidOffLen = 0x00000017,
    Argument_ItemNotExist = 0x00000018,
    ArgumentOutOfRange_Count = 0x00000019,
    ArgumentOutOfRange_InvalidThreshold = 0x0000001a,
    ArgumentOutOfRange_ListInsert = 0x0000001b,
    NotSupported_ReadOnlyCollection = 0x0000001c,
    InvalidOperation_CannotRemoveFromStackOrQueue = 0x0000001d,
    InvalidOperation_EmptyQueue = 0x0000001e,
    InvalidOperation_EnumOpCantHappen = 0x0000001f,
    InvalidOperation_EnumFailedVersion = 0x00000020,
    InvalidOperation_EmptyStack = 0x00000021,
    ArgumentOutOfRange_BiggerThanCollection = 0x00000022,
    InvalidOperation_EnumNotStarted = 0x00000023,
    InvalidOperation_EnumEnded = 0x00000024,
    NotSupported_SortedListNestedWrite = 0x00000025,
    InvalidOperation_NoValue = 0x00000026,
    InvalidOperation_RegRemoveSubKey = 0x00000027,
    Security_RegistryPermission = 0x00000028,
    UnauthorizedAccess_RegistryNoWrite = 0x00000029,
    ObjectDisposed_RegKeyClosed = 0x0000002a,
    NotSupported_InComparableType = 0x0000002b,
    Argument_InvalidRegistryOptionsCheck = 0x0000002c,
    Argument_InvalidRegistryViewCheck = 0x0000002d,
};
#endif
#if !defined(IL2CPP_STRUCT_ExceptionResource__Enum_FWDDECL)
#define IL2CPP_STRUCT_ExceptionResource__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ExceptionResource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionResource__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionResource__Enum_FWDDECL)
#include <Modloader/app/structs/ExceptionResource__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionResource__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
