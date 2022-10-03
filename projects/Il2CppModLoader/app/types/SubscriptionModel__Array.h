#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubscriptionModel__Array {
        namespace {
            app::SubscriptionModel__Array__Class* type_info_ref = nullptr;
        }
        app::SubscriptionModel__Array__Class** type_info = &type_info_ref;
        inline app::SubscriptionModel__Array__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionModel__Array__Class>(type_info, "PlayFab.ClientModels", "SubscriptionModel[]");
        }
        inline app::SubscriptionModel__Array* create() {
            return il2cpp::create_object<app::SubscriptionModel__Array>(get_class());
        }
    } // namespace SubscriptionModel__Array
} // namespace app::classes::types
