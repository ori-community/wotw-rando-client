#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestItemPickupPlaceholder {
        namespace {
            app::QuestItemPickupPlaceholder__Class* type_info_ref = nullptr;
        }
        app::QuestItemPickupPlaceholder__Class** type_info = &type_info_ref;
        inline app::QuestItemPickupPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::QuestItemPickupPlaceholder__Class>(type_info, "", "QuestItemPickupPlaceholder");
        }
        inline app::QuestItemPickupPlaceholder* create() {
            return il2cpp::create_object<app::QuestItemPickupPlaceholder>(get_class());
        }
    } // namespace QuestItemPickupPlaceholder
} // namespace app::classes::types
