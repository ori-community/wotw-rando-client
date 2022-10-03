#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionAtEndOfTextBox {
        namespace {
            app::PositionAtEndOfTextBox__Class* type_info_ref = nullptr;
        }
        app::PositionAtEndOfTextBox__Class** type_info = &type_info_ref;
        inline app::PositionAtEndOfTextBox__Class* get_class() {
            return il2cpp::get_class<app::PositionAtEndOfTextBox__Class>(type_info, "", "PositionAtEndOfTextBox");
        }
        inline app::PositionAtEndOfTextBox* create() {
            return il2cpp::create_object<app::PositionAtEndOfTextBox>(get_class());
        }
    } // namespace PositionAtEndOfTextBox
} // namespace app::classes::types
