#pragma once
#include <Modloader/app/structs/AssetReference__Array.h>
#include <Modloader/app/structs/AssetReference__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetReference__Array {
        inline app::AssetReference__Array__Class** type_info() {
            static app::AssetReference__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetReference__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetReference__Array__Class* get_class() {
            return il2cpp::get_class<app::AssetReference__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "AssetReference[]");
        }
        inline app::AssetReference__Array* create() {
            return il2cpp::create_object<app::AssetReference__Array>(get_class());
        }
    } // namespace AssetReference__Array
} // namespace app::classes::types
