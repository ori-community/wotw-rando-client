#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestItemUI__Array {
        namespace {
            app::QuestItemUI__Array__Class* type_info_ref = nullptr;
        }
        app::QuestItemUI__Array__Class** type_info = &type_info_ref;
        inline app::QuestItemUI__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestItemUI__Array__Class>(type_info, "", "QuestItemUI[]");
        }
        inline app::QuestItemUI__Array* create() {
            return il2cpp::create_object<app::QuestItemUI__Array>(get_class());
        }
    } // namespace QuestItemUI__Array
} // namespace app::classes::types
