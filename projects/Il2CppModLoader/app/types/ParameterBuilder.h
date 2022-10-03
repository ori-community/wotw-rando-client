#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterBuilder {
        namespace {
            app::ParameterBuilder__Class* type_info_ref = nullptr;
        }
        app::ParameterBuilder__Class** type_info = &type_info_ref;
        inline app::ParameterBuilder__Class* get_class() {
            return il2cpp::get_class<app::ParameterBuilder__Class>(type_info, "System.Reflection.Emit", "ParameterBuilder");
        }
        inline app::ParameterBuilder* create() {
            return il2cpp::create_object<app::ParameterBuilder>(get_class());
        }
    } // namespace ParameterBuilder
} // namespace app::classes::types
