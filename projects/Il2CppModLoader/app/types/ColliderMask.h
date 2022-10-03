#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColliderMask {
        namespace {
            app::ColliderMask__Class* type_info_ref = nullptr;
        }
        app::ColliderMask__Class** type_info = &type_info_ref;
        inline app::ColliderMask__Class* get_class() {
            return il2cpp::get_class<app::ColliderMask__Class>(type_info, "", "ColliderMask");
        }
        inline app::ColliderMask* create() {
            return il2cpp::create_object<app::ColliderMask>(get_class());
        }
    } // namespace ColliderMask
} // namespace app::classes::types
