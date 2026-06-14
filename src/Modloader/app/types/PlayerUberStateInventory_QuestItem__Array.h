#pragma once
#include <Modloader/app/structs/PlayerUberStateInventory_QuestItem__Array.h>
#include <Modloader/app/structs/PlayerUberStateInventory_QuestItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_QuestItem__Array {
        inline app::PlayerUberStateInventory_QuestItem__Array__Class** type_info() {
            static app::PlayerUberStateInventory_QuestItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerUberStateInventory_QuestItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerUberStateInventory_QuestItem__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateInventory_QuestItem__Array__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateInventory+QuestItem[]");
        }
        inline app::PlayerUberStateInventory_QuestItem__Array* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory_QuestItem__Array>(get_class());
        }
    } // namespace PlayerUberStateInventory_QuestItem__Array
} // namespace app::classes::types
