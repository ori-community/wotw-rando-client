#pragma once
#include <Modloader/app/structs/Threshold.h>
#include <Modloader/app/structs/Threshold__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Threshold {
        inline app::Threshold__Class** type_info() {
            static app::Threshold__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Threshold__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Threshold__Class* get_class() {
            return il2cpp::get_class<app::Threshold__Class>(type_info(), "Colorful", "Threshold");
        }
        inline app::Threshold* create() {
            return il2cpp::create_object<app::Threshold>(get_class());
        }
    } // namespace Threshold
} // namespace app::classes::types
