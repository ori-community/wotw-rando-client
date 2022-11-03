#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestItemUI {
        namespace {
            inline app::QuestItemUI__Class* type_info_ref = nullptr;
        }
        inline app::QuestItemUI__Class** type_info = &type_info_ref;
        inline app::QuestItemUI__Class* get_class() {
            return il2cpp::get_class<app::QuestItemUI__Class>(type_info, "", "QuestItemUI");
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
