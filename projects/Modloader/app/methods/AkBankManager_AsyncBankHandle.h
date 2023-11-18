#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkBankManager_AsyncBankHandle.h>
#include <Modloader/app/structs/AKRESULT__Enum.h>
#include <Modloader/app/structs/AkCallbackManager_BankCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkBankManager_AsyncBankHandle {
    IL2CPP_REGISTER_METHOD(0x0239A1A0, void, ctor, (app::AkBankManager_AsyncBankHandle * this_ptr, app::String* name, app::AkCallbackManager_BankCallback* callback))
    IL2CPP_REGISTER_METHOD(0x026CD7F0, void, GlobalBankCallback, (uint32_t in_bank_i_d, void* in_p_in_memory_bank_ptr, app::AKRESULT__Enum in_e_load_result, uint32_t in_mem_pool_id, app::Object* in__cookie))
    IL2CPP_REGISTER_METHOD(0x026CDA20, app::AKRESULT__Enum, DoLoadBank, (app::AkBankManager_AsyncBankHandle * this_ptr))
} // namespace app::classes::AkBankManager_AsyncBankHandle
