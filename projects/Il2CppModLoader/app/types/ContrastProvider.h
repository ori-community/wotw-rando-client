#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContrastProvider {
        namespace {
            app::ContrastProvider__Class* type_info_ref = nullptr;
        }
        app::ContrastProvider__Class** type_info = &type_info_ref;
        inline app::ContrastProvider__Class* get_class() {
            return il2cpp::get_class<app::ContrastProvider__Class>(type_info, "", "ContrastProvider");
        }
        inline app::ContrastProvider* create() {
            return il2cpp::create_object<app::ContrastProvider>(get_class());
        }
    } // namespace ContrastProvider
} // namespace app::classes::types
