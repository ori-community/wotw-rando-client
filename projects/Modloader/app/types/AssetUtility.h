#pragma once
#include <Modloader/app/structs/AssetUtility.h>
#include <Modloader/app/structs/AssetUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetUtility {
        inline app::AssetUtility__Class** type_info() {
            static app::AssetUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetUtility__Class* get_class() {
            return il2cpp::get_class<app::AssetUtility__Class>(type_info(), "", "AssetUtility");
        }
        inline app::AssetUtility* create() {
            return il2cpp::create_object<app::AssetUtility>(get_class());
        }
    } // namespace AssetUtility
} // namespace app::classes::types
