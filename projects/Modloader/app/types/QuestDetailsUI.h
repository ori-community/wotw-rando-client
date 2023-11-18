#pragma once
#include <Modloader/app/structs/QuestDetailsUI.h>
#include <Modloader/app/structs/QuestDetailsUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestDetailsUI {
        inline app::QuestDetailsUI__Class** type_info() {
            static app::QuestDetailsUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestDetailsUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestDetailsUI__Class* get_class() {
            return il2cpp::get_class<app::QuestDetailsUI__Class>(type_info(), "", "QuestDetailsUI");
        }
        inline app::QuestDetailsUI* create() {
            return il2cpp::create_object<app::QuestDetailsUI>(get_class());
        }
    } // namespace QuestDetailsUI
} // namespace app::classes::types
