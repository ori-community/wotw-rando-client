#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkBankCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkBankCallbackInfo * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026CBC80, void*, getCPtr, (app::AkBankCallbackInfo * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkBankCallbackInfo * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026CBD10, void, Finalize, (app::AkBankCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CBD90, void, Dispose, (app::AkBankCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CBFA0, uint32_t, get_bankID, (app::AkBankCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CC0C0, void*, get_inMemoryBankPtr, (app::AkBankCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CC1E0, app::AKRESULT__Enum, get_loadResult, (app::AkBankCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CC300, int32_t, get_memPoolId, (app::AkBankCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CC420, void, ctor_2, (app::AkBankCallbackInfo * this_ptr))
} // namespace app::classes::AkBankCallbackInfo
