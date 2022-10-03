#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FoxArmor {
        namespace {
            app::FoxArmor__Class* type_info_ref = nullptr;
        }
        app::FoxArmor__Class** type_info = &type_info_ref;
        inline app::FoxArmor__Class* get_class() {
            return il2cpp::get_class<app::FoxArmor__Class>(type_info, "", "FoxArmor");
        }
        inline app::FoxArmor* create() {
            return il2cpp::create_object<app::FoxArmor>(get_class());
        }
    } // namespace FoxArmor
} // namespace app::classes::types
