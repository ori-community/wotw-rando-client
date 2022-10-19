#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarEmergeBehaviour {
        namespace {
            inline app::MortarEmergeBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MortarEmergeBehaviour__Class** type_info = &type_info_ref;
        inline app::MortarEmergeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarEmergeBehaviour__Class>(type_info, "", "MortarEmergeBehaviour");
        }
        inline app::MortarEmergeBehaviour* create() {
            return il2cpp::create_object<app::MortarEmergeBehaviour>(get_class());
        }
    } // namespace MortarEmergeBehaviour
} // namespace app::classes::types
