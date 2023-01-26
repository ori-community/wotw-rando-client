#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_AkCallbackManager_EventCallbackPackage_.h>
#include <Modloader/app/structs/AkCallbackManager_EventCallbackPackage.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_ {
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_AkCallbackManager_EventCallbackPackage_, GetEnumerator, (app::Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_ * this_ptr, int32_t key, app::AkCallbackManager_EventCallbackPackage** value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_ * this_ptr, int32_t key, app::AkCallbackManager_EventCallbackPackage* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_
