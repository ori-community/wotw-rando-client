#pragma once
#include <Modloader/app/structs/KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Arra__Clas.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array {
        inline app::KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array__Class** type_info() {
            static app::KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[System.String,PlayFab.ServerModels.VirtualCurrencyRechargeTime][]");
        }
        inline app::KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array>(get_class());
        }
    } // namespace KeyValuePair_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime___Array
} // namespace app::classes::types
