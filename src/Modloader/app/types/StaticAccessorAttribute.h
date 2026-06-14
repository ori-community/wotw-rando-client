#pragma once
#include <Modloader/app/structs/StaticAccessorAttribute.h>
#include <Modloader/app/structs/StaticAccessorAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaticAccessorAttribute {
        inline app::StaticAccessorAttribute__Class** type_info() {
            static app::StaticAccessorAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StaticAccessorAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StaticAccessorAttribute__Class* get_class() {
            return il2cpp::get_class<app::StaticAccessorAttribute__Class>(type_info(), "UnityEngine.Bindings", "StaticAccessorAttribute");
        }
        inline app::StaticAccessorAttribute* create() {
            return il2cpp::create_object<app::StaticAccessorAttribute>(get_class());
        }
    } // namespace StaticAccessorAttribute
} // namespace app::classes::types
