#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossContextDelegate {
        namespace {
            app::CrossContextDelegate__Class* type_info_ref = nullptr;
        }
        app::CrossContextDelegate__Class** type_info = &type_info_ref;
        inline app::CrossContextDelegate__Class* get_class() {
            return il2cpp::get_class<app::CrossContextDelegate__Class>(type_info, "System.Runtime.Remoting.Contexts", "CrossContextDelegate");
        }
        inline app::CrossContextDelegate* create() {
            return il2cpp::create_object<app::CrossContextDelegate>(get_class());
        }
    } // namespace CrossContextDelegate
} // namespace app::classes::types
