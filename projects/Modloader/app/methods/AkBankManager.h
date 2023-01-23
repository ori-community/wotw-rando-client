#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AkCallbackManager_BankCallback.h>

namespace app::classes::AkBankManager {
    IL2CPP_REGISTER_METHOD(0x026CC540, void, DoUnloadBanks, ())
    IL2CPP_REGISTER_METHOD(0x026CC700, void, Reset, ())
    IL2CPP_REGISTER_METHOD(0x026CC800, void, LoadInitBank, (bool do_reset))
    IL2CPP_REGISTER_METHOD(0x026CC940, void, UnloadInitBank, ())
    IL2CPP_REGISTER_METHOD(0x026CCAE0, void, LoadBank, (app::String * name, bool decode_bank, bool save_decoded_bank))
    IL2CPP_REGISTER_METHOD(0x026CCEF0, void, LoadBankAsync, (app::String * name, app::AkCallbackManager_BankCallback* callback))
    IL2CPP_REGISTER_METHOD(0x026CD220, void, UnloadBank, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x026CD4D0, void, cctor, ())
} // namespace app::classes::AkBankManager
