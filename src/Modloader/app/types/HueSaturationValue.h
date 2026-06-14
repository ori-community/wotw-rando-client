#pragma once
#include <Modloader/app/structs/HueSaturationValue.h>
#include <Modloader/app/structs/HueSaturationValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HueSaturationValue {
        inline app::HueSaturationValue__Class** type_info() {
            static app::HueSaturationValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HueSaturationValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HueSaturationValue__Class* get_class() {
            return il2cpp::get_class<app::HueSaturationValue__Class>(type_info(), "Colorful", "HueSaturationValue");
        }
        inline app::HueSaturationValue* create() {
            return il2cpp::create_object<app::HueSaturationValue>(get_class());
        }
    } // namespace HueSaturationValue
} // namespace app::classes::types
