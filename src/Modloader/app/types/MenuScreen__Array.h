#pragma once
#include <Modloader/app/structs/MenuScreen__Array.h>
#include <Modloader/app/structs/MenuScreen__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuScreen__Array {
        inline app::MenuScreen__Array__Class** type_info() {
            static app::MenuScreen__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MenuScreen__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MenuScreen__Array__Class* get_class() {
            return il2cpp::get_class<app::MenuScreen__Array__Class>(type_info(), "", "MenuScreen[]");
        }
        inline app::MenuScreen__Array* create() {
            return il2cpp::create_object<app::MenuScreen__Array>(get_class());
        }
    } // namespace MenuScreen__Array
} // namespace app::classes::types
