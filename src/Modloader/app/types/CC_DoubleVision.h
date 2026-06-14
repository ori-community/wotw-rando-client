#pragma once
#include <Modloader/app/structs/CC_DoubleVision.h>
#include <Modloader/app/structs/CC_DoubleVision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_DoubleVision {
        inline app::CC_DoubleVision__Class** type_info() {
            static app::CC_DoubleVision__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_DoubleVision__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_DoubleVision__Class* get_class() {
            return il2cpp::get_class<app::CC_DoubleVision__Class>(type_info(), "", "CC_DoubleVision");
        }
        inline app::CC_DoubleVision* create() {
            return il2cpp::create_object<app::CC_DoubleVision>(get_class());
        }
    } // namespace CC_DoubleVision
} // namespace app::classes::types
