#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AdCampaignAttributionModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AdCampaignAttributionModel__Class** type_info;
        inline app::AdCampaignAttributionModel__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttributionModel__Class>(type_info, "PlayFab.ClientModels", "AdCampaignAttributionModel");
        }
        inline app::AdCampaignAttributionModel* create() {
            return il2cpp::create_object<app::AdCampaignAttributionModel>(get_class());
        }
        inline app::AdCampaignAttributionModel__Array* create_array(int size) {
            return il2cpp::array_new<app::AdCampaignAttributionModel__Array>(get_class(), size);
        }
    } // namespace AdCampaignAttributionModel
} // namespace app::classes::types
