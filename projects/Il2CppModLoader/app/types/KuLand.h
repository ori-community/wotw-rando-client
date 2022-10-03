#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuLand {
        namespace {
            app::KuLand__Class* type_info_ref = nullptr;
        }
        app::KuLand__Class** type_info = &type_info_ref;
        inline app::KuLand__Class* get_class() {
            return il2cpp::get_class<app::KuLand__Class>(type_info, "", "KuLand");
        }
        inline app::KuLand* create() {
            return il2cpp::create_object<app::KuLand>(get_class());
        }
    } // namespace KuLand
} // namespace app::classes::types
