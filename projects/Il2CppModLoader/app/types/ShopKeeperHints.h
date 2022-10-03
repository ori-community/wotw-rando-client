#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShopKeeperHints {
        namespace {
            app::ShopKeeperHints__Class* type_info_ref = nullptr;
        }
        app::ShopKeeperHints__Class** type_info = &type_info_ref;
        inline app::ShopKeeperHints__Class* get_class() {
            return il2cpp::get_class<app::ShopKeeperHints__Class>(type_info, "", "ShopKeeperHints");
        }
        inline app::ShopKeeperHints* create() {
            return il2cpp::create_object<app::ShopKeeperHints>(get_class());
        }
    } // namespace ShopKeeperHints
} // namespace app::classes::types
