#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Toggle {
        namespace {
            app::Toggle__Class* type_info_ref = nullptr;
        }
        app::Toggle__Class** type_info = &type_info_ref;
        inline app::Toggle__Class* get_class() {
            return il2cpp::get_class<app::Toggle__Class>(type_info, "UnityEngine.UI", "Toggle");
        }
        inline app::Toggle* create() {
            return il2cpp::create_object<app::Toggle>(get_class());
        }
        inline app::Toggle__Array* create_array(int size) {
            return il2cpp::array_new<app::Toggle__Array>(get_class(), size);
        }
    } // namespace Toggle
} // namespace app::classes::types
