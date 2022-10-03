#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecommendedAsConfigurableAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecommendedAsConfigurableAttribute__Class** type_info;
        inline app::RecommendedAsConfigurableAttribute__Class* get_class() {
            return il2cpp::get_class<app::RecommendedAsConfigurableAttribute__Class>(type_info, "System.ComponentModel", "RecommendedAsConfigurableAttribute");
        }
        inline app::RecommendedAsConfigurableAttribute* create() {
            return il2cpp::create_object<app::RecommendedAsConfigurableAttribute>(get_class());
        }
    } // namespace RecommendedAsConfigurableAttribute
} // namespace app::classes::types
