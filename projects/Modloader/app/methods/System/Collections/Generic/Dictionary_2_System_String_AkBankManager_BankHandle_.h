#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_String_AkBankManager_BankHandle_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AkBankManager_BankHandle.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_AkBankManager_BankHandle_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_AkBankManager_BankHandle_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750A38, Dictionary_2_System_String_AkBankManager_BankHandle__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_AkBankManager_BankHandle_ * this_ptr, app::String* key, app::AkBankManager_BankHandle** value))
    IL2CPP_REGISTER_METHODINFO(0x04785BB0, Dictionary_2_System_String_AkBankManager_BankHandle__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_AkBankManager_BankHandle_ * this_ptr, app::String* key, app::AkBankManager_BankHandle* value))
    IL2CPP_REGISTER_METHODINFO(0x04758688, Dictionary_2_System_String_AkBankManager_BankHandle__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_AkBankManager_BankHandle_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x04772178, Dictionary_2_System_String_AkBankManager_BankHandle__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_AkBankManager_BankHandle_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769068, Dictionary_2_System_String_AkBankManager_BankHandle___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_AkBankManager_BankHandle_
