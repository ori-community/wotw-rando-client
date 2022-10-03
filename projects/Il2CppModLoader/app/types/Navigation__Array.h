#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Navigation__Array {
        namespace {
            app::Navigation__Array__Class* type_info_ref = nullptr;
        }
        app::Navigation__Array__Class** type_info = &type_info_ref;
        inline app::Navigation__Array__Class* get_class() {
            return il2cpp::get_class<app::Navigation__Array__Class>(type_info, "UnityEngine.UI", "Navigation[]");
        }
        inline app::Navigation__Array* create() {
            return il2cpp::create_object<app::Navigation__Array>(get_class());
        }
    } // namespace Navigation__Array
} // namespace app::classes::types
