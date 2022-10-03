#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriCellBar {
        namespace {
            app::OriCellBar__Class* type_info_ref = nullptr;
        }
        app::OriCellBar__Class** type_info = &type_info_ref;
        inline app::OriCellBar__Class* get_class() {
            return il2cpp::get_class<app::OriCellBar__Class>(type_info, "", "OriCellBar");
        }
        inline app::OriCellBar* create() {
            return il2cpp::create_object<app::OriCellBar>(get_class());
        }
    } // namespace OriCellBar
} // namespace app::classes::types
