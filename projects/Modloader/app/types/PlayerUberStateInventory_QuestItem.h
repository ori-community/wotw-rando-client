#pragma once
#include <Modloader/app/structs/PlayerUberStateInventory_QuestItem.h>
#include <Modloader/app/structs/PlayerUberStateInventory_QuestItem__Array.h>
#include <Modloader/app/structs/PlayerUberStateInventory_QuestItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_QuestItem {
        inline app::PlayerUberStateInventory_QuestItem__Class** type_info() {
            static app::PlayerUberStateInventory_QuestItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateInventory_QuestItem__Class**)(modloader::win::memory::resolve_rva(0x0478D910));
            }
            return cache;
        }
        inline app::PlayerUberStateInventory_QuestItem__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateInventory_QuestItem__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateInventory", "QuestItem");
        }
        inline app::PlayerUberStateInventory_QuestItem* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory_QuestItem>(get_class());
        }
        inline app::PlayerUberStateInventory_QuestItem__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerUberStateInventory_QuestItem__Array>(get_class(), size);
        }
        inline app::PlayerUberStateInventory_QuestItem__Array* create_array(const std::vector<app::PlayerUberStateInventory_QuestItem*>& items) {
            return il2cpp::array_new<app::PlayerUberStateInventory_QuestItem__Array>(get_class(), items);
        }
    } // namespace PlayerUberStateInventory_QuestItem
} // namespace app::classes::types
