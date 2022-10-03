#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradablePropertyType__Enum {
        namespace {
            app::UpgradablePropertyType__Enum__Class* type_info_ref = nullptr;
        }
        app::UpgradablePropertyType__Enum__Class** type_info = &type_info_ref;
        inline app::UpgradablePropertyType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UpgradablePropertyType__Enum__Class>(type_info, "", "UpgradablePropertyType");
        }
        inline app::UpgradablePropertyType__Enum* create() {
            return il2cpp::create_object<app::UpgradablePropertyType__Enum>(get_class());
        }
    } // namespace UpgradablePropertyType__Enum
} // namespace app::classes::types
