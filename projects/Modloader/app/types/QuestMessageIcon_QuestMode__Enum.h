#pragma once
#include <Modloader/app/structs/QuestMessageIcon_QuestMode__Enum.h>
#include <Modloader/app/structs/QuestMessageIcon_QuestMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestMessageIcon_QuestMode__Enum {
        inline app::QuestMessageIcon_QuestMode__Enum__Class** type_info() {
            static app::QuestMessageIcon_QuestMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestMessageIcon_QuestMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestMessageIcon_QuestMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestMessageIcon_QuestMode__Enum__Class>(type_info(), "", "QuestMessageIcon", "QuestMode");
        }
        inline app::QuestMessageIcon_QuestMode__Enum* create() {
            return il2cpp::create_object<app::QuestMessageIcon_QuestMode__Enum>(get_class());
        }
    } // namespace QuestMessageIcon_QuestMode__Enum
} // namespace app::classes::types
