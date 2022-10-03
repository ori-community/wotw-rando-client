#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StoreMarketingModel {
        namespace {
            app::StoreMarketingModel__Class* type_info_ref = nullptr;
        }
        app::StoreMarketingModel__Class** type_info = &type_info_ref;
        inline app::StoreMarketingModel__Class* get_class() {
            return il2cpp::get_class<app::StoreMarketingModel__Class>(type_info, "PlayFab.ClientModels", "StoreMarketingModel");
        }
        inline app::StoreMarketingModel* create() {
            return il2cpp::create_object<app::StoreMarketingModel>(get_class());
        }
    } // namespace StoreMarketingModel
} // namespace app::classes::types
