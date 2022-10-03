#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestIconUI__Array {
        namespace {
            app::QuestIconUI__Array__Class* type_info_ref = nullptr;
        }
        app::QuestIconUI__Array__Class** type_info = &type_info_ref;
        inline app::QuestIconUI__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestIconUI__Array__Class>(type_info, "", "QuestIconUI[]");
        }
        inline app::QuestIconUI__Array* create() {
            return il2cpp::create_object<app::QuestIconUI__Array>(get_class());
        }
    } // namespace QuestIconUI__Array
} // namespace app::classes::types
