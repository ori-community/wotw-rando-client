#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SignatureHelper {
        namespace {
            app::SignatureHelper__Class* type_info_ref = nullptr;
        }
        app::SignatureHelper__Class** type_info = &type_info_ref;
        inline app::SignatureHelper__Class* get_class() {
            return il2cpp::get_class<app::SignatureHelper__Class>(type_info, "System.Reflection.Emit", "SignatureHelper");
        }
        inline app::SignatureHelper* create() {
            return il2cpp::create_object<app::SignatureHelper>(get_class());
        }
    } // namespace SignatureHelper
} // namespace app::classes::types
