#pragma once
#include <Modloader/app/structs/PlayerQuestItems.h>
#include <Modloader/app/structs/PlayerQuestItems__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerQuestItems {
        inline app::PlayerQuestItems__Class** type_info() {
            static app::PlayerQuestItems__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerQuestItems__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerQuestItems__Class* get_class() {
            return il2cpp::get_class<app::PlayerQuestItems__Class>(type_info(), "", "PlayerQuestItems");
        }
        inline app::PlayerQuestItems* create() {
            return il2cpp::create_object<app::PlayerQuestItems>(get_class());
        }
    } // namespace PlayerQuestItems
} // namespace app::classes::types
