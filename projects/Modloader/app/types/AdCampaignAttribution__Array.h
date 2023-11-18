#pragma once
#include <Modloader/app/structs/AdCampaignAttribution__Array.h>
#include <Modloader/app/structs/AdCampaignAttribution__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdCampaignAttribution__Array {
        inline app::AdCampaignAttribution__Array__Class** type_info() {
            static app::AdCampaignAttribution__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AdCampaignAttribution__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AdCampaignAttribution__Array__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttribution__Array__Class>(type_info(), "PlayFab.ServerModels", "AdCampaignAttribution[]");
        }
        inline app::AdCampaignAttribution__Array* create() {
            return il2cpp::create_object<app::AdCampaignAttribution__Array>(get_class());
        }
    } // namespace AdCampaignAttribution__Array
} // namespace app::classes::types
