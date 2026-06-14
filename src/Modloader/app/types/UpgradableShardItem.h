#pragma once
#include <Modloader/app/structs/UpgradableShardItem.h>
#include <Modloader/app/structs/UpgradableShardItem__Array.h>
#include <Modloader/app/structs/UpgradableShardItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradableShardItem {
        inline app::UpgradableShardItem__Class** type_info() {
            static app::UpgradableShardItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpgradableShardItem__Class**)(modloader::win::memory::resolve_rva(0x047473F8));
            }
            return cache;
        }
        inline app::UpgradableShardItem__Class* get_class() {
            return il2cpp::get_class<app::UpgradableShardItem__Class>(type_info(), "", "UpgradableShardItem");
        }
        inline app::UpgradableShardItem* create() {
            return il2cpp::create_object<app::UpgradableShardItem>(get_class());
        }
        inline app::UpgradableShardItem__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradableShardItem__Array>(get_class(), size);
        }
        inline app::UpgradableShardItem__Array* create_array(const std::vector<app::UpgradableShardItem*>& items) {
            return il2cpp::array_new<app::UpgradableShardItem__Array>(get_class(), items);
        }
    } // namespace UpgradableShardItem
} // namespace app::classes::types
