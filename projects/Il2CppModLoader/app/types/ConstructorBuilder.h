#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstructorBuilder {
        namespace {
            app::ConstructorBuilder__Class* type_info_ref = nullptr;
        }
        app::ConstructorBuilder__Class** type_info = &type_info_ref;
        inline app::ConstructorBuilder__Class* get_class() {
            return il2cpp::get_class<app::ConstructorBuilder__Class>(type_info, "System.Reflection.Emit", "ConstructorBuilder");
        }
        inline app::ConstructorBuilder* create() {
            return il2cpp::create_object<app::ConstructorBuilder>(get_class());
        }
    } // namespace ConstructorBuilder
} // namespace app::classes::types
