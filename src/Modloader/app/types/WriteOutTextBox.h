#pragma once
#include <Modloader/app/structs/WriteOutTextBox.h>
#include <Modloader/app/structs/WriteOutTextBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteOutTextBox {
        inline app::WriteOutTextBox__Class** type_info() {
            static app::WriteOutTextBox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WriteOutTextBox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WriteOutTextBox__Class* get_class() {
            return il2cpp::get_class<app::WriteOutTextBox__Class>(type_info(), "", "WriteOutTextBox");
        }
        inline app::WriteOutTextBox* create() {
            return il2cpp::create_object<app::WriteOutTextBox>(get_class());
        }
    } // namespace WriteOutTextBox
} // namespace app::classes::types
