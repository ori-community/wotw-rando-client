#pragma once
#include <Modloader/app/structs/SCurveContrast.h>
#include <Modloader/app/structs/SCurveContrast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SCurveContrast {
        inline app::SCurveContrast__Class** type_info() {
            static app::SCurveContrast__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SCurveContrast__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SCurveContrast__Class* get_class() {
            return il2cpp::get_class<app::SCurveContrast__Class>(type_info(), "Colorful", "SCurveContrast");
        }
        inline app::SCurveContrast* create() {
            return il2cpp::create_object<app::SCurveContrast>(get_class());
        }
    } // namespace SCurveContrast
} // namespace app::classes::types
