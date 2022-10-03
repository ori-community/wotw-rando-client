#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubscriptionModel_1__Array {
        namespace {
            app::SubscriptionModel_1__Array__Class* type_info_ref = nullptr;
        }
        app::SubscriptionModel_1__Array__Class** type_info = &type_info_ref;
        inline app::SubscriptionModel_1__Array__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionModel_1__Array__Class>(type_info, "PlayFab.ServerModels", "SubscriptionModel[]");
        }
        inline app::SubscriptionModel_1__Array* create() {
            return il2cpp::create_object<app::SubscriptionModel_1__Array>(get_class());
        }
    } // namespace SubscriptionModel_1__Array
} // namespace app::classes::types
