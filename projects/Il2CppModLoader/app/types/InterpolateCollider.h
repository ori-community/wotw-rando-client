#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterpolateCollider {
        namespace {
            app::InterpolateCollider__Class* type_info_ref = nullptr;
        }
        app::InterpolateCollider__Class** type_info = &type_info_ref;
        inline app::InterpolateCollider__Class* get_class() {
            return il2cpp::get_class<app::InterpolateCollider__Class>(type_info, "", "InterpolateCollider");
        }
        inline app::InterpolateCollider* create() {
            return il2cpp::create_object<app::InterpolateCollider>(get_class());
        }
    } // namespace InterpolateCollider
} // namespace app::classes::types
