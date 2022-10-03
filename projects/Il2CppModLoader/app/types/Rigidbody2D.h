#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rigidbody2D {
        namespace {
            app::Rigidbody2D__Class* type_info_ref = nullptr;
        }
        app::Rigidbody2D__Class** type_info = &type_info_ref;
        inline app::Rigidbody2D__Class* get_class() {
            return il2cpp::get_class<app::Rigidbody2D__Class>(type_info, "UnityEngine", "Rigidbody2D");
        }
        inline app::Rigidbody2D* create() {
            return il2cpp::create_object<app::Rigidbody2D>(get_class());
        }
        inline app::Rigidbody2D__Array* create_array(int size) {
            return il2cpp::array_new<app::Rigidbody2D__Array>(get_class(), size);
        }
    } // namespace Rigidbody2D
} // namespace app::classes::types
