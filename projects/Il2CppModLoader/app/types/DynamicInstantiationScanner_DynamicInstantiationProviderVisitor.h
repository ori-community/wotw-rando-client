#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_DynamicInstantiationProviderVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class** type_info;
        inline app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "DynamicInstantiationProviderVisitor");
        }
        inline app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_DynamicInstantiationProviderVisitor
} // namespace app::classes::types
