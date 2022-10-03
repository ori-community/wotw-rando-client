#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomConstantAttribute {
        namespace {
            app::CustomConstantAttribute__Class* type_info_ref = nullptr;
        }
        app::CustomConstantAttribute__Class** type_info = &type_info_ref;
        inline app::CustomConstantAttribute__Class* get_class() {
            return il2cpp::get_class<app::CustomConstantAttribute__Class>(type_info, "System.Runtime.CompilerServices", "CustomConstantAttribute");
        }
        inline app::CustomConstantAttribute* create() {
            return il2cpp::create_object<app::CustomConstantAttribute>(get_class());
        }
    } // namespace CustomConstantAttribute
} // namespace app::classes::types
