#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritShardShopUIItem__Class.h>
#include <Modloader/app/structs/SpiritShardShopUIItem.h>

namespace app::classes::types {
    namespace SpiritShardShopUIItem {
        namespace {
            inline app::SpiritShardShopUIItem__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardShopUIItem__Class** type_info = &type_info_ref;
        inline app::SpiritShardShopUIItem__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardShopUIItem__Class>(type_info, "", "SpiritShardShopUIItem");
        }
        inline app::SpiritShardShopUIItem* create() {
            return il2cpp::create_object<app::SpiritShardShopUIItem>(get_class());
        }
    } // namespace SpiritShardShopUIItem
} // namespace app::classes::types
