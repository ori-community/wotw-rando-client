#pragma once
#include <Modloader/app/structs/AssetSummary__Array.h>
#include <Modloader/app/structs/AssetSummary__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetSummary__Array {
        inline app::AssetSummary__Array__Class** type_info() {
            static app::AssetSummary__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetSummary__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::AssetSummary__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "AssetSummary[]");
        }
        inline app::AssetSummary__Array* create() {
            return il2cpp::create_object<app::AssetSummary__Array>(get_class());
        }
    } // namespace AssetSummary__Array
} // namespace app::classes::types
