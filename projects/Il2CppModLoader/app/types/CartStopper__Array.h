#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartStopper__Array {
        namespace {
            app::CartStopper__Array__Class* type_info_ref = nullptr;
        }
        app::CartStopper__Array__Class** type_info = &type_info_ref;
        inline app::CartStopper__Array__Class* get_class() {
            return il2cpp::get_class<app::CartStopper__Array__Class>(type_info, "", "CartStopper[]");
        }
        inline app::CartStopper__Array* create() {
            return il2cpp::create_object<app::CartStopper__Array>(get_class());
        }
    } // namespace CartStopper__Array
} // namespace app::classes::types
