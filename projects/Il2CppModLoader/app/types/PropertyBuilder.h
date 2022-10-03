#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyBuilder {
        namespace {
            app::PropertyBuilder__Class* type_info_ref = nullptr;
        }
        app::PropertyBuilder__Class** type_info = &type_info_ref;
        inline app::PropertyBuilder__Class* get_class() {
            return il2cpp::get_class<app::PropertyBuilder__Class>(type_info, "System.Reflection.Emit", "PropertyBuilder");
        }
        inline app::PropertyBuilder* create() {
            return il2cpp::create_object<app::PropertyBuilder>(get_class());
        }
    } // namespace PropertyBuilder
} // namespace app::classes::types
