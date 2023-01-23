#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritShardShopUISubItem__Class.h>
#include <Modloader/app/structs/SpiritShardShopUISubItem.h>

namespace app::classes::types {
    namespace SpiritShardShopUISubItem {
        namespace {
            inline app::SpiritShardShopUISubItem__Class* type_info_ref = nullptr;
        }
        inline app::SpiritShardShopUISubItem__Class** type_info = &type_info_ref;
        inline app::SpiritShardShopUISubItem__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardShopUISubItem__Class>(type_info, "", "SpiritShardShopUISubItem");
        }
        inline app::SpiritShardShopUISubItem* create() {
            return il2cpp::create_object<app::SpiritShardShopUISubItem>(get_class());
        }
    } // namespace SpiritShardShopUISubItem
} // namespace app::classes::types
