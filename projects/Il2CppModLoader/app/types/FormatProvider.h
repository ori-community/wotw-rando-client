#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FormatProvider {
        namespace {
            app::FormatProvider__Class* type_info_ref = nullptr;
        }
        app::FormatProvider__Class** type_info = &type_info_ref;
        inline app::FormatProvider__Class* get_class() {
            return il2cpp::get_class<app::FormatProvider__Class>(type_info, "System.Globalization", "FormatProvider");
        }
        inline app::FormatProvider* create() {
            return il2cpp::create_object<app::FormatProvider>(get_class());
        }
    } // namespace FormatProvider
} // namespace app::classes::types
