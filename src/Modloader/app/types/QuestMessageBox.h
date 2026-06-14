#pragma once
#include <Modloader/app/structs/QuestMessageBox.h>
#include <Modloader/app/structs/QuestMessageBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestMessageBox {
        inline app::QuestMessageBox__Class** type_info() {
            static app::QuestMessageBox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestMessageBox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestMessageBox__Class* get_class() {
            return il2cpp::get_class<app::QuestMessageBox__Class>(type_info(), "", "QuestMessageBox");
        }
        inline app::QuestMessageBox* create() {
            return il2cpp::create_object<app::QuestMessageBox>(get_class());
        }
    } // namespace QuestMessageBox
} // namespace app::classes::types
