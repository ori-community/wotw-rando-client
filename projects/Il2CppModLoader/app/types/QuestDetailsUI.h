#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestDetailsUI {
        namespace {
            app::QuestDetailsUI__Class* type_info_ref = nullptr;
        }
        app::QuestDetailsUI__Class** type_info = &type_info_ref;
        inline app::QuestDetailsUI__Class* get_class() {
            return il2cpp::get_class<app::QuestDetailsUI__Class>(type_info, "", "QuestDetailsUI");
        }
        inline app::QuestDetailsUI* create() {
            return il2cpp::create_object<app::QuestDetailsUI>(get_class());
        }
    } // namespace QuestDetailsUI
} // namespace app::classes::types
