#pragma once
#include <Modloader/app/structs/QuestItemUI.h>
#include <Modloader/app/structs/QuestItemUI__Array.h>
#include <Modloader/app/structs/QuestItemUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestItemUI {
        inline app::QuestItemUI__Class** type_info() {
            static app::QuestItemUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestItemUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestItemUI__Class* get_class() {
            return il2cpp::get_class<app::QuestItemUI__Class>(type_info(), "", "QuestItemUI");
        }
        inline app::QuestItemUI* create() {
            return il2cpp::create_object<app::QuestItemUI>(get_class());
        }
        inline app::QuestItemUI__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestItemUI__Array>(get_class(), size);
        }
        inline app::QuestItemUI__Array* create_array(const std::vector<app::QuestItemUI*>& items) {
            return il2cpp::array_new<app::QuestItemUI__Array>(get_class(), items);
        }
    } // namespace QuestItemUI
} // namespace app::classes::types
