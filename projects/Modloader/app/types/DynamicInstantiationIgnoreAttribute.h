#pragma once
#include <Modloader/app/structs/DynamicInstantiationIgnoreAttribute.h>
#include <Modloader/app/structs/DynamicInstantiationIgnoreAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationIgnoreAttribute {
        inline app::DynamicInstantiationIgnoreAttribute__Class** type_info() {
            static app::DynamicInstantiationIgnoreAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInstantiationIgnoreAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInstantiationIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationIgnoreAttribute__Class>(type_info(), "", "DynamicInstantiationIgnoreAttribute");
        }
        inline app::DynamicInstantiationIgnoreAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationIgnoreAttribute>(get_class());
        }
    } // namespace DynamicInstantiationIgnoreAttribute
} // namespace app::classes::types
