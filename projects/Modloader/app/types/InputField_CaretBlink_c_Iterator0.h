#pragma once
#include <Modloader/app/structs/InputField_CaretBlink_c_Iterator0.h>
#include <Modloader/app/structs/InputField_CaretBlink_c_Iterator0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputField_CaretBlink_c_Iterator0 {
        inline app::InputField_CaretBlink_c_Iterator0__Class** type_info() {
            static app::InputField_CaretBlink_c_Iterator0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputField_CaretBlink_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x04762A20));
            }
            return cache;
        }
        inline app::InputField_CaretBlink_c_Iterator0__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_CaretBlink_c_Iterator0__Class>(type_info(), "UnityEngine.UI", "InputField", "<CaretBlink>c__Iterator0");
        }
        inline app::InputField_CaretBlink_c_Iterator0* create() {
            return il2cpp::create_object<app::InputField_CaretBlink_c_Iterator0>(get_class());
        }
    } // namespace InputField_CaretBlink_c_Iterator0
} // namespace app::classes::types
