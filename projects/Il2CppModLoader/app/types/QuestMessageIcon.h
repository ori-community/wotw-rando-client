#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestMessageIcon {
        namespace {
            app::QuestMessageIcon__Class* type_info_ref = nullptr;
        }
        app::QuestMessageIcon__Class** type_info = &type_info_ref;
        inline app::QuestMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::QuestMessageIcon__Class>(type_info, "", "QuestMessageIcon");
        }
        inline app::QuestMessageIcon* create() {
            return il2cpp::create_object<app::QuestMessageIcon>(get_class());
        }
    } // namespace QuestMessageIcon
} // namespace app::classes::types
