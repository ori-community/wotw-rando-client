#pragma once
#include <Modloader/app/structs/SubscriptionModel.h>
#include <Modloader/app/structs/SubscriptionModel__Array.h>
#include <Modloader/app/structs/SubscriptionModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubscriptionModel {
        inline app::SubscriptionModel__Class** type_info() {
            static app::SubscriptionModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubscriptionModel__Class**)(modloader::win::memory::resolve_rva(0x04792C00));
            }
            return cache;
        }
        inline app::SubscriptionModel__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionModel__Class>(type_info(), "PlayFab.ClientModels", "SubscriptionModel");
        }
        inline app::SubscriptionModel* create() {
            return il2cpp::create_object<app::SubscriptionModel>(get_class());
        }
        inline app::SubscriptionModel__Array* create_array(int size) {
            return il2cpp::array_new<app::SubscriptionModel__Array>(get_class(), size);
        }
        inline app::SubscriptionModel__Array* create_array(const std::vector<app::SubscriptionModel*>& items) {
            return il2cpp::array_new<app::SubscriptionModel__Array>(get_class(), items);
        }
    } // namespace SubscriptionModel
} // namespace app::classes::types
