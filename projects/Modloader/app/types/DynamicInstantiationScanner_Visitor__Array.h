#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor__Array.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_Visitor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_Visitor__Array {
        inline app::DynamicInstantiationScanner_Visitor__Array__Class** type_info() {
            static app::DynamicInstantiationScanner_Visitor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInstantiationScanner_Visitor__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner_Visitor__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationScanner_Visitor__Array__Class>(type_info(), "", "DynamicInstantiationScanner+Visitor[]");
        }
        inline app::DynamicInstantiationScanner_Visitor__Array* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_Visitor__Array>(get_class());
        }
    } // namespace DynamicInstantiationScanner_Visitor__Array
} // namespace app::classes::types
