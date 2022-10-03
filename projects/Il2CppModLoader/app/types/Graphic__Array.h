#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Graphic__Array {
        namespace {
            app::Graphic__Array__Class* type_info_ref = nullptr;
        }
        app::Graphic__Array__Class** type_info = &type_info_ref;
        inline app::Graphic__Array__Class* get_class() {
            return il2cpp::get_class<app::Graphic__Array__Class>(type_info, "UnityEngine.UI", "Graphic[]");
        }
        inline app::Graphic__Array* create() {
            return il2cpp::create_object<app::Graphic__Array>(get_class());
        }
    } // namespace Graphic__Array
} // namespace app::classes::types
