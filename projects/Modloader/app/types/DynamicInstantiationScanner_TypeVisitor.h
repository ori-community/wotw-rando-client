#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner_TypeVisitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_TypeVisitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_TypeVisitor {
        inline app::DynamicInstantiationScanner_TypeVisitor__Class** type_info() {
            static app::DynamicInstantiationScanner_TypeVisitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationScanner_TypeVisitor__Class**)(modloader::win::memory::resolve_rva(0x0474A918));
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner_TypeVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_TypeVisitor__Class>(type_info(), "", "DynamicInstantiationScanner", "TypeVisitor");
        }
        inline app::DynamicInstantiationScanner_TypeVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_TypeVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_TypeVisitor
} // namespace app::classes::types
