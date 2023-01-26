#pragma once
#include <Modloader/app/structs/AdCampaignAttributionModel__Array.h>
#include <Modloader/app/structs/AdCampaignAttributionModel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdCampaignAttributionModel__Array {
        inline app::AdCampaignAttributionModel__Array__Class** type_info() {
            static app::AdCampaignAttributionModel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AdCampaignAttributionModel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AdCampaignAttributionModel__Array__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttributionModel__Array__Class>(type_info(), "PlayFab.ClientModels", "AdCampaignAttributionModel[]");
        }
        inline app::AdCampaignAttributionModel__Array* create() {
            return il2cpp::create_object<app::AdCampaignAttributionModel__Array>(get_class());
        }
    } // namespace AdCampaignAttributionModel__Array
} // namespace app::classes::types
