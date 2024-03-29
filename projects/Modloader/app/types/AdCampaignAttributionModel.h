#pragma once
#include <Modloader/app/structs/AdCampaignAttributionModel.h>
#include <Modloader/app/structs/AdCampaignAttributionModel__Array.h>
#include <Modloader/app/structs/AdCampaignAttributionModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdCampaignAttributionModel {
        inline app::AdCampaignAttributionModel__Class** type_info() {
            static app::AdCampaignAttributionModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AdCampaignAttributionModel__Class**)(modloader::win::memory::resolve_rva(0x0475C230));
            }
            return cache;
        }
        inline app::AdCampaignAttributionModel__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttributionModel__Class>(type_info(), "PlayFab.ClientModels", "AdCampaignAttributionModel");
        }
        inline app::AdCampaignAttributionModel* create() {
            return il2cpp::create_object<app::AdCampaignAttributionModel>(get_class());
        }
        inline app::AdCampaignAttributionModel__Array* create_array(int size) {
            return il2cpp::array_new<app::AdCampaignAttributionModel__Array>(get_class(), size);
        }
        inline app::AdCampaignAttributionModel__Array* create_array(const std::vector<app::AdCampaignAttributionModel*>& items) {
            return il2cpp::array_new<app::AdCampaignAttributionModel__Array>(get_class(), items);
        }
    } // namespace AdCampaignAttributionModel
} // namespace app::classes::types
