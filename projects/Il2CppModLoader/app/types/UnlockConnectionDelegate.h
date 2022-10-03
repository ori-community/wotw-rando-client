#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockConnectionDelegate {
        namespace {
            app::UnlockConnectionDelegate__Class* type_info_ref = nullptr;
        }
        app::UnlockConnectionDelegate__Class** type_info = &type_info_ref;
        inline app::UnlockConnectionDelegate__Class* get_class() {
            return il2cpp::get_class<app::UnlockConnectionDelegate__Class>(type_info, "System.Net", "UnlockConnectionDelegate");
        }
        inline app::UnlockConnectionDelegate* create() {
            return il2cpp::create_object<app::UnlockConnectionDelegate>(get_class());
        }
    } // namespace UnlockConnectionDelegate
} // namespace app::classes::types
