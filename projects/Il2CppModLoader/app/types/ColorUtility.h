#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorUtility {
        namespace {
            app::ColorUtility__Class* type_info_ref = nullptr;
        }
        app::ColorUtility__Class** type_info = &type_info_ref;
        inline app::ColorUtility__Class* get_class() {
            return il2cpp::get_class<app::ColorUtility__Class>(type_info, "UnityEngine", "ColorUtility");
        }
        inline app::ColorUtility* create() {
            return il2cpp::create_object<app::ColorUtility>(get_class());
        }
    } // namespace ColorUtility
} // namespace app::classes::types
