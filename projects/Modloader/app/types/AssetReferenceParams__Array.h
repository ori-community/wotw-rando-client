#pragma once
#include <Modloader/app/structs/AssetReferenceParams__Array.h>
#include <Modloader/app/structs/AssetReferenceParams__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetReferenceParams__Array {
        inline app::AssetReferenceParams__Array__Class** type_info() {
            static app::AssetReferenceParams__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetReferenceParams__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetReferenceParams__Array__Class* get_class() {
            return il2cpp::get_class<app::AssetReferenceParams__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "AssetReferenceParams[]");
        }
        inline app::AssetReferenceParams__Array* create() {
            return il2cpp::create_object<app::AssetReferenceParams__Array>(get_class());
        }
    } // namespace AssetReferenceParams__Array
} // namespace app::classes::types
