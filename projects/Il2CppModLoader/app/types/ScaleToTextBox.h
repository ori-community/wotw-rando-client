#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScaleToTextBox {
        namespace {
            app::ScaleToTextBox__Class* type_info_ref = nullptr;
        }
        app::ScaleToTextBox__Class** type_info = &type_info_ref;
        inline app::ScaleToTextBox__Class* get_class() {
            return il2cpp::get_class<app::ScaleToTextBox__Class>(type_info, "", "ScaleToTextBox");
        }
        inline app::ScaleToTextBox* create() {
            return il2cpp::create_object<app::ScaleToTextBox>(get_class());
        }
    } // namespace ScaleToTextBox
} // namespace app::classes::types
