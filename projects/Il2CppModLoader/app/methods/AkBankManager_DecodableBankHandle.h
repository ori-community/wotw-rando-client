#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkBankManager_DecodableBankHandle {
    IL2CPP_REGISTER_METHOD(0x026CE230, void, ctor, (app::AkBankManager_DecodableBankHandle * this_ptr, app::String* name, bool save))
    IL2CPP_REGISTER_METHOD(0x026CE470, app::AKRESULT__Enum, DoLoadBank, (app::AkBankManager_DecodableBankHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026CE710, void, UnloadBank, (app::AkBankManager_DecodableBankHandle * this_ptr))
} // namespace app::classes::AkBankManager_DecodableBankHandle
