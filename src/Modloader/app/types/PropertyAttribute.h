#pragma once
#include <Modloader/app/structs/PropertyAttribute.h>
#include <Modloader/app/structs/PropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyAttribute {
        inline app::PropertyAttribute__Class** type_info() {
            static app::PropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PropertyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::PropertyAttribute__Class>(type_info(), "UnityEngine", "PropertyAttribute");
        }
        inline app::PropertyAttribute* create() {
            return il2cpp::create_object<app::PropertyAttribute>(get_class());
        }
    } // namespace PropertyAttribute
} // namespace app::classes::types
