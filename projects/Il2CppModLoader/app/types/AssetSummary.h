#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetSummary {
        namespace {
            app::AssetSummary__Class* type_info_ref = nullptr;
        }
        app::AssetSummary__Class** type_info = &type_info_ref;
        inline app::AssetSummary__Class* get_class() {
            return il2cpp::get_class<app::AssetSummary__Class>(type_info, "PlayFab.MultiplayerModels", "AssetSummary");
        }
        inline app::AssetSummary* create() {
            return il2cpp::create_object<app::AssetSummary>(get_class());
        }
        inline app::AssetSummary__Array* create_array(int size) {
            return il2cpp::array_new<app::AssetSummary__Array>(get_class(), size);
        }
    } // namespace AssetSummary
} // namespace app::classes::types
