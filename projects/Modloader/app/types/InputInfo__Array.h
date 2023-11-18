#pragma once
#include <Modloader/app/structs/InputInfo__Array.h>
#include <Modloader/app/structs/InputInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputInfo__Array {
        inline app::InputInfo__Array__Class** type_info() {
            static app::InputInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::InputInfo__Array__Class>(type_info(), "Moon.UI", "InputInfo[]");
        }
        inline app::InputInfo__Array* create() {
            return il2cpp::create_object<app::InputInfo__Array>(get_class());
        }
    } // namespace InputInfo__Array
} // namespace app::classes::types
