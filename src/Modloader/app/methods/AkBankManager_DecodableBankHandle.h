#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AKRESULT__Enum.h>
#include <Modloader/app/structs/AkBankManager_DecodableBankHandle.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkBankManager_DecodableBankHandle {
    IL2CPP_REGISTER_METHOD(0x026CE230, void, ctor, app::AkBankManager_DecodableBankHandle* this_ptr, app::String* name, bool save)
    IL2CPP_REGISTER_METHOD(0x026CE470, app::AKRESULT__Enum, DoLoadBank, app::AkBankManager_DecodableBankHandle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026CE710, void, UnloadBank, app::AkBankManager_DecodableBankHandle* this_ptr)
} // namespace app::classes::AkBankManager_DecodableBankHandle
