#pragma once
#include <Modloader/app/structs/DoubleVision.h>
#include <Modloader/app/structs/DoubleVision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoubleVision {
        inline app::DoubleVision__Class** type_info() {
            static app::DoubleVision__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoubleVision__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoubleVision__Class* get_class() {
            return il2cpp::get_class<app::DoubleVision__Class>(type_info(), "Colorful", "DoubleVision");
        }
        inline app::DoubleVision* create() {
            return il2cpp::create_object<app::DoubleVision>(get_class());
        }
    } // namespace DoubleVision
} // namespace app::classes::types
