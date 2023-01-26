#pragma once
#include <Modloader/app/structs/ColorUsageAttribute.h>
#include <Modloader/app/structs/ColorUsageAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorUsageAttribute {
        inline app::ColorUsageAttribute__Class** type_info() {
            static app::ColorUsageAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorUsageAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorUsageAttribute__Class* get_class() {
            return il2cpp::get_class<app::ColorUsageAttribute__Class>(type_info(), "UnityEngine", "ColorUsageAttribute");
        }
        inline app::ColorUsageAttribute* create() {
            return il2cpp::create_object<app::ColorUsageAttribute>(get_class());
        }
    } // namespace ColorUsageAttribute
} // namespace app::classes::types
