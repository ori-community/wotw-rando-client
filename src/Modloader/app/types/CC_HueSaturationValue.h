#pragma once
#include <Modloader/app/structs/CC_HueSaturationValue.h>
#include <Modloader/app/structs/CC_HueSaturationValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_HueSaturationValue {
        inline app::CC_HueSaturationValue__Class** type_info() {
            static app::CC_HueSaturationValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_HueSaturationValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_HueSaturationValue__Class* get_class() {
            return il2cpp::get_class<app::CC_HueSaturationValue__Class>(type_info(), "", "CC_HueSaturationValue");
        }
        inline app::CC_HueSaturationValue* create() {
            return il2cpp::create_object<app::CC_HueSaturationValue>(get_class());
        }
    } // namespace CC_HueSaturationValue
} // namespace app::classes::types
