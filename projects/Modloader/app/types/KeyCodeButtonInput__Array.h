#pragma once
#include <Modloader/app/structs/KeyCodeButtonInput__Array.h>
#include <Modloader/app/structs/KeyCodeButtonInput__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyCodeButtonInput__Array {
        inline app::KeyCodeButtonInput__Array__Class** type_info() {
            static app::KeyCodeButtonInput__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyCodeButtonInput__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyCodeButtonInput__Array__Class* get_class() {
            return il2cpp::get_class<app::KeyCodeButtonInput__Array__Class>(type_info(), "SmartInput", "KeyCodeButtonInput[]");
        }
        inline app::KeyCodeButtonInput__Array* create() {
            return il2cpp::create_object<app::KeyCodeButtonInput__Array>(get_class());
        }
    } // namespace KeyCodeButtonInput__Array
} // namespace app::classes::types
