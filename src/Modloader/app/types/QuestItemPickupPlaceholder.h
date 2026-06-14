#pragma once
#include <Modloader/app/structs/QuestItemPickupPlaceholder.h>
#include <Modloader/app/structs/QuestItemPickupPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestItemPickupPlaceholder {
        inline app::QuestItemPickupPlaceholder__Class** type_info() {
            static app::QuestItemPickupPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestItemPickupPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestItemPickupPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::QuestItemPickupPlaceholder__Class>(type_info(), "", "QuestItemPickupPlaceholder");
        }
        inline app::QuestItemPickupPlaceholder* create() {
            return il2cpp::create_object<app::QuestItemPickupPlaceholder>(get_class());
        }
    } // namespace QuestItemPickupPlaceholder
} // namespace app::classes::types
