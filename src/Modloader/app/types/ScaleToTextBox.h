#pragma once
#include <Modloader/app/structs/ScaleToTextBox.h>
#include <Modloader/app/structs/ScaleToTextBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleToTextBox {
        inline app::ScaleToTextBox__Class** type_info() {
            static app::ScaleToTextBox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleToTextBox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleToTextBox__Class* get_class() {
            return il2cpp::get_class<app::ScaleToTextBox__Class>(type_info(), "", "ScaleToTextBox");
        }
        inline app::ScaleToTextBox* create() {
            return il2cpp::create_object<app::ScaleToTextBox>(get_class());
        }
    } // namespace ScaleToTextBox
} // namespace app::classes::types
