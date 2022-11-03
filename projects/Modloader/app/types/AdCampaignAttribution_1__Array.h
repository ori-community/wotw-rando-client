#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AdCampaignAttribution_1__Array {
        namespace {
            inline app::AdCampaignAttribution_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::AdCampaignAttribution_1__Array__Class** type_info = &type_info_ref;
        inline app::AdCampaignAttribution_1__Array__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttribution_1__Array__Class>(type_info, "PlayFab.PlayStreamModels", "AdCampaignAttribution[]");
        }
        inline app::AdCampaignAttribution_1__Array* create() {
            return il2cpp::create_object<app::AdCampaignAttribution_1__Array>(get_class());
        }
    } // namespace AdCampaignAttribution_1__Array
} // namespace app::classes::types
