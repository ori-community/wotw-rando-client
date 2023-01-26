#pragma once
#include <Modloader/app/structs/StoreMarketingModel.h>
#include <Modloader/app/structs/StoreMarketingModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreMarketingModel {
        inline app::StoreMarketingModel__Class** type_info() {
            static app::StoreMarketingModel__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StoreMarketingModel__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StoreMarketingModel__Class* get_class() {
            return il2cpp::get_class<app::StoreMarketingModel__Class>(type_info(), "PlayFab.ClientModels", "StoreMarketingModel");
        }
        inline app::StoreMarketingModel* create() {
            return il2cpp::create_object<app::StoreMarketingModel>(get_class());
        }
    } // namespace StoreMarketingModel
} // namespace app::classes::types
