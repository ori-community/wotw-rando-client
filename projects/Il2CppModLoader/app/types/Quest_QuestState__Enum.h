#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Quest_QuestState__Enum {
        namespace {
            app::Quest_QuestState__Enum__Class* type_info_ref = nullptr;
        }
        app::Quest_QuestState__Enum__Class** type_info = &type_info_ref;
        inline app::Quest_QuestState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Quest_QuestState__Enum__Class>(type_info, "", "Quest", "QuestState");
        }
        inline app::Quest_QuestState__Enum* create() {
            return il2cpp::create_object<app::Quest_QuestState__Enum>(get_class());
        }
    } // namespace Quest_QuestState__Enum
} // namespace app::classes::types
