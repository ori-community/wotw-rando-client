#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnsafeValueTypeAttribute {
        namespace {
            app::UnsafeValueTypeAttribute__Class* type_info_ref = nullptr;
        }
        app::UnsafeValueTypeAttribute__Class** type_info = &type_info_ref;
        inline app::UnsafeValueTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnsafeValueTypeAttribute__Class>(type_info, "System.Runtime.CompilerServices", "UnsafeValueTypeAttribute");
        }
        inline app::UnsafeValueTypeAttribute* create() {
            return il2cpp::create_object<app::UnsafeValueTypeAttribute>(get_class());
        }
    } // namespace UnsafeValueTypeAttribute
} // namespace app::classes::types
