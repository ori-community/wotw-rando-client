#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NPCMessageBox {
        namespace {
            app::NPCMessageBox__Class* type_info_ref = nullptr;
        }
        app::NPCMessageBox__Class** type_info = &type_info_ref;
        inline app::NPCMessageBox__Class* get_class() {
            return il2cpp::get_class<app::NPCMessageBox__Class>(type_info, "", "NPCMessageBox");
        }
        inline app::NPCMessageBox* create() {
            return il2cpp::create_object<app::NPCMessageBox>(get_class());
        }
    } // namespace NPCMessageBox
} // namespace app::classes::types
