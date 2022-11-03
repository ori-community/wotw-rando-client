#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_ArrayOrListVisitor {
        inline app::DynamicInstantiationScanner_ArrayOrListVisitor__Class** type_info = (app::DynamicInstantiationScanner_ArrayOrListVisitor__Class**)(modloader::win::memory::resolve_rva(0x0475CB88));
        inline app::DynamicInstantiationScanner_ArrayOrListVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_ArrayOrListVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "ArrayOrListVisitor");
        }
        inline app::DynamicInstantiationScanner_ArrayOrListVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_ArrayOrListVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_ArrayOrListVisitor
} // namespace app::classes::types
