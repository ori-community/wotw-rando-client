#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradableAbility {
        namespace {
            app::UpgradableAbility__Class* type_info_ref = nullptr;
        }
        app::UpgradableAbility__Class** type_info = &type_info_ref;
        inline app::UpgradableAbility__Class* get_class() {
            return il2cpp::get_class<app::UpgradableAbility__Class>(type_info, "", "UpgradableAbility");
        }
        inline app::UpgradableAbility* create() {
            return il2cpp::create_object<app::UpgradableAbility>(get_class());
        }
        inline app::UpgradableAbility__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradableAbility__Array>(get_class(), size);
        }
    } // namespace UpgradableAbility
} // namespace app::classes::types
