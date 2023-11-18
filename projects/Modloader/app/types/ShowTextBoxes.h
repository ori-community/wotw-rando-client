#pragma once
#include <Modloader/app/structs/ShowTextBoxes.h>
#include <Modloader/app/structs/ShowTextBoxes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowTextBoxes {
        inline app::ShowTextBoxes__Class** type_info() {
            static app::ShowTextBoxes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowTextBoxes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowTextBoxes__Class* get_class() {
            return il2cpp::get_class<app::ShowTextBoxes__Class>(type_info(), "", "ShowTextBoxes");
        }
        inline app::ShowTextBoxes* create() {
            return il2cpp::create_object<app::ShowTextBoxes>(get_class());
        }
    } // namespace ShowTextBoxes
} // namespace app::classes::types
