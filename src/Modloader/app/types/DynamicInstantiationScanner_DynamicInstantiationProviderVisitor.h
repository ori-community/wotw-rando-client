#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner_DynamicInstantiationProviderVisitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_DynamicInstantiationProviderVisitor {
        inline app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class** type_info() {
            static app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class**)(modloader::win::memory::resolve_rva(0x04780D80));
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor__Class>(type_info(), "", "DynamicInstantiationScanner", "DynamicInstantiationProviderVisitor");
        }
        inline app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_DynamicInstantiationProviderVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_DynamicInstantiationProviderVisitor
} // namespace app::classes::types
