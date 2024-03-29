#pragma once
#include <Modloader/app/structs/PositionAtEndOfTextBox.h>
#include <Modloader/app/structs/PositionAtEndOfTextBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionAtEndOfTextBox {
        inline app::PositionAtEndOfTextBox__Class** type_info() {
            static app::PositionAtEndOfTextBox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionAtEndOfTextBox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionAtEndOfTextBox__Class* get_class() {
            return il2cpp::get_class<app::PositionAtEndOfTextBox__Class>(type_info(), "", "PositionAtEndOfTextBox");
        }
        inline app::PositionAtEndOfTextBox* create() {
            return il2cpp::create_object<app::PositionAtEndOfTextBox>(get_class());
        }
    } // namespace PositionAtEndOfTextBox
} // namespace app::classes::types
