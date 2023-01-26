#pragma once
#include <Modloader/app/structs/Cart__Array.h>
#include <Modloader/app/structs/Cart__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Cart__Array {
        inline app::Cart__Array__Class** type_info() {
            static app::Cart__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Cart__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Cart__Array__Class* get_class() {
            return il2cpp::get_class<app::Cart__Array__Class>(type_info(), "", "Cart[]");
        }
        inline app::Cart__Array* create() {
            return il2cpp::create_object<app::Cart__Array>(get_class());
        }
    } // namespace Cart__Array
} // namespace app::classes::types
