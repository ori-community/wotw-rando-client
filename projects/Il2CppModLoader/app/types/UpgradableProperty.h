#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradableProperty {
        namespace {
            app::UpgradableProperty__Class* type_info_ref = nullptr;
        }
        app::UpgradableProperty__Class** type_info = &type_info_ref;
        inline app::UpgradableProperty__Class* get_class() {
            return il2cpp::get_class<app::UpgradableProperty__Class>(type_info, "", "UpgradableProperty");
        }
        inline app::UpgradableProperty* create() {
            return il2cpp::create_object<app::UpgradableProperty>(get_class());
        }
        inline app::UpgradableProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradableProperty__Array>(get_class(), size);
        }
    } // namespace UpgradableProperty
} // namespace app::classes::types
