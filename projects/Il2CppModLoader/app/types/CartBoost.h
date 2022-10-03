#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartBoost {
        namespace {
            app::CartBoost__Class* type_info_ref = nullptr;
        }
        app::CartBoost__Class** type_info = &type_info_ref;
        inline app::CartBoost__Class* get_class() {
            return il2cpp::get_class<app::CartBoost__Class>(type_info, "", "CartBoost");
        }
        inline app::CartBoost* create() {
            return il2cpp::create_object<app::CartBoost>(get_class());
        }
    } // namespace CartBoost
} // namespace app::classes::types
