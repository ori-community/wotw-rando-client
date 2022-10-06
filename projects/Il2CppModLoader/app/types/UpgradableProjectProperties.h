#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradableProjectProperties {
        namespace {
            app::UpgradableProjectProperties__Class* type_info_ref = nullptr;
        }
        app::UpgradableProjectProperties__Class** type_info = &type_info_ref;
        inline app::UpgradableProjectProperties__Class* get_class() {
            return il2cpp::get_class<app::UpgradableProjectProperties__Class>(type_info, "", "UpgradableProjectProperties");
        }
        inline app::UpgradableProjectProperties* create() {
            return il2cpp::create_object<app::UpgradableProjectProperties>(get_class());
        }
        inline app::UpgradableProjectProperties__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradableProjectProperties__Array>(get_class(), size);
        }
        inline app::UpgradableProjectProperties__Array* create_array(const std::vector<app::UpgradableProjectProperties*>& items) {
            return il2cpp::array_new<app::UpgradableProjectProperties__Array>(get_class(), items);
        }
    } // namespace UpgradableProjectProperties
} // namespace app::classes::types
