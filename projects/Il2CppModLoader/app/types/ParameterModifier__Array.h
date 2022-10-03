#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParameterModifier__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParameterModifier__Array__Class** type_info;
        inline app::ParameterModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterModifier__Array__Class>(type_info, "System.Reflection", "ParameterModifier[]");
        }
        inline app::ParameterModifier__Array* create() {
            return il2cpp::create_object<app::ParameterModifier__Array>(get_class());
        }
    } // namespace ParameterModifier__Array
} // namespace app::classes::types
