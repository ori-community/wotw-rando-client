#pragma once
#include <Modloader/app/structs/QuestIconUI.h>
#include <Modloader/app/structs/QuestIconUI__Array.h>
#include <Modloader/app/structs/QuestIconUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestIconUI {
        inline app::QuestIconUI__Class** type_info() {
            static app::QuestIconUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestIconUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestIconUI__Class* get_class() {
            return il2cpp::get_class<app::QuestIconUI__Class>(type_info(), "", "QuestIconUI");
        }
        inline app::QuestIconUI* create() {
            return il2cpp::create_object<app::QuestIconUI>(get_class());
        }
        inline app::QuestIconUI__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestIconUI__Array>(get_class(), size);
        }
        inline app::QuestIconUI__Array* create_array(const std::vector<app::QuestIconUI*>& items) {
            return il2cpp::array_new<app::QuestIconUI__Array>(get_class(), items);
        }
    } // namespace QuestIconUI
} // namespace app::classes::types
