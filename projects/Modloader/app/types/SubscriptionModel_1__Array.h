#pragma once
#include <Modloader/app/structs/SubscriptionModel_1__Array.h>
#include <Modloader/app/structs/SubscriptionModel_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubscriptionModel_1__Array {
        inline app::SubscriptionModel_1__Array__Class** type_info() {
            static app::SubscriptionModel_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SubscriptionModel_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SubscriptionModel_1__Array__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionModel_1__Array__Class>(type_info(), "PlayFab.ServerModels", "SubscriptionModel[]");
        }
        inline app::SubscriptionModel_1__Array* create() {
            return il2cpp::create_object<app::SubscriptionModel_1__Array>(get_class());
        }
    } // namespace SubscriptionModel_1__Array
} // namespace app::classes::types
