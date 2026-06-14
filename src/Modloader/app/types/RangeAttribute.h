#pragma once
#include <Modloader/app/structs/RangeAttribute.h>
#include <Modloader/app/structs/RangeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RangeAttribute {
        inline app::RangeAttribute__Class** type_info() {
            static app::RangeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RangeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RangeAttribute__Class* get_class() {
            return il2cpp::get_class<app::RangeAttribute__Class>(type_info(), "UnityEngine", "RangeAttribute");
        }
        inline app::RangeAttribute* create() {
            return il2cpp::create_object<app::RangeAttribute>(get_class());
        }
    } // namespace RangeAttribute
} // namespace app::classes::types
