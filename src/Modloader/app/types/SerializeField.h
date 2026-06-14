#pragma once
#include <Modloader/app/structs/SerializeField.h>
#include <Modloader/app/structs/SerializeField__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializeField {
        inline app::SerializeField__Class** type_info() {
            static app::SerializeField__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializeField__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializeField__Class* get_class() {
            return il2cpp::get_class<app::SerializeField__Class>(type_info(), "UnityEngine", "SerializeField");
        }
        inline app::SerializeField* create() {
            return il2cpp::create_object<app::SerializeField>(get_class());
        }
    } // namespace SerializeField
} // namespace app::classes::types
