#pragma once
#include <Modloader/app/structs/IgnoreAttribute.h>
#include <Modloader/app/structs/IgnoreAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnoreAttribute {
        inline app::IgnoreAttribute__Class** type_info() {
            static app::IgnoreAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnoreAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::IgnoreAttribute__Class>(type_info(), "UnityEngine.Bindings", "IgnoreAttribute");
        }
        inline app::IgnoreAttribute* create() {
            return il2cpp::create_object<app::IgnoreAttribute>(get_class());
        }
    } // namespace IgnoreAttribute
} // namespace app::classes::types
