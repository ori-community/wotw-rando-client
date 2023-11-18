#pragma once
#include <Modloader/app/structs/ShopKeeperHints.h>
#include <Modloader/app/structs/ShopKeeperHints__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShopKeeperHints {
        inline app::ShopKeeperHints__Class** type_info() {
            static app::ShopKeeperHints__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShopKeeperHints__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShopKeeperHints__Class* get_class() {
            return il2cpp::get_class<app::ShopKeeperHints__Class>(type_info(), "", "ShopKeeperHints");
        }
        inline app::ShopKeeperHints* create() {
            return il2cpp::create_object<app::ShopKeeperHints>(get_class());
        }
    } // namespace ShopKeeperHints
} // namespace app::classes::types
