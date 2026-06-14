#pragma once
#include <Modloader/app/structs/NotNullAttribute.h>
#include <Modloader/app/structs/NotNullAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotNullAttribute {
        inline app::NotNullAttribute__Class** type_info() {
            static app::NotNullAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NotNullAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NotNullAttribute__Class* get_class() {
            return il2cpp::get_class<app::NotNullAttribute__Class>(type_info(), "UnityEngine.Bindings", "NotNullAttribute");
        }
        inline app::NotNullAttribute* create() {
            return il2cpp::create_object<app::NotNullAttribute>(get_class());
        }
    } // namespace NotNullAttribute
} // namespace app::classes::types
