#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_AkCallbackManager_BankCallbackPackage_.h>
#include <Modloader/app/structs/AkCallbackManager_BankCallbackPackage.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_ {
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_AkCallbackManager_BankCallbackPackage_, GetEnumerator, (app::Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_ * this_ptr, int32_t key, app::AkCallbackManager_BankCallbackPackage** value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_ * this_ptr, int32_t key, app::AkCallbackManager_BankCallbackPackage* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_
