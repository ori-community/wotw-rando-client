#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IParameterProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IParameterProvider__Class** type_info;
        inline app::IParameterProvider__Class* get_class() {
            return il2cpp::get_class<app::IParameterProvider__Class>(type_info, "System.Linq.Expressions", "IParameterProvider");
        }
        inline app::IParameterProvider* create() {
            return il2cpp::create_object<app::IParameterProvider>(get_class());
        }
    } // namespace IParameterProvider
} // namespace app::classes::types
