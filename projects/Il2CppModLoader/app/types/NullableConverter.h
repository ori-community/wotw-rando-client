#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullableConverter {
        namespace {
            app::NullableConverter__Class* type_info_ref = nullptr;
        }
        app::NullableConverter__Class** type_info = &type_info_ref;
        inline app::NullableConverter__Class* get_class() {
            return il2cpp::get_class<app::NullableConverter__Class>(type_info, "System.ComponentModel", "NullableConverter");
        }
        inline app::NullableConverter* create() {
            return il2cpp::create_object<app::NullableConverter>(get_class());
        }
    } // namespace NullableConverter
} // namespace app::classes::types
