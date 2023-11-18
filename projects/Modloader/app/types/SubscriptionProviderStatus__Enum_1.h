#pragma once
#include <Modloader/app/structs/SubscriptionProviderStatus__Enum_1.h>
#include <Modloader/app/structs/SubscriptionProviderStatus__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubscriptionProviderStatus__Enum_1 {
        inline app::SubscriptionProviderStatus__Enum_1__Class** type_info() {
            static app::SubscriptionProviderStatus__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SubscriptionProviderStatus__Enum_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SubscriptionProviderStatus__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionProviderStatus__Enum_1__Class>(type_info(), "PlayFab.ServerModels", "SubscriptionProviderStatus");
        }
        inline app::SubscriptionProviderStatus__Enum_1* create() {
            return il2cpp::create_object<app::SubscriptionProviderStatus__Enum_1>(get_class());
        }
    } // namespace SubscriptionProviderStatus__Enum_1
} // namespace app::classes::types
