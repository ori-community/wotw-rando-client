#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetSummary__Array {
        namespace {
            app::AssetSummary__Array__Class* type_info_ref = nullptr;
        }
        app::AssetSummary__Array__Class** type_info = &type_info_ref;
        inline app::AssetSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::AssetSummary__Array__Class>(type_info, "PlayFab.MultiplayerModels", "AssetSummary[]");
        }
        inline app::AssetSummary__Array* create() {
            return il2cpp::create_object<app::AssetSummary__Array>(get_class());
        }
    } // namespace AssetSummary__Array
} // namespace app::classes::types
