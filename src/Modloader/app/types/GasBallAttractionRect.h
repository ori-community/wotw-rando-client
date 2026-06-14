#pragma once
#include <Modloader/app/structs/GasBallAttractionRect.h>
#include <Modloader/app/structs/GasBallAttractionRect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasBallAttractionRect {
        inline app::GasBallAttractionRect__Class** type_info() {
            static app::GasBallAttractionRect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasBallAttractionRect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasBallAttractionRect__Class* get_class() {
            return il2cpp::get_class<app::GasBallAttractionRect__Class>(type_info(), "", "GasBallAttractionRect");
        }
        inline app::GasBallAttractionRect* create() {
            return il2cpp::create_object<app::GasBallAttractionRect>(get_class());
        }
    } // namespace GasBallAttractionRect
} // namespace app::classes::types
