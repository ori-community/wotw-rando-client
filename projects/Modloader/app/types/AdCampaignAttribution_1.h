#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AdCampaignAttribution_1__Class.h>
#include <Modloader/app/structs/AdCampaignAttribution_1.h>
#include <Modloader/app/structs/AdCampaignAttribution_1__Array.h>

namespace app::classes::types {
    namespace AdCampaignAttribution_1 {
        namespace {
            inline app::AdCampaignAttribution_1__Class* type_info_ref = nullptr;
        }
        inline app::AdCampaignAttribution_1__Class** type_info = &type_info_ref;
        inline app::AdCampaignAttribution_1__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttribution_1__Class>(type_info, "PlayFab.PlayStreamModels", "AdCampaignAttribution");
        }
        inline app::AdCampaignAttribution_1* create() {
            return il2cpp::create_object<app::AdCampaignAttribution_1>(get_class());
        }
        inline app::AdCampaignAttribution_1__Array* create_array(int size) {
            return il2cpp::array_new<app::AdCampaignAttribution_1__Array>(get_class(), size);
        }
        inline app::AdCampaignAttribution_1__Array* create_array(const std::vector<app::AdCampaignAttribution_1*>& items) {
            return il2cpp::array_new<app::AdCampaignAttribution_1__Array>(get_class(), items);
        }
    } // namespace AdCampaignAttribution_1
} // namespace app::classes::types
