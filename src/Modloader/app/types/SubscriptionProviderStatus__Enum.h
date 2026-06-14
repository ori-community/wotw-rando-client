#pragma once
#include <Modloader/app/structs/SubscriptionProviderStatus__Enum.h>
#include <Modloader/app/structs/SubscriptionProviderStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubscriptionProviderStatus__Enum {
        inline app::SubscriptionProviderStatus__Enum__Class** type_info() {
            static app::SubscriptionProviderStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubscriptionProviderStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725FE0));
            }
            return cache;
        }
        inline app::SubscriptionProviderStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionProviderStatus__Enum__Class>(type_info(), "PlayFab.ClientModels", "SubscriptionProviderStatus");
        }
        inline app::SubscriptionProviderStatus__Enum* create() {
            return il2cpp::create_object<app::SubscriptionProviderStatus__Enum>(get_class());
        }
    } // namespace SubscriptionProviderStatus__Enum
} // namespace app::classes::types
