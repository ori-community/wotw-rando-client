#pragma once
#include <Modloader/app/structs/SmoothRangeAttribute.h>
#include <Modloader/app/structs/SmoothRangeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmoothRangeAttribute {
        inline app::SmoothRangeAttribute__Class** type_info() {
            static app::SmoothRangeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmoothRangeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmoothRangeAttribute__Class* get_class() {
            return il2cpp::get_class<app::SmoothRangeAttribute__Class>(type_info(), "", "SmoothRangeAttribute");
        }
        inline app::SmoothRangeAttribute* create() {
            return il2cpp::create_object<app::SmoothRangeAttribute>(get_class());
        }
    } // namespace SmoothRangeAttribute
} // namespace app::classes::types
