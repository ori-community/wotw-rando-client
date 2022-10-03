#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuJump {
        namespace {
            app::KuJump__Class* type_info_ref = nullptr;
        }
        app::KuJump__Class** type_info = &type_info_ref;
        inline app::KuJump__Class* get_class() {
            return il2cpp::get_class<app::KuJump__Class>(type_info, "", "KuJump");
        }
        inline app::KuJump* create() {
            return il2cpp::create_object<app::KuJump>(get_class());
        }
    } // namespace KuJump
} // namespace app::classes::types
