#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnFixedUpdate_1 {
        namespace {
            app::OnFixedUpdate_1__Class* type_info_ref = nullptr;
        }
        app::OnFixedUpdate_1__Class** type_info = &type_info_ref;
        inline app::OnFixedUpdate_1__Class* get_class() {
            return il2cpp::get_class<app::OnFixedUpdate_1__Class>(type_info, "fsm.triggers", "OnFixedUpdate");
        }
        inline app::OnFixedUpdate_1* create() {
            return il2cpp::create_object<app::OnFixedUpdate_1>(get_class());
        }
    } // namespace OnFixedUpdate_1
} // namespace app::classes::types
