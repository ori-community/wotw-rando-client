#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUISubItem_Context {
        namespace {
            app::SpiritShardShopUISubItem_Context__Class* type_info_ref = nullptr;
        }
        app::SpiritShardShopUISubItem_Context__Class** type_info = &type_info_ref;
        inline app::SpiritShardShopUISubItem_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardShopUISubItem_Context__Class>(type_info, "", "SpiritShardShopUISubItem", "Context");
        }
        inline app::SpiritShardShopUISubItem_Context* create() {
            return il2cpp::create_object<app::SpiritShardShopUISubItem_Context>(get_class());
        }
    } // namespace SpiritShardShopUISubItem_Context
} // namespace app::classes::types
