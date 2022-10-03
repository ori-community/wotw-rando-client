#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeStateSetupData__Array {
        namespace {
            app::ChangeStateSetupData__Array__Class* type_info_ref = nullptr;
        }
        app::ChangeStateSetupData__Array__Class** type_info = &type_info_ref;
        inline app::ChangeStateSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateSetupData__Array__Class>(type_info, "Moon.Setups", "ChangeStateSetupData[]");
        }
        inline app::ChangeStateSetupData__Array* create() {
            return il2cpp::create_object<app::ChangeStateSetupData__Array>(get_class());
        }
    } // namespace ChangeStateSetupData__Array
} // namespace app::classes::types
