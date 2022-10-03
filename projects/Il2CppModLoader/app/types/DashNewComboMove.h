#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashNewComboMove {
        namespace {
            app::DashNewComboMove__Class* type_info_ref = nullptr;
        }
        app::DashNewComboMove__Class** type_info = &type_info_ref;
        inline app::DashNewComboMove__Class* get_class() {
            return il2cpp::get_class<app::DashNewComboMove__Class>(type_info, "Moon.ComboSystem", "DashNewComboMove");
        }
        inline app::DashNewComboMove* create() {
            return il2cpp::create_object<app::DashNewComboMove>(get_class());
        }
    } // namespace DashNewComboMove
} // namespace app::classes::types
