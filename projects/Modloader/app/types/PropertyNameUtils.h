#pragma once
#include <Modloader/app/structs/PropertyNameUtils.h>
#include <Modloader/app/structs/PropertyNameUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyNameUtils {
        inline app::PropertyNameUtils__Class** type_info() {
            static app::PropertyNameUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PropertyNameUtils__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PropertyNameUtils__Class* get_class() {
            return il2cpp::get_class<app::PropertyNameUtils__Class>(type_info(), "UnityEngine", "PropertyNameUtils");
        }
        inline app::PropertyNameUtils* create() {
            return il2cpp::create_object<app::PropertyNameUtils>(get_class());
        }
    } // namespace PropertyNameUtils
} // namespace app::classes::types
