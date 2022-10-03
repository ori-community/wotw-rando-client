#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradablePropertyLevel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpgradablePropertyLevel__Class** type_info;
        inline app::UpgradablePropertyLevel__Class* get_class() {
            return il2cpp::get_class<app::UpgradablePropertyLevel__Class>(type_info, "", "UpgradablePropertyLevel");
        }
        inline app::UpgradablePropertyLevel* create() {
            return il2cpp::create_object<app::UpgradablePropertyLevel>(get_class());
        }
        inline app::UpgradablePropertyLevel__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradablePropertyLevel__Array>(get_class(), size);
        }
    } // namespace UpgradablePropertyLevel
} // namespace app::classes::types
