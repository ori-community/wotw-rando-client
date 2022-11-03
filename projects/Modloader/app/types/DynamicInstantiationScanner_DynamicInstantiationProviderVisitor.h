#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_DynamicInstantiationProviderVisitor {
        inline app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class** type_info = (app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class**)(modloader::win::memory::resolve_rva(0x04780D80));
        inline app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "DynamicInstantiationProviderVisitor");
        }
        inline app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_DynamicInstantiationProviderVisitor
} // namespace app::classes::types
