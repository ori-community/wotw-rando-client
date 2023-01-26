#pragma once
#include <Modloader/app/structs/CC_Threshold.h>
#include <Modloader/app/structs/CC_Threshold__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_Threshold {
        inline app::CC_Threshold__Class** type_info() {
            static app::CC_Threshold__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_Threshold__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_Threshold__Class* get_class() {
            return il2cpp::get_class<app::CC_Threshold__Class>(type_info(), "", "CC_Threshold");
        }
        inline app::CC_Threshold* create() {
            return il2cpp::create_object<app::CC_Threshold>(get_class());
        }
    } // namespace CC_Threshold
} // namespace app::classes::types
