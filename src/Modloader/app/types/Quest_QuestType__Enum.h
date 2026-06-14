#pragma once
#include <Modloader/app/structs/Quest_QuestType__Enum.h>
#include <Modloader/app/structs/Quest_QuestType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Quest_QuestType__Enum {
        inline app::Quest_QuestType__Enum__Class** type_info() {
            static app::Quest_QuestType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Quest_QuestType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Quest_QuestType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Quest_QuestType__Enum__Class>(type_info(), "", "Quest", "QuestType");
        }
        inline app::Quest_QuestType__Enum* create() {
            return il2cpp::create_object<app::Quest_QuestType__Enum>(get_class());
        }
    } // namespace Quest_QuestType__Enum
} // namespace app::classes::types
