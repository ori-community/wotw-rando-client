#pragma once
#include <Modloader/app/structs/DynamicInstantiationAttribute.h>
#include <Modloader/app/structs/DynamicInstantiationAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationAttribute {
        inline app::DynamicInstantiationAttribute__Class** type_info() {
            static app::DynamicInstantiationAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInstantiationAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInstantiationAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationAttribute__Class>(type_info(), "", "DynamicInstantiationAttribute");
        }
        inline app::DynamicInstantiationAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationAttribute>(get_class());
        }
    } // namespace DynamicInstantiationAttribute
} // namespace app::classes::types
