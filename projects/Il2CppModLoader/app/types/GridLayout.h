#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GridLayout {
        namespace {
            app::GridLayout__Class* type_info_ref = nullptr;
        }
        app::GridLayout__Class** type_info = &type_info_ref;
        inline app::GridLayout__Class* get_class() {
            return il2cpp::get_class<app::GridLayout__Class>(type_info, "UnityEngine", "GridLayout");
        }
        inline app::GridLayout* create() {
            return il2cpp::create_object<app::GridLayout>(get_class());
        }
    } // namespace GridLayout
} // namespace app::classes::types
