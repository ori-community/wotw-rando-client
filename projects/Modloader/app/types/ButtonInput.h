#pragma once
#include <Modloader/app/structs/ButtonInput.h>
#include <Modloader/app/structs/ButtonInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ButtonInput {
        inline app::ButtonInput__Class** type_info() {
            static app::ButtonInput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ButtonInput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ButtonInput__Class* get_class() {
            return il2cpp::get_class<app::ButtonInput__Class>(type_info(), "frameworks.Switch", "ButtonInput");
        }
        inline app::ButtonInput* create() {
            return il2cpp::create_object<app::ButtonInput>(get_class());
        }
    } // namespace ButtonInput
} // namespace app::classes::types
