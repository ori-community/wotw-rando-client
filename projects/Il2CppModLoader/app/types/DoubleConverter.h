#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoubleConverter {
        namespace {
            app::DoubleConverter__Class* type_info_ref = nullptr;
        }
        app::DoubleConverter__Class** type_info = &type_info_ref;
        inline app::DoubleConverter__Class* get_class() {
            return il2cpp::get_class<app::DoubleConverter__Class>(type_info, "System.ComponentModel", "DoubleConverter");
        }
        inline app::DoubleConverter* create() {
            return il2cpp::create_object<app::DoubleConverter>(get_class());
        }
    } // namespace DoubleConverter
} // namespace app::classes::types
