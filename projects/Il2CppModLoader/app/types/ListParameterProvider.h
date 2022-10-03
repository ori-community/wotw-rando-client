#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListParameterProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListParameterProvider__Class** type_info;
        inline app::ListParameterProvider__Class* get_class() {
            return il2cpp::get_class<app::ListParameterProvider__Class>(type_info, "System.Dynamic.Utils", "ListParameterProvider");
        }
        inline app::ListParameterProvider* create() {
            return il2cpp::create_object<app::ListParameterProvider>(get_class());
        }
    } // namespace ListParameterProvider
} // namespace app::classes::types
