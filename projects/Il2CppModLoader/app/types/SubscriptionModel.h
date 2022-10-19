#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubscriptionModel {
        inline app::SubscriptionModel__Class** type_info = (app::SubscriptionModel__Class**)(modloader::win::memory::resolve_rva(0x04792C00));
        inline app::SubscriptionModel__Class* get_class() {
            return il2cpp::get_class<app::SubscriptionModel__Class>(type_info, "PlayFab.ClientModels", "SubscriptionModel");
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
