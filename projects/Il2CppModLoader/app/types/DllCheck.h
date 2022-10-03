#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DllCheck {
        namespace {
            app::DllCheck__Class* type_info_ref = nullptr;
        }
        app::DllCheck__Class** type_info = &type_info_ref;
        inline app::DllCheck__Class* get_class() {
            return il2cpp::get_class<app::DllCheck__Class>(type_info, "Steamworks", "DllCheck");
        }
        inline app::DllCheck* create() {
            return il2cpp::create_object<app::DllCheck>(get_class());
        }
    } // namespace DllCheck
} // namespace app::classes::types
