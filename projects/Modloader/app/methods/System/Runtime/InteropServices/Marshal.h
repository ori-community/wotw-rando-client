#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CCallbackBaseVTable.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_VTable.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_VTable.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_VTable.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_VTable.h>
#include <Modloader/app/structs/IntPtr__Array.h>
#include <Modloader/app/structs/MatchMakingKeyValuePair_t.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SecureString.h>
#include <Modloader/app/structs/SteamParamStringArray_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCP6ROW.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCPROW.h>
#include <Modloader/app/structs/Win32_FIXED_INFO.h>
#include <Modloader/app/structs/XalService_AsyncBlock.h>

namespace app::classes::System::Runtime::InteropServices::Marshal {
    IL2CPP_REGISTER_METHOD(0x01A94B10, void*, AllocCoTaskMem, int32_t cb)
    IL2CPP_REGISTER_METHOD(0x01A94B20, void*, AllocHGlobal_1, void* cb)
    IL2CPP_REGISTER_METHOD(0x01A94B30, void*, AllocHGlobal_2, int32_t cb)
    IL2CPP_REGISTER_METHOD(0x01A94BD0, void, copy_to_unmanaged, app::Array* source, int32_t start_index, void* destination, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01A94C00, void, copy_from_unmanaged, void* source, int32_t start_index, app::Array* destination, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01A94C40, void, Copy_1, app::Byte__Array* source, int32_t start_index, void* destination, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01A94D20, void, Copy_2, app::Char__Array* source, int32_t start_index, void* destination, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01A94E00, void, Copy_3, app::IntPtr__Array* source, int32_t start_index, void* destination, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01A94EE0, void, Copy_4, void* source, app::Byte__Array* destination, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01A94FC0, void, Copy_5, void* source, app::Char__Array* destination, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01A950A0, void, FreeBSTR, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A950B0, void, FreeCoTaskMem, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A950C0, void, FreeHGlobal, void* hglobal)
    IL2CPP_REGISTER_METHOD(0x01A950D0, void, ClearBSTR, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A951E0, void, ZeroFreeBSTR, void* s)
    IL2CPP_REGISTER_METHOD(0x01A95370, void, ClearUnicode, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A954B0, void, ZeroFreeGlobalAllocUnicode, void* s)
    IL2CPP_REGISTER_METHOD(0x01A95680, int32_t, GetHRForException, app::Exception* e)
    IL2CPP_REGISTER_METHOD(0x01A95690, int32_t, GetLastWin32Error, )
    IL2CPP_REGISTER_METHOD(0x01A956F0, app::String*, PtrToStringAnsi, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A95710, app::String*, PtrToStringUni, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A95780, app::String*, PtrToStringBSTR, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A957B0, void, PtrToStructure_1, void* ptr, app::Object* structure)
    IL2CPP_REGISTER_METHOD(0x01A95870, app::Object*, PtrToStructure_2, void* ptr, app::Type* structure_type)
    IL2CPP_REGISTER_METHOD(0x01A95880, uint8_t, ReadByte_1, void* ptr)
    IL2CPP_REGISTER_METHOD(0x0157BDE0, uint8_t, ReadByte_2, void* ptr, int32_t ofs)
    IL2CPP_REGISTER_METHOD(0x01A95890, int16_t, ReadInt16, void* ptr, int32_t ofs)
    IL2CPP_REGISTER_METHOD(0x01A958D0, int32_t, ReadInt32_1, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A95910, int32_t, ReadInt32_2, void* ptr, int32_t ofs)
    IL2CPP_REGISTER_METHOD(0x01A95950, int64_t, ReadInt64, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A95990, void*, ReadIntPtr, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01A95A60, int32_t, ReleaseInternal, void* p_unk)
    IL2CPP_REGISTER_METHOD(0x01A95A70, int32_t, Release, void* p_unk)
    IL2CPP_REGISTER_METHOD(0x01A95B50, int32_t, SizeOf_1, app::Object* structure)
    IL2CPP_REGISTER_METHOD(0x01A95CE0, int32_t, SizeOf_2, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x01A95DD0, void*, StringToBSTR, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01A95E10, void*, StringToHGlobalUni, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01A95E70, void*, SecureStringToBSTR, app::SecureString* s)
    IL2CPP_REGISTER_METHOD(0x01A96010, void*, SecureStringToCoTaskMemUnicode, app::SecureString* s)
    IL2CPP_REGISTER_METHOD(0x01A96320, void*, SecureStringToGlobalAllocUnicode, app::SecureString* s)
    IL2CPP_REGISTER_METHOD(0x01A963F0, void, StructureToPtr_1, app::Object* structure, void* ptr, bool f_delete_old)
    IL2CPP_REGISTER_METHOD(0x0173D7D0, void*, BufferToBSTR, app::Array* ptr, int32_t slen)
    IL2CPP_REGISTER_METHOD(0x01A96510, void*, UnsafeAddrOfPinnedArrayElement_1, app::Array* arr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x015E38F0, void, WriteByte, void* ptr, int32_t ofs, uint8_t val)
    IL2CPP_REGISTER_METHOD(0x01A96530, void, WriteInt16_1, void* ptr, int16_t val)
    IL2CPP_REGISTER_METHOD(0x01A96560, void, WriteInt16_2, void* ptr, int32_t ofs, int16_t val)
    IL2CPP_REGISTER_METHOD(0x01A965A0, void, WriteInt32, void* ptr, int32_t val)
    IL2CPP_REGISTER_METHOD(0x01A965D0, void, WriteInt64, void* ptr, int64_t val)
    IL2CPP_REGISTER_METHOD(0x01A96600, void, WriteIntPtr, void* ptr, void* val)
    IL2CPP_REGISTER_METHOD(0x01A966D0, app::Delegate*, GetDelegateForFunctionPointerInternal, void* ptr, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x01A96700, app::Delegate*, GetDelegateForFunctionPointer, void* ptr, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x01A96950, void*, GetFunctionPointerForDelegateInternal, app::Delegate* d)
    IL2CPP_REGISTER_METHOD(0x01A96960, void*, GetFunctionPointerForDelegate, app::Delegate* d)
    IL2CPP_REGISTER_METHOD(0x01A96A30, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x015E14C0, void, PtrToStructure_3, void* ptr, app::Object* structure)
    IL2CPP_REGISTER_METHOD(0x0157A900, app::Object*, PtrToStructure_4, void* ptr)
    IL2CPP_REGISTER_METHOD(0x01539970, int32_t, SizeOf_3, app::Object* structure)
    IL2CPP_REGISTER_METHOD(0x015E1B90, void, StructureToPtr_2, app::Object* structure, void* ptr, bool f_delete_old)
    IL2CPP_REGISTER_METHOD(0x0153B880, void*, UnsafeAddrOfPinnedArrayElement_2, app::Object__Array* arr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0157A900, app::UnityTls_unitytls_interface_struct*, PtrToStructure_5, void* ptr)
    IL2CPP_REGISTER_METHOD(0x015E14C0, void, PtrToStructure_6, void* ptr, app::Win32IPGlobalProperties_Win32_MIB_TCPROW* structure)
    IL2CPP_REGISTER_METHOD(0x015E14C0, void, PtrToStructure_7, void* ptr, app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW* structure)
    IL2CPP_REGISTER_METHOD(0x0157A7A0, app::Win32_FIXED_INFO, PtrToStructure_8, void* ptr)
    IL2CPP_REGISTER_METHOD(0x0153B7C0, void*, UnsafeAddrOfPinnedArrayElement_3, app::Byte__Array* arr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x015397B0, int32_t, SizeOf_4, app::XalService_AsyncBlock structure)
    IL2CPP_REGISTER_METHOD(0x015E1620, void, StructureToPtr_3, app::XalService_AsyncBlock structure, void* ptr, bool f_delete_old)
    IL2CPP_REGISTER_METHOD(0x015E1B90, void, StructureToPtr_4, app::ISteamMatchmakingPingResponse_VTable* structure, void* ptr, bool f_delete_old)
    IL2CPP_REGISTER_METHOD(0x015E1B90, void, StructureToPtr_5, app::ISteamMatchmakingPlayersResponse_VTable* structure, void* ptr, bool f_delete_old)
    IL2CPP_REGISTER_METHOD(0x015E1B90, void, StructureToPtr_6, app::ISteamMatchmakingRulesResponse_VTable* structure, void* ptr, bool f_delete_old)
    IL2CPP_REGISTER_METHOD(0x015E1B90, void, StructureToPtr_7, app::ISteamMatchmakingServerListResponse_VTable* structure, void* ptr, bool f_delete_old)
    IL2CPP_REGISTER_METHOD(0x015E19D0, void, StructureToPtr_8, app::SteamParamStringArray_t structure, void* ptr, bool f_delete_old)
    IL2CPP_REGISTER_METHOD(0x015E1810, void, StructureToPtr_9, app::MatchMakingKeyValuePair_t structure, void* ptr, bool f_delete_old)
    IL2CPP_REGISTER_METHOD(0x015E1B90, void, StructureToPtr_10, app::CCallbackBaseVTable* structure, void* ptr, bool f_delete_old)
} // namespace app::classes::System::Runtime::InteropServices::Marshal
