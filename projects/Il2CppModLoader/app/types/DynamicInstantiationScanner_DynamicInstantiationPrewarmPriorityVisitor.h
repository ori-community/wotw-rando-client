#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class** type_info;
        inline app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "DynamicInstantiationPrewarmPriorityVisitor");
        }
        inline app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor
} // namespace app::classes::types
