#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestMessageIcon_QuestMode__Enum {
        namespace {
            inline app::QuestMessageIcon_QuestMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::QuestMessageIcon_QuestMode__Enum__Class** type_info = &type_info_ref;
        inline app::QuestMessageIcon_QuestMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestMessageIcon_QuestMode__Enum__Class>(type_info, "", "QuestMessageIcon", "QuestMode");
        }
        inline app::QuestMessageIcon_QuestMode__Enum* create() {
            return il2cpp::create_object<app::QuestMessageIcon_QuestMode__Enum>(get_class());
        }
    } // namespace QuestMessageIcon_QuestMode__Enum
} // namespace app::classes::types
