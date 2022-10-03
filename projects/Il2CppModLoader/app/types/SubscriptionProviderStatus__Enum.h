#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubscriptionProviderStatus__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubscriptionProviderStatus__Enum__Class** type_info;
        inline app::SubscriptionProviderStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionProviderStatus__Enum__Class>(type_info, "PlayFab.ClientModels", "SubscriptionProviderStatus");
        }
        inline app::SubscriptionProviderStatus__Enum* create() {
            return il2cpp::create_object<app::SubscriptionProviderStatus__Enum>(get_class());
        }
    } // namespace SubscriptionProviderStatus__Enum
} // namespace app::classes::types
