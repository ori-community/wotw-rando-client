#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_TypeVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationScanner_TypeVisitor__Class** type_info;
        inline app::DynamicInstantiationScanner_TypeVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_TypeVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "TypeVisitor");
        }
        inline app::DynamicInstantiationScanner_TypeVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_TypeVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_TypeVisitor
} // namespace app::classes::types
