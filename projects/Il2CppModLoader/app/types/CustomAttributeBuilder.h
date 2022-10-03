#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeBuilder {
        namespace {
            app::CustomAttributeBuilder__Class* type_info_ref = nullptr;
        }
        app::CustomAttributeBuilder__Class** type_info = &type_info_ref;
        inline app::CustomAttributeBuilder__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeBuilder__Class>(type_info, "System.Reflection.Emit", "CustomAttributeBuilder");
        }
        inline app::CustomAttributeBuilder* create() {
            return il2cpp::create_object<app::CustomAttributeBuilder>(get_class());
        }
    } // namespace CustomAttributeBuilder
} // namespace app::classes::types
