#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkBankManager_AsyncBankHandle {
    IL2CPP_REGISTER_METHOD(0x0239A1A0, void, ctor, (app::AkBankManager_AsyncBankHandle * this_ptr, app::String * name, app::AkCallbackManager_BankCallback * callback))
    IL2CPP_REGISTER_METHOD(0x026CD7F0, void, GlobalBankCallback, (uint32_t in_bank_i_d, void * in_p_in_memory_bank_ptr, app::AKRESULT__Enum in_e_load_result, uint32_t in_mem_pool_id, app::Object * in__cookie))
    IL2CPP_REGISTER_METHODINFO(0x0478EFA0, AkBankManager_AsyncBankHandle_GlobalBankCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026CDA20, app::AKRESULT__Enum, DoLoadBank, (app::AkBankManager_AsyncBankHandle * this_ptr))
}
