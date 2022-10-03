#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeStateSetupHolder {
        namespace {
            app::ChangeStateSetupHolder__Class* type_info_ref = nullptr;
        }
        app::ChangeStateSetupHolder__Class** type_info = &type_info_ref;
        inline app::ChangeStateSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateSetupHolder__Class>(type_info, "Moon.Setups", "ChangeStateSetupHolder");
        }
        inline app::ChangeStateSetupHolder* create() {
            return il2cpp::create_object<app::ChangeStateSetupHolder>(get_class());
        }
        inline app::ChangeStateSetupHolder__Array* create_array(int size) {
            return il2cpp::array_new<app::ChangeStateSetupHolder__Array>(get_class(), size);
        }
    } // namespace ChangeStateSetupHolder
} // namespace app::classes::types
