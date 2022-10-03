#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlState {
        namespace {
            app::DashOwlState__Class* type_info_ref = nullptr;
        }
        app::DashOwlState__Class** type_info = &type_info_ref;
        inline app::DashOwlState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlState__Class>(type_info, "", "DashOwlState");
        }
        inline app::DashOwlState* create() {
            return il2cpp::create_object<app::DashOwlState>(get_class());
        }
    } // namespace DashOwlState
} // namespace app::classes::types
