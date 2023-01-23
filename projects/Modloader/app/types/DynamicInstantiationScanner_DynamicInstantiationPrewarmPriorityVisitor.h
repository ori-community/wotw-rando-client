#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor__Class.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_DynamicInstantiationPrewarmPriorityVisitor.h>

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
