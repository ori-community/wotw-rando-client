#pragma once
#include <Modloader/app/structs/CartStopper__Array.h>
#include <Modloader/app/structs/CartStopper__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartStopper__Array {
        inline app::CartStopper__Array__Class** type_info() {
            static app::CartStopper__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartStopper__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartStopper__Array__Class* get_class() {
            return il2cpp::get_class<app::CartStopper__Array__Class>(type_info(), "", "CartStopper[]");
        }
        inline app::CartStopper__Array* create() {
            return il2cpp::create_object<app::CartStopper__Array>(get_class());
        }
    } // namespace CartStopper__Array
} // namespace app::classes::types
