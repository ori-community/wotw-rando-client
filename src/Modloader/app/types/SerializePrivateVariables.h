#pragma once
#include <Modloader/app/structs/SerializePrivateVariables.h>
#include <Modloader/app/structs/SerializePrivateVariables__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializePrivateVariables {
        inline app::SerializePrivateVariables__Class** type_info() {
            static app::SerializePrivateVariables__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializePrivateVariables__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializePrivateVariables__Class* get_class() {
            return il2cpp::get_class<app::SerializePrivateVariables__Class>(type_info(), "UnityEngine", "SerializePrivateVariables");
        }
        inline app::SerializePrivateVariables* create() {
            return il2cpp::create_object<app::SerializePrivateVariables>(get_class());
        }
    } // namespace SerializePrivateVariables
} // namespace app::classes::types
