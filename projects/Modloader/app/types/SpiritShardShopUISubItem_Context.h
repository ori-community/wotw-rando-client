#pragma once
#include <Modloader/app/structs/SpiritShardShopUISubItem_Context.h>
#include <Modloader/app/structs/SpiritShardShopUISubItem_Context__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUISubItem_Context {
        inline app::SpiritShardShopUISubItem_Context__Class** type_info() {
            static app::SpiritShardShopUISubItem_Context__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardShopUISubItem_Context__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardShopUISubItem_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardShopUISubItem_Context__Class>(type_info(), "", "SpiritShardShopUISubItem", "Context");
        }
        inline app::SpiritShardShopUISubItem_Context* create() {
            return il2cpp::create_object<app::SpiritShardShopUISubItem_Context>(get_class());
        }
    } // namespace SpiritShardShopUISubItem_Context
} // namespace app::classes::types
