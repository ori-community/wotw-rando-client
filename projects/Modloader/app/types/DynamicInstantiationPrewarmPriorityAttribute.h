#pragma once
#include <Modloader/app/structs/DynamicInstantiationPrewarmPriorityAttribute.h>
#include <Modloader/app/structs/DynamicInstantiationPrewarmPriorityAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationPrewarmPriorityAttribute {
        inline app::DynamicInstantiationPrewarmPriorityAttribute__Class** type_info() {
            static app::DynamicInstantiationPrewarmPriorityAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInstantiationPrewarmPriorityAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInstantiationPrewarmPriorityAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationPrewarmPriorityAttribute__Class>(type_info(), "", "DynamicInstantiationPrewarmPriorityAttribute");
        }
        inline app::DynamicInstantiationPrewarmPriorityAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationPrewarmPriorityAttribute>(get_class());
        }
    } // namespace DynamicInstantiationPrewarmPriorityAttribute
} // namespace app::classes::types
