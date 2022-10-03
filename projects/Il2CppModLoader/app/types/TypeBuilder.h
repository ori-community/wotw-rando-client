#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeBuilder {
        namespace {
            app::TypeBuilder__Class* type_info_ref = nullptr;
        }
        app::TypeBuilder__Class** type_info = &type_info_ref;
        inline app::TypeBuilder__Class* get_class() {
            return il2cpp::get_class<app::TypeBuilder__Class>(type_info, "System.Reflection.Emit", "TypeBuilder");
        }
        inline app::TypeBuilder* create() {
            return il2cpp::create_object<app::TypeBuilder>(get_class());
        }
    } // namespace TypeBuilder
} // namespace app::classes::types
