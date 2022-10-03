#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorBlock__Array {
        namespace {
            app::ColorBlock__Array__Class* type_info_ref = nullptr;
        }
        app::ColorBlock__Array__Class** type_info = &type_info_ref;
        inline app::ColorBlock__Array__Class* get_class() {
            return il2cpp::get_class<app::ColorBlock__Array__Class>(type_info, "UnityEngine.UI", "ColorBlock[]");
        }
        inline app::ColorBlock__Array* create() {
            return il2cpp::create_object<app::ColorBlock__Array>(get_class());
        }
    } // namespace ColorBlock__Array
} // namespace app::classes::types
