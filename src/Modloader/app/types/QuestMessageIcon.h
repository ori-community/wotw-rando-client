#pragma once
#include <Modloader/app/structs/QuestMessageIcon.h>
#include <Modloader/app/structs/QuestMessageIcon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestMessageIcon {
        inline app::QuestMessageIcon__Class** type_info() {
            static app::QuestMessageIcon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestMessageIcon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::QuestMessageIcon__Class>(type_info(), "", "QuestMessageIcon");
        }
        inline app::QuestMessageIcon* create() {
            return il2cpp::create_object<app::QuestMessageIcon>(get_class());
        }
    } // namespace QuestMessageIcon
} // namespace app::classes::types
