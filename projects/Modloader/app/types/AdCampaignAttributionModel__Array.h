#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AdCampaignAttributionModel__Array {
        namespace {
            inline app::AdCampaignAttributionModel__Array__Class* type_info_ref = nullptr;
        }
        inline app::AdCampaignAttributionModel__Array__Class** type_info = &type_info_ref;
        inline app::AdCampaignAttributionModel__Array__Class* get_class() {
            return il2cpp::get_class<app::AdCampaignAttributionModel__Array__Class>(type_info, "PlayFab.ClientModels", "AdCampaignAttributionModel[]");
        }
        inline app::AdCampaignAttributionModel__Array* create() {
            return il2cpp::create_object<app::AdCampaignAttributionModel__Array>(get_class());
        }
    } // namespace AdCampaignAttributionModel__Array
} // namespace app::classes::types
