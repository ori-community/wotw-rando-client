#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkBankManager_BankHandle {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::AkBankManager_BankHandle * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_RefCount, (app::AkBankManager_BankHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_RefCount, (app::AkBankManager_BankHandle * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x026CDBC0, app::AKRESULT__Enum, DoLoadBank, (app::AkBankManager_BankHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CDC70, void, LoadBank, (app::AkBankManager_BankHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CDDC0, void, UnloadBank, (app::AkBankManager_BankHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CDE70, void, IncRef, (app::AkBankManager_BankHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CDE80, void, DecRef, (app::AkBankManager_BankHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CDF50, void, LogLoadResult, (app::AkBankManager_BankHandle * this_ptr, app::AKRESULT__Enum result))
} // namespace app::classes::AkBankManager_BankHandle
