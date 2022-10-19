#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestMessageBox {
        namespace {
            inline app::QuestMessageBox__Class* type_info_ref = nullptr;
        }
        inline app::QuestMessageBox__Class** type_info = &type_info_ref;
        inline app::QuestMessageBox__Class* get_class() {
            return il2cpp::get_class<app::QuestMessageBox__Class>(type_info, "", "QuestMessageBox");
        }
        inline app::QuestMessageBox* create() {
            return il2cpp::create_object<app::QuestMessageBox>(get_class());
        }
    } // namespace QuestMessageBox
} // namespace app::classes::types
