#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor {
        inline app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class** type_info = (app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class**)(modloader::win::memory::resolve_rva(0x047759C0));
        inline app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "DynamicInstantiationPrewarmPriorityVisitor");
        }
        inline app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor
} // namespace app::classes::types
