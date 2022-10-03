#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradableProperty__Array {
        namespace {
            app::UpgradableProperty__Array__Class* type_info_ref = nullptr;
        }
        app::UpgradableProperty__Array__Class** type_info = &type_info_ref;
        inline app::UpgradableProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradableProperty__Array__Class>(type_info, "", "UpgradableProperty[]");
        }
        inline app::UpgradableProperty__Array* create() {
            return il2cpp::create_object<app::UpgradableProperty__Array>(get_class());
        }
    } // namespace UpgradableProperty__Array
} // namespace app::classes::types
