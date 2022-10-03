#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuDash {
        namespace {
            app::KuDash__Class* type_info_ref = nullptr;
        }
        app::KuDash__Class** type_info = &type_info_ref;
        inline app::KuDash__Class* get_class() {
            return il2cpp::get_class<app::KuDash__Class>(type_info, "", "KuDash");
        }
        inline app::KuDash* create() {
            return il2cpp::create_object<app::KuDash>(get_class());
        }
    } // namespace KuDash
} // namespace app::classes::types
