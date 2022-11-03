#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_QuestItem {
        inline app::PlayerUberStateInventory_QuestItem__Class** type_info = (app::PlayerUberStateInventory_QuestItem__Class**)(modloader::win::memory::resolve_rva(0x0478D910));
        inline app::PlayerUberStateInventory_QuestItem__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateInventory_QuestItem__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateInventory", "QuestItem");
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
