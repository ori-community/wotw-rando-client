#pragma once
#include <Modloader/app/structs/CC_AnalogTV.h>
#include <Modloader/app/structs/CC_AnalogTV__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_AnalogTV {
        inline app::CC_AnalogTV__Class** type_info() {
            static app::CC_AnalogTV__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_AnalogTV__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_AnalogTV__Class* get_class() {
            return il2cpp::get_class<app::CC_AnalogTV__Class>(type_info(), "", "CC_AnalogTV");
        }
        inline app::CC_AnalogTV* create() {
            return il2cpp::create_object<app::CC_AnalogTV>(get_class());
        }
    } // namespace CC_AnalogTV
} // namespace app::classes::types
