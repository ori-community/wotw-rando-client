#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_ArrayOrListVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationScanner_ArrayOrListVisitor__Class** type_info;
        inline app::DynamicInstantiationScanner_ArrayOrListVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_ArrayOrListVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "ArrayOrListVisitor");
        }
        inline app::DynamicInstantiationScanner_ArrayOrListVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_ArrayOrListVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_ArrayOrListVisitor
} // namespace app::classes::types
