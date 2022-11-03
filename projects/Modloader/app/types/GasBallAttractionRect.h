#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GasBallAttractionRect {
        namespace {
            inline app::GasBallAttractionRect__Class* type_info_ref = nullptr;
        }
        inline app::GasBallAttractionRect__Class** type_info = &type_info_ref;
        inline app::GasBallAttractionRect__Class* get_class() {
            return il2cpp::get_class<app::GasBallAttractionRect__Class>(type_info, "", "GasBallAttractionRect");
        }
        inline app::GasBallAttractionRect* create() {
            return il2cpp::create_object<app::GasBallAttractionRect>(get_class());
        }
    } // namespace GasBallAttractionRect
} // namespace app::classes::types
