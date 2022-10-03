#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuCrouch {
        namespace {
            app::KuCrouch__Class* type_info_ref = nullptr;
        }
        app::KuCrouch__Class** type_info = &type_info_ref;
        inline app::KuCrouch__Class* get_class() {
            return il2cpp::get_class<app::KuCrouch__Class>(type_info, "", "KuCrouch");
        }
        inline app::KuCrouch* create() {
            return il2cpp::create_object<app::KuCrouch>(get_class());
        }
    } // namespace KuCrouch
} // namespace app::classes::types
