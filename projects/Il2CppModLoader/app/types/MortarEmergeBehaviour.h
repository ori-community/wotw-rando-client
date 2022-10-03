#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarEmergeBehaviour {
        namespace {
            app::MortarEmergeBehaviour__Class* type_info_ref = nullptr;
        }
        app::MortarEmergeBehaviour__Class** type_info = &type_info_ref;
        inline app::MortarEmergeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarEmergeBehaviour__Class>(type_info, "", "MortarEmergeBehaviour");
        }
        inline app::MortarEmergeBehaviour* create() {
            return il2cpp::create_object<app::MortarEmergeBehaviour>(get_class());
        }
    } // namespace MortarEmergeBehaviour
} // namespace app::classes::types
