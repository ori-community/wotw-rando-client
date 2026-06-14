#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor__Array.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_Visitor {
        inline app::DynamicInstantiationScanner_Visitor__Class** type_info() {
            static app::DynamicInstantiationScanner_Visitor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInstantiationScanner_Visitor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner_Visitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_Visitor__Class>(type_info(), "", "DynamicInstantiationScanner", "Visitor");
        }
        inline app::DynamicInstantiationScanner_Visitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_Visitor>(get_class());
        }
        inline app::DynamicInstantiationScanner_Visitor__Array* create_array(int size) {
            return il2cpp::array_new<app::DynamicInstantiationScanner_Visitor__Array>(get_class(), size);
        }
        inline app::DynamicInstantiationScanner_Visitor__Array* create_array(const std::vector<app::DynamicInstantiationScanner_Visitor*>& items) {
            return il2cpp::array_new<app::DynamicInstantiationScanner_Visitor__Array>(get_class(), items);
        }
    } // namespace DynamicInstantiationScanner_Visitor
} // namespace app::classes::types
