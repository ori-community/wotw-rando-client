#pragma once
#include <Modloader/app/structs/InputField.h>
#include <Modloader/app/structs/InputField__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputField {
        inline app::InputField__Class** type_info() {
            static app::InputField__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputField__Class**)(modloader::win::memory::resolve_rva(0x04748FF8));
            }
            return cache;
        }
        inline app::InputField__Class* get_class() {
            return il2cpp::get_class<app::InputField__Class>(type_info(), "UnityEngine.UI", "InputField");
        }
        inline app::InputField* create() {
            return il2cpp::create_object<app::InputField>(get_class());
        }
    } // namespace InputField
} // namespace app::classes::types
