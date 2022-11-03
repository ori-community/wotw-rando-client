#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AK::Wwise::Bank {
    IL2CPP_REGISTER_METHOD(0x00AD8BA0, app::WwiseObjectType__Enum, get_WwiseObjectType, (app::Bank * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1180, void, Load, (app::Bank * this_ptr, bool decode_bank, bool save_decoded_bank))
    IL2CPP_REGISTER_METHOD(0x026C1270, void, LoadAsync, (app::Bank * this_ptr, app::AkCallbackManager_BankCallback* callback))
    IL2CPP_REGISTER_METHOD(0x026C1350, void, Unload, (app::Bank * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C1170, void, ctor, (app::Bank * this_ptr))
} // namespace app::classes::AK::Wwise::Bank
